#include <bits/bits-stdc++.h> 
#include "Hotel.h"
using namespace std;


Hotel h;
string name;
string address;
string phone;
int roomnumber;
int x;



void menu1() {
	cout << "1- reserve Room " << endl;
	cout << "2- Search Room " << endl;
	cout << "3- search Customer " << endl;
	cout << "4- Available Rooms " << endl;
	cout << "5- checkOut" << endl;
	cout << "6- Exit" << endl;
	cout << "Choose Your operation : " ;
}

void SreachRoom() {
	system("cls");
	cout << "<--------------- Welcome To Hotel Mangement system --------------->" << endl;
	cout << "----> Search Room : " << endl;
	cout << "Enter Room Number : ";
	cin >> roomnumber;
	h.SreachRoom(roomnumber);
}


void SearchCustomer() {
	system("cls");
	cout << "<--------------- Welcome To Hotel Mangement system --------------->" << endl;
	cout << "----> Search Customer : " << endl;
	cout << "Enter Customer Name : ";
	cin >> name;
	h.searchCustomer(name);
}

void Cheackout() {
	system("cls");
	cout << "<--------------- Welcome To Hotel Mangement system --------------->" << endl;
	cout << "----> Checkout : " << endl;
	cout << "Enter Room Number : ";
	cin >> roomnumber;
	h.checkOut(roomnumber);
}

void reserveroom() {
	system("cls");
	cout << "<--------------- Welcome To Hotel Mangement system --------------->" << endl;
	cout << "----> Reserve Room : " << endl;
	cout << "Enter Customer Name : ";
	cin >> name;
	cout << "Enter Customer Address : ";
	cin >> address;
	cout << "Enter Customer Phone Number : ";
	cin >> phone;
	cout << "Enter Room Number : ";
	cin >> roomnumber;
	h.reserveRoom(name, address, phone, roomnumber);
}


void case1();
void case2();
void case3();
void case4();
void case5();



void screen1() {
	system("cls");
	cout << "<--------------- Welcome To Hotel Mangement system --------------->" << endl;
	
	menu1();
	cin >> x;
	switch (x)
	{
	case 1:
		case1();
		break;
	case 2:
		case2();
		break;
	case 3:
		case3();
		break;
	case 4:
		case4();
		break;
	case 5:
		Cheackout();
		cout << endl;
		cout << "1- Return" << endl;
		cin >> x;
		if (x == 1) {
			screen1();
		}
		break;
	case 6:
		break;
	default:
		break;
	}
}


void case1() {
	system("cls");
	reserveroom();
	cout << endl;
	cout << "1- Reserve Another Room  " << endl;
	cout << "2- Return " << endl;
	cin >> x;
	switch (x)
	{
	case 1: case1();
		break;
	case 2:
		screen1();
		break;
	default:
		break;
	}
}


void case2() {
	SreachRoom();
	cout << endl;
	cout << "1- Sreach for another Room  " << endl;
	cout << "2- Return " << endl;
	cin >> x;
	switch (x)
	{
	case 1: case2();
		break;
	case 2:
		screen1();
		break;
	default:
		break;
	}
}

void case3() {
	SearchCustomer();
	cout << endl;
	cout << "1- Sreach for another Customer  " << endl;
	cout << "2- Return " << endl;
	cin >> x;
	switch (x)
	{
	case 1: case3();
		break;
	case 2:
		screen1();
		break;
	default:
		break;
	}
}

void case4() {
	h.AvailableRooms();
	cout << endl;
	cout << "1- Return" << endl;
	cin >> x;
	if (x == 1) {
		screen1();
	}
}


int main() {
	
	screen1();

	
}