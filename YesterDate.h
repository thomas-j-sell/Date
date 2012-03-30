/*	YesterDate.h
 *  A simple class that given a date calculates the date of the previous day
 *	
 *	11/3/10
 *
 *  Thomas J. Sell
 */

#ifndef YESTER_DATE_H
#define YESTER_DATE_H

using namespace std;

class YesterDate
{
	//holds date
	int day;
	int month;
	int year;
	
	//used in calculation
	bool leap;// if current year is leap year
	int last;//# of last day of previous month
	
	void checkLeap();//sets leap
	void checkLast();//sets lastDay
	void decrement();//decrements the date
	
public:
	YesterDate(){leap = false;};
	string prev(int monthi, int dayi, int yeari);
};
#endif