/*	nextDate.cpp
 *  A simple class that given a date calculates the date of the next day
 *	
 *	10/28/10
 *
 *  Thomas J. Sell
 */

#include "NextDate.h"
#include <sstream>

using namespace std;

/*
 * sets up variables and runs tests to determine the next date
 */
string NextDate::next(int monthi, int dayi, int yeari)
{
	month = monthi;	
	day = dayi;
	year = yeari;
	
	checkLeap();
	checkLast();
	increment();
	
	stringstream date;
	date << month << '/'<< day << '/'  << year;
	return date.str();
}


/*
 * checks if the year is a leap year
 */
void NextDate::checkLeap(){
	
	if(year % 400 == 0)
	{
		leap = true;
	}
	else if(year % 100 == 0)
	{
		leap = false;
	}
	else if(year % 4 == 0)
	{
		leap = true;
	}
}


/*
 * sets the last day variable based on current month and leap status
 */
void NextDate::checkLast(){
	
	//28 day month
	if(month == 2 && !leap)
	{
		last = 28;
	}	
	//29 day month
	else if(month == 2 && leap)
	{
		last = 29;
	}
		
	//30 day month
	else if(month == 4 || month == 6 || month == 9 || month == 11)
	{	
		last = 30;
	}
		
	//31 day month
	else
	{
		last = 31;
	}
}


/*
 * increments the date based on calculations with current variables
 */
void NextDate::increment()
{
	if(day == last)
	{
		if(month == 12)
		{
			month = 1;
			year++;
		}
		else
		{
			month++;
		}
		
		day = 1;
	}
	else
	{
		day++;
	}
}