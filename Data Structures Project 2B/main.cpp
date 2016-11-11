
#include <omp.h>
#include "Menu.h"
#include <fstream>
#include <iostream>
#include <string>


using namespace std;

int main() {
	string book_title;
	string customer;
	string book_ID;
	string x;
	string customer_ID;
	int user_ID;
	int ISBN;
	int ID;
	

	ifstream finBooks("books.txt");
	ifstream finCustomers("customers.txt");
	ifstream finRatings("ratings.txt");
	Bookstore Store;
	Customer User;

	getline(finBooks, book_title);
	while (finBooks)
	{
		x = finBooks.get();
		if (finBooks)
		{
			if (x == ",")
			{
				Store.storebook(ID);
				book_ID = "";
			}
			else
				book_ID = book_ID + x;
		}
		if (x == ",")
		{
			x = finBooks.get();
			getline(finBooks, book_title);
			Store.storebook(title);
			system("pause");
		}
		
	}
	system("pause");
	getline(finCustomers, customer);
	while (finCustomers)
	{
		x = finCustomers.get();
		if (finCustomers)
		{
			if (x == ",")
			{
				Store.storeCustomer(ID);
				customer_ID = "";
			}
			else
				customer_ID = x;
		}
		if (x == ",")
		{
			x = finCustomers.get();
			getline(finCustomers, customer);
			Store.storebook(customer);
			system("pause");
		}

	}

	cout << "Welcome to the Bookstore" << endl;
	user_ID = cin >> "Please enter your user ID: ";
	User=Store.Customer_Search(user_ID);

	bool done=false;
	while (!done)
	{
	string choice=GetChoice();
	if (choice=="0")
	{
		done=true;
		break;
	}
	else if (choice=="1")
	{
		
	}
	else if (choice=="2")
	{
		
	}
	else if (chioce=="3")
	{
	get_Recommended(Customer current_customer, vector customers);
	}

	}
	finBooks.close();
	finCustomers.close();
	finRatings.close();

	return 0;

	

}
