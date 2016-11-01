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
		cout << "You have not rated this book before, what would you like to rate it?";
		cin >> x;
		book_rating.setRating(x);
	}
	else {
		cout << "You have already rated this book.";
	}
}

void getRecommendations(Customer user) { //Will return book

}

