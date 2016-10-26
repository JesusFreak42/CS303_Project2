

class Rating {
public:
	int getBookID() { return bookID; };
	int getRating() { return rating; };
	void setBookID(int id) { bookID = id; };
	void setRating(int r) { rating = r; };

private:
	int bookID;
	int rating; //between 0 and 5
};

