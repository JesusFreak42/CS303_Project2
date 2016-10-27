
#pragma once;
#include <string>
#include <vector>
using namespace::std;

class book {
public:
	int getISBN() const { return ISBN; };

	string getTitle() const { return title; };

	void setISBN(int newISBN) { ISBN=newISBN; };

	void setTitle(string newtitle) { title = newtitle; };

	int getAverageRating() { return averageRating; };

	void addRating(int newRating) 
	{
		ratingCount++;
		ratingTotal = ratingTotal + newRating;
		averageRating = ratingTotal / ratingCount;
	
	};

private:
	int ISBN = 0;
	string title = "";
	int ratingTotal = 0;
	int ratingCount = 0;
	int averageRating = 0;
};

