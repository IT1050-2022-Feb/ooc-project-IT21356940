#pragma once
#include "Checkout.h"
#include "BanquetHall.h"
#include "CheckIn.h"
#include "RegisteredUser.h"

#define SIZE 2
#define SIZE2 3
#define SIZE3 4
#define SIZE4 2
class Reservation
{
protected:
	int reserveNo;
private:
	char date[20];
	char reciept[20];
	char amount[20];

	CheckIn* chk[SIZE];
	Checkout* chkout[SIZE2];
	BanquetHall* bhall[SIZE3];
	RegisteredUser* ru[SIZE4];
public:
	void searchHall();
	void cancelReservation();
	void makeReservation();
	Reservation();
	~Reservation();
};

