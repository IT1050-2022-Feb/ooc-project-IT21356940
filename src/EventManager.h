#pragma once
#include "RegisteredUser.h"
#define SIZE 2
class EventManager
{
private:
	char name[20];
	int id;
	int phoneNo;

	RegisteredUser* ru[SIZE];
public:
	void recordComplaints();
	void manageStaff();
};

