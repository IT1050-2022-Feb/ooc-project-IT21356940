#pragma once
#include "Reservation.h"
class CheckIn
{
private:
	char checkinDate[20];

	Reservation* res;

public:
	CheckIn();
	~CheckIn();
};

