
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
	
	bool Correct_Book=false;
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
		while(!Correct_Book)
		{
		string Book_title=Get_Book_Input()
		Book Selected_Book= 			//search for book function
		Correct_Book=Check_Book(Selected_Book)
		Display_Book_Rating(Selected_Book)
							//rate book function
		}
	}
	else if (choice=="2")
	{
		while(!Correct_Book)
		{	
		string Book_title=Get_Book_Input()
		Book Selected_Book= 					//search for book function
		bool Check_Book(Selected_Book)
							//rate book function
		}
	}
	else if (choice=="3")
	{
	get_Recommended(User, Store.getCustomers());
	}

	}
	finBooks.close();
	finCustomers.close();
	finRatings.close();

	return 0;

	

}
