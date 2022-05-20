#include "SystemAdmin.h"

class BanquetHall
{
protected:
	int hallid;
private:
	char details[20];
	char requirments[20];
	char date[20];

	SystemAdmin* sys[2];
public:
	void update();

};

