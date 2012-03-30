/*	Weekday.h
 *  Determins the day of the week of a given date
 *	
 *	10/28/10
 *
 *  Thomas J. Sell
 */

#ifndef Weekday_H
#define Weekday_H

class Weekday
{
	//holds date
	int month;
	int day;
	int year;
	
	//used in calculation
	int dayNum;
	string dayName;
	
public:
	Weekday(){};
	string weekday(int monthi, int dayi, int yeari);
};

#endif