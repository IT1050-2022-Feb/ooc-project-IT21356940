class Payment
{
private:
	int id;
	char paid[20];
	char total[10];
	char details[20];

	Checkout* ck;

public:
	Payment();
	void reservePayment();
	void dataStore();
	~Payment();
};

Payment::Payment()
{
}

void Payment::reservePayment()
{
}

void Payment::dataStore()
{
}

Payment::~Payment()
{
}
