#pragma once
#include "GuestUser.h"
#include "Receptionist.h"
#include "Reservation.h"
#include "EventManager.h"
#define SIZE 2
#define SIZE2 2
class RegisteredUser
{
private:
	int userid;
	char password[50];
	char loginStatus[20];

	EventManager* em;
	GuestUser* gu[SIZE];
	Reservation* re[SIZE2];
	Receptionist* rc;
public:
	void verifyLogin();
	void dataSotre();

};

