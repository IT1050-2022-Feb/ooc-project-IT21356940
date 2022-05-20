#pragma once
#include "RegisteredUser.h"
class GuestUser
{
private:
	char name[50];
	char emailid[20];

	RegisteredUser* ru;
public:
	void uregister();
	void login();
};

