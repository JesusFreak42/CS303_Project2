#pragma once
#include <string>
#include <vector>

using namespace std;
class Bookstore {
public:
	void search(string title, Customer user); //Will return book
	void rate(Book this_book, Rating rating, Customer user); //MAKE Rating class a child of Book class?
	void getRecommendations(Customer user); //Will return book
private:
	vector<Book> books;	//Need main function to populate these vectors
	vector<Customer> customers;
};