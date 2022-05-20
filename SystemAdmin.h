#pragma once
class SystemAdmin
{
private:
	char username[30];
	char password[];
public:
	void addHall();
	void deleteHall();
	void updateHall();
};

