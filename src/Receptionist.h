#pragma once
#include "RegisteredUser.h"
#define SIZE 2
class Receptionist
{
private:
	char name[30];
	int recpId;
	char phoneNo[10];

	RegisteredUser* ru[SIZE];
public:
	void updateDatabse();
	void receivePayment();
	void generateBill();
};

