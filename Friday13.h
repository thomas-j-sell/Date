/*	friday13.h
 *  Given a date, calculates the next Friday the 13th.
 *	
 *	10/28/10
 *
 *  Thomas J. Sell
 */

#ifndef FRIDAY_13_H
#define FRIDAY_13_H

#include <sstream>

using namespace std;

class Friday13
{
	//holds date (next date)
	int monthn;
	int dayn;
	int yearn;
	string weekdayn;
	
	NextDate nextDate;
	Weekday weekday;
	
	string nextstr;
	bool found;
	int slash1;
	int slash2;
	
public:
	Friday13(){};
	string next(int monthi, int dayi, int yeari);
};
#endif