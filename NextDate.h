/*	nextDate.h
 *  A simple class that given a date calculates the date of the next day
 *	
 *	10/28/10
 *
 *  Thomas J. Sell
 */

#ifndef NEXT_DATE_H
#define NEXT_DATE_H

using namespace std;

class NextDate
{
	//holds date
	int month;
	int day;
	int year;
	
	//used in calculation
	bool leap;// if current year is leap year
	int last;//# of last day of current month
	
	void checkLeap();//sets leap
	void checkLast();//sets lastDay
	void increment();//increments the date
	
public:
	NextDate(){leap = false;};
	string next(int monthi, int dayi, int yeari);
};
#endif