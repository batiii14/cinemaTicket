#include <iostream>
#include <string>

using namespace std;

class cinema {
private:
	string mTitle;
	char ticketType;
	double ticketPrice;
	int ticketQnt;
	static int totalTicketQnt;
	static double totalTicketPrice;

	void setPrice() {
		
		cout << "\nEnter ticket type that you want to buy for movie " <<this->mTitle<< "\nPlease enter A for Adult and C for Children" << endl;
		cin >> this->ticketType;
		cin.ignore();

		if (this->ticketType == 'C'|| this->ticketType == 'c') {
			this->ticketPrice = 10.00;
		}
		else if (this->ticketType == 'A'|| this->ticketType == 'a') {
			this->ticketPrice = 20.00;
		}
		else {
			cout << "You should enter either A or C" << endl;
		}
	}

public:

	cinema() {
		cout << "Enter the name of the movie: ";
		getline(cin, this->mTitle);
		cout << "Enter number of tickets : ";
		cin >> this->ticketQnt;
		cin.ignore();
		setPrice();
		this->totalTicketQnt += this->ticketQnt;
		this->totalTicketPrice += this->ticketPrice * this->ticketQnt;
	}
	cinema(string mTitle,int ticketQnt) {
		this->mTitle = mTitle;
		this->ticketQnt = ticketQnt;
		setPrice();
		this->totalTicketQnt += this->ticketQnt;
		this->totalTicketPrice += this->ticketPrice * this->ticketQnt;
	}

	~cinema() {
		cout << "The cinema object " << this->mTitle << " has been deleted.."<<endl;
		this->totalTicketQnt -= this->ticketQnt;
		this->totalTicketPrice -= (this->ticketPrice*this->ticketQnt);

	}
	

	string getMovie() const {
		
		return this->mTitle;
	}

	int getTicketQnt() const {
		return this->ticketQnt;
	}

	char getTicketType() {
		return this->ticketType;
	}
	double getTicketPrice() {
		return this->ticketPrice;
	}


	static int getTotalTicketQnt() {
		return totalTicketQnt;
	}
	static double getTotalTicketPrice() {
		return totalTicketPrice;
	}


	



};


double cinema::totalTicketPrice=0;
int cinema::totalTicketQnt=0;