#include "Bookstore.h"
#include <iostream>

using namespace std;
Book Bookstore::search(string title) {
	for (int i = 0, i < books.size(); i++) {
		if (books[i].title = title)
			return Book; //Class can't be returned, will need a way to display information.
	}
}
void Bookstore::rate(Book this_book, Rating book_rating, Customer user) {
	//Check to see if this book exists?
	bool user_rated = false;
	for (int i = 0, i < user.ratings, i++)
		if (user.ratings.bookID[i] = this_book.ISBN) {
			user_rated = true;
			break;
		}
	if (user_rated == false)
		book_rating.rating = cin >> "You have not rated this book before, what would you like to rate it?";
	else
		cout << "You have already rated this book.";
}