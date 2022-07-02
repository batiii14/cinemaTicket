#include <iostream>
#include <string>
#include "cinema.h"

using namespace std;

void main() {
	{	

		cinema cineptr1, * ptr1;
		ptr1 = &cineptr1;


		cinema cineptr2("DELIKANLI", 3), * ptr2;
		ptr2 = &cineptr2;

		cinema cineptrArr[5], * ptr3;
		ptr3 = cineptrArr;

		//movie title and ticket quantity
		//total ticket quantity sold and total ticket price

		cout << "\nTickets sold for movie " << ptr1->getMovie() << " is: " << ptr1->getTicketQnt() << endl;
		cout << "\nTickets sold for movie "<< ptr2->getMovie() << " is: " << ptr2->getTicketQnt() << endl;

		for (int i = 0; i < 5; i++) {
			cout << "\nTickets sold for movie " << ptr3[i].getMovie()<< " is: " << ptr3[i].getTicketQnt() <<
				" The ticket type: "<<ptr3[i].getTicketType() << endl;
		}


		cout<<"\nTotal ticket Price: "<<cinema::getTotalTicketPrice()<<endl;
		cout << "\nTotal ticket Quantity: " << cinema::getTotalTicketQnt()<<endl;

	
	}

	cout << "\nTotal ticket Price: " << cinema::getTotalTicketPrice() << endl;
	cout << "\nTotal ticket Quantity: " << cinema::getTotalTicketQnt() << endl;

	system("pause");
}