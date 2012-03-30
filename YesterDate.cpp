/*	YesterDate.cpp
 *  A simple class that given a date calculates the date of the previous day
 *	
 *	11/3/10
 *
 *  Thomas J. Sell
 */

#include "YesterDate.h"
#include <sstream>

using namespace std;

/*
 * sets up variables and runs tests to determine the previous date
 */
string YesterDate::prev(int monthi, int dayi, int yeari)
{
	month = monthi;	
	day = dayi;
	year = yeari;
	
	checkLeap();
	checkLast();
	decrement();
	
	stringstream date;
	date << month << '/'<< day << '/'  << year;
	return date.str();
}


/*
 * checks if the year is a leap year
 */
void YesterDate::checkLeap(){
	
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
 * sets the last day variable based on previous month and leap status
 */
void YesterDate::checkLast(){
	
	int pMonth;
	
	//finds previous month
	if(month >1)
	{
		pMonth = month -1;
	}
	else
	{
		pMonth = 12;
	}
	
	//28 day month
	if(pMonth == 2 && !leap)
	{
		last = 28;
	}	
	//29 day month
	else if(pMonth == 2 && leap)
	{
		last = 29;
	}
	
	//30 day month
	else if(pMonth == 4 || pMonth == 6 || pMonth == 9 || pMonth == 11)
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
 * decrements the date based on calculations with current variables
 */
void YesterDate::decrement()
{
	if(day == 1)
	{
		if(month == 1)
		{
			month = 12;
			year--;
		}
		else
		{
			month--;
		}
		
		day = last;
	}
	else
	{
		day--;
	}
}