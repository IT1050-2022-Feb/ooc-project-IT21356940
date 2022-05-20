#pragma once
#include "BanquetHall.h"
class Report
{
private:
	int reportNo;
public:
	void generateEconomyReport(BanquetHall *b);
	void generateUsageReport();
	void generatePopularityReport();
	void displayReport();
};

