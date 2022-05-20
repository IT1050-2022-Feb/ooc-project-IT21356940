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

#include "Report.h"

void Report::generateEconomyReport(BanquetHall* b)
{
}

void Report::generateUsageReport()
{
}

void Report::generatePopularityReport()
{
}

void Report::displayReport()
{
}
