#pragma once
#include "Customers.h"
class Hotel
{
private:
	vector<Rooms> room;
	vector<Customers> c;
public:
	Hotel() {
		for (int i = 0; i < 50; i++) {
			room.push_back(Rooms(i + 1));
		}
	}
	void reserveRoom(string name, string address, string phone, int roomNumber) {
		if (!room[roomNumber - 1].isAvailable) {
			cout << "Room " << roomNumber << " is not available.\n";
			return;
		}
		room[roomNumber - 1].isAvailable = false;
		c.push_back(Customers(name, address, phone, roomNumber));
		cout << "Room " << roomNumber << " has been reserved for " << name << ".\n";
	}
	void SreachRoom(int roomnumber) {
		if (room[roomnumber - 1].isAvailable) {
			cout << "Room " << roomnumber << " is  available.\n";
			return;
		}
		else {
			cout << "Room " << roomnumber << " is not available .\n";
			for (int i = 0; i < c.size(); i++) {
				if (c[i].roomNumber == roomnumber) {
					cout << "Customer found:\n";
					cout << "Name: " << c[i].name << "\n";
					cout << "Address: " << c[i].address << "\n";
					cout << "Phone: " << c[i].phoneNumber << "\n";
					cout << "Room Number: " << c[i].roomNumber << "\n";
					break;
				}
			}
			
		}
	}
	void searchCustomer(string name) {
		bool found = false;
		for (int i = 0; i < c.size();i++) {
			if (c[i].name == name) {
				cout << "Customer found:\n";
				cout << "Name: " << c[i].name << "\n";
				cout << "Address: " << c[i].address << "\n";
				cout << "Phone: " << c[i].phoneNumber << "\n";
				cout << "Room Number: " << c[i].roomNumber << "\n";
				found = true;
				break;
			}
		}
		if (!found) {
			cout << "Customer not found.\n";
		}
	}
	void AvailableRooms() {
		for (int i = 0; i < room.size(); i++) {
			if (room[i].isAvailable) {
				cout << "Room number : " << room[i].number <<" is available" << "\n";
			}
		}
	}
	void checkOut(int roomNumber) {
		// check if room is already available
		if (room[roomNumber - 1].isAvailable) {
			cout << "Room " << roomNumber << " is already available.\n";
			return;
		}
		// check out room
		room[roomNumber - 1].isAvailable = true;
		// remove customer from list
		for (int i = 0; i < c.size(); i++) {
			if (c[i].roomNumber == roomNumber) {
				c.erase(c.begin() + i);
				break;
			}
		}
		cout << "Room " << roomNumber << " has been checked out" << endl;
		cout << "Your Cost  = 50$ " << endl;
	}
};

