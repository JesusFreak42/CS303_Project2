#pragma once
#include <string>
#include <vector>
#include "Book.h"
#include "Rating.h"
#include "Customer.h"
using namespace::std;

using namespace std;
class Bookstore {
public:
	Book search(string title); //Will return Book
	void rate(Book this_book, Rating rating, Customer user); //MAKE Rating class a child of Book class?
	void getRecommendations(Customer user); //Will return book
	int getAverageRating(int bookID); //returns the book's average rating or, if no ratings, -1
	void updatePopular(Rating newRating);

	Book findBook(int ID) {
		for (int i = 0; i < books.size(); i++) {
			if (books[i].getISBN() == ID) return books[i];
		}
		Book x;
		return x;
	}

private:
	vector<Book> books;	//Need main function to populate these vectors
	vector<Customer> customers;
	vector<Rating> averageRatings; //keeps track of the average rating of each book
	vector<Book> * popular; //points to the X most popular books in books
	static int TOTAL_POPULAR;
};

