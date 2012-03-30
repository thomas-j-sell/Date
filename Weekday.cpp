/*	Weekday.h
 *  Determins the day of the week of a given date
 *	
 *	10/28/10
 *
 *  Thomas J. Sell
 */

#include "Weekday.h"
#include <math.h>
#include <iostream>

using namespace std;

/*
 * sets up variables and implements zeller's algorithm to determine the weekday
 */

string Weekday::weekday(int monthi, int dayi, int yeari)
{
	//set up variables
	month = monthi;
	day = dayi;
	year = yeari;
	
	//fix variables to fit algorithm
	if(month == 1 || month == 2)
	{
		month = month + 12;
		year --;
	}
	
	//implement zeller's algorithm
	dayNum = (day + int (floor(((month+1)*26)/10)) + year + int (floor(year/4)) +
		(6 * int (floor(year/100))) + (int (floor(year/400)))) % 7;
	
	//sets dayName based on dayNum
	if(dayNum == 0)
	{
		dayName = "Saturday";
	}
	if(dayNum == 1)
	{
		dayName = "Sunday";
	}
	if(dayNum == 2)
	{
		dayName = "Monday";
	}
	if(dayNum == 3)
	{
		dayName = "Tuesday";
	}
	if(dayNum == 4)
	{
		dayName = "Wednesday";
	}
	if(dayNum == 5)
	{
		dayName = "Thursday";
	}
	if(dayNum == 6)
	{
		dayName = "Friday";
	}
	
	//return result
	return dayName;
}