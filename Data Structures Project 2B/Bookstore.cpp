#include "Bookstore.h"
#include <iostream>
using namespace std;

Book Bookstore::search(string title) {
	for (int i = 0; i < books.size(); i++) {
		if (books[i].getTitle() == title) {
			return books[i]; //Class can't be returned, will need a way to display information.
		}
	}
}
void Bookstore::rate(Book this_book, Rating book_rating, Customer user) {
	//Check to see if this book exists?
	bool user_rated = false;
	if (user.getRating(this_book.getISBN()).getBookID() != -1) {
		int x = -1;
		cout << "You have not rated this book before, what would you like to rate it? (from 1 to 5)";
		cin >> x; //reading in the rating from the user
		book_rating.setRating(x);
		book_rating.setBookID(this_book.getISBN());
		user.addRating(book_rating); //adding the rating
		this_book.setNumRatings(this_book.getNumRatings() + 1); //increasing the total number of ratings for the book

		bool entryExists = false;
		for (int i = 0; i < averageRatings.size(); i++) { //searches through averageRatings for this book
			if (averageRatings[i].getBookID() == this_book.getISBN()) { //if we found it
				averageRatings[i].setRating((averageRatings[i].getRating() + x) / 2); //figures the new average
				entryExists = true;
				updatePopular(averageRatings[i]);
			}
		}
		if (entryExists == false) { //if we didn't find the book in averageRatings, an entry doesn't exist so we create one
			Rating newEntry;
			newEntry.setBookID(this_book.getISBN());
			newEntry.setRating(x); //setting up the new rating with the current rating
			averageRatings.push_back(newEntry); //adding the new entry
			updatePopular(averageRatings.back());
		}
	}
	else {
		cout << "You have already rated this book.";
	}
}

int Bookstore::getAverageRating(int bookID) {
	for (int i = 0; i < averageRatings.size(); i++) {
		if (averageRatings[i].getBookID() == bookID) return averageRatings[i].getRating(); //looking for the book and returning its average rating
	}
	return -1; //if no ratings are found
}

void Bookstore::updatePopular(Rating newRating) {
	/*vector<Book>::iterator iter;
	while (iter != popular->end()) {
		
	}*/

	for (int i = 0; i < TOTAL_POPULAR; i++) {
		if (popular->at(i) == NULL) {
			popular->at(i) = findBook(newRating.getBookID());
			break;
		}
		else if (getAverageRating(popular->at(i).getISBN()) < getAverageRating(newRating.getBookID()) ) {
			for (int j = TOTAL_POPULAR - 1; j > i; j--) {
				popular->at(j) = popular->at(j - 1);
			}
			popular->at(i) = findBook(newRating.getBookID());
		}
	}
}

void Bookstore::getRecommendations(Customer user) { //Will return book

}

