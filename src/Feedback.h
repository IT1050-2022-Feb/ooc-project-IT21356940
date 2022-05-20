#pragma once
#include "GuestUser.h"
#include "RegisteredUser.h"
class Feedback
{
private:
	int feedBackNo;
	char email[50];
	char feedbackMsg[20];

	RegisteredUser* ru;
public:
	void displayFeedback(GuestUser *gu,RegisteredUser *ru);
};

