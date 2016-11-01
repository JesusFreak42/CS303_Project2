
#pragma once;
#include <string>
#include <vector>
using namespace::std;

class Book {
public:
	int getISBN() const { return ISBN; };
	string getTitle() const { return title; };
	void setISBN(int newISBN) { ISBN=newISBN; };
	void setTitle(string newtitle) { title = newtitle; };

private:
	int ISBN = 0;
	string title = "";
};

