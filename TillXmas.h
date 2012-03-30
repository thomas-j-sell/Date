/*	TillXmas.h
 *  Given a date, calculates the days left until Christmas
 *	
 *	10/28/10
 *
 *  Thomas J. Sell
 */

#ifndef TILL_XMAS_H
#define TILL_XMAS_H

using namespace std;

class TillXmas
{
	
	int daysLeft;
	//holds date (next date)
	int monthn;
	int dayn;
	int yearn;
	string dayw;
	
	NextDate nextDate;
	Weekday weekday;
	
	string nextstr;
	bool done;
	int slash1;
	int slash2;
	
public:
	TillXmas(){};
	int dLeft(int monthi, int dayi, int yeari);
};
#endif