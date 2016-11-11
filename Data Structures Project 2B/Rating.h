

class Rating {
public:
	Rating() {
		bookID = -1;
		rating = -1;
	}

	int getBookID() { return bookID; };
	int getRating() { return rating; };
	void setBookID(int id) { bookID = id; };
	void setRating(int r) { rating = r; };

private:
	int bookID;
	int rating; //between 0 and 5
};

Rating Rating::operator=(const Rating & rhs)
{
	if(this == &rhs)
		return *this;
    	bookID=rhs.getBookID();
	rating=rhs.getRating();
	return *this;
}
