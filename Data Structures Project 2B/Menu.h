#pragma once

#include "Book.h";

#include "Rating.h";
//#include "Bookstore.h";
#include "Customer.h";

using namespace std;
#include <iostream>;
#include <string>;

class Menu {
public:

	bool Validate_input(string validCharacters, string input) //insures that only valid input is recieved
	{
		for (int i = 0; i < input.size(); i++) //iterates through string input
		{
			if (validCharacters.find(input[i]) == -1) //look for character 
			{
				cout << endl << input[i];
				cout << " is not a valid input character." << endl << endl;  //inform user if it isn't there
				return false;
			}
		}
		return true;
	};

	string Get_Choice() // first menu allows user to choose action
	{
		bool validInput = false;
		string choice;
		while (!validInput)
		{
			cout << endl;
			cout << "________Menu________" << endl;  //initial choice to allow input of the 2 polynomials
			cout << "Please select from the options below.(use the number representing the choice)" << endl << endl;
			cout << "0) Log Out" << endl;
			cout << "1) Search For and Probably Rate Book";
			cout << "2) Rate an Unrated Book " << endl;;
			cout << "3) View Book Recommendations By Relevence" << endl;
			cout << "[0-3]:" << endl;;
			cin >> choice;
			validInput = Validate_input("0123", choice);
		}
		return choice;
	};

	bool Check_Book(Book output)  //checks if right book
	{
		cout << " You have selected " << output.getTitle() << "." << endl;
		cout << " This book has an ISBN number of " << output.getISBN() << "." << endl;
		

		bool validInput = false;
		string choice;
		while (!validInput)
		{
			cout << endl;
			cout << "Is this the correct Book? Y/N" << endl << endl;
			cin >> choice;
			validInput = Validate_input("YyNn", choice);
		}
		if (choice == "y" || choice == "Y")
			return true;
		else
			return false;
	};

	void Display_Book_Rating(Book output)
	{
		cout << "The Average Rating Of " << output.getTitle << " Is " << output.getAverageRating() << "." << endl;
	};

	void /*  actually returns rating    */ Get_Rating(/*rating output*/) 
	{
		string input;
		bool validInput = false;
		while (!validInput)
		{
			cout << "Enter Your Rating.  (Rating scale is from 1 to 5)" << endl << endl;
			cout << ":";
			cin >> input;
			validInput = Validate_input("12345", input);
		}
	};

	void Display_Recommendations(/*array or list or whatever*/) 
	{
		cout << "Your Recommended Books are:" << endl << endl;

	/* for (int i=0; i<array.size();i++;
		{
		cout<< i+1 <<<<") " array[i]<<endl;
		}
	*/

	};

	string Get_Book_Input()
	{
		bool validInput = false;
		string input;
		while (!validInput)
		{
			cout << "Please enter Your Book's ISBN or Title" << endl;
			cout << " :";
			cin >> input;
			validInput = Validate_input("0123456789aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ", input);
		}
		return input;
	};

};

