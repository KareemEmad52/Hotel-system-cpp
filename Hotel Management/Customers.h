#pragma once
#include "Rooms.h"
class Customers
{
public:
	string name;
	string address;
	string phoneNumber;
	int roomNumber;

	Customers(string name, string adddress, string phone, int roomNumber) {
		this->name = name;
		this->address = adddress;
		this->phoneNumber = phone;
		this->roomNumber = roomNumber;
	}
	
};

