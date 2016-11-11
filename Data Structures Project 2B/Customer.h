
#include <string>
#include <vector>
#include "Rating.h"
using namespace::std;

class Customer {
public:
	int getID() const { return ID; };
	string getName() const { return name; };
	Rating getRating(Rating r) {
		for (int i = 0; i < ratings.size(); i++) {
			if (ratings.at(i).getBookID() == r.getBookID()) return ratings.at(i);
		}
		Rating x;
		return x;
	};
	Rating getRating(int ISBN) {
		for (int i = 0; i < ratings.size(); i++) {
			if (ratings.at(i).getBookID() == ISBN) return ratings.at(i);
		}
		Rating x;
		return x;
	};
	int getNumRatings() { return ratings.size(); };
	vector<Rating> getAllRatings() { return ratings; };

	void setID(int x) { ID = x; };
	void setName(string n) { name = n; };
	void addRating(Rating r) { ratings.push_back(r); };

private:
	int ID;
	string name;
	vector<Rating> ratings;
};

Customer Customer::operator=(const Customer & rhs)
{
	if(this == &rhs)
		return *this;
	ID=rhs.getID();
	name=rhs.getName();
	ratings=rhs.getAllRatings();
	return *this;
}

