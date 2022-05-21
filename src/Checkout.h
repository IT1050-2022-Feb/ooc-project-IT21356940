#include "Reservation.h"
#include "Payment.h"
#define SIZE 2
class Checkout
{
private:
	char checkoutDate[30];

	Reservation* r;
	Payment* pay[SIZE];
public:
	void paymentUpdate();
	void dataStore();
};

