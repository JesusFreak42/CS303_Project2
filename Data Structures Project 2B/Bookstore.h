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
private:
	vector<Book> books;	//Need main function to populate these vectors
	vector<Customer> customers;
};

