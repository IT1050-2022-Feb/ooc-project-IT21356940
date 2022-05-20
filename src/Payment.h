#pragma once
#include "Checkout.h"
class Payment
{
private:
	int id;
	char paid[20];
	char total[10];
	char details[20];

	Checkout* ck;

public:
	void reservePayment();
	void dataStore();
};

