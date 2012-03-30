/*	Date.cpp
 *  Main for nextDate
 *  Handles input, error checking and output
 *	
 *	10/28/10
 *
 *  Thomas J. Sell
 */

#include <iostream>
#include "NextDate.cpp"
#include "YesterDate.cpp"
#include "Zodiacer.cpp"
#include "Weekday.cpp"
#include "Friday13.cpp"
#include "TillXmas.cpp"

using namespace std;

int main(int argc, char * argv[])
{
	NextDate nDate;
	YesterDate pDate;
	Zodiacer zodiacer;
	Weekday weekday;
	Friday13 friday13;
	TillXmas tillXmas;
	
	
	if(argc != 4)
	{
		cout << "incorrect arguments" << endl;
		cout << "please formate dates mm dd yyyy" << endl;
		return 0;
	}
	if(argc == 4)
	{
		int month = atoi(argv[1]);
		int day = atoi(argv[2]);
		int year = atoi(argv[3]);
		
		if(month < 1 || month > 12)
		{
			cout << "Given impossible month" << endl;
			return 0;
		}
		if(day < 1 || day > 31)
		{
			cout << "Given impossible day" << endl;
			return 0;
		}
		if(year < 1 || year > 10000)
		{
			cout << "Given year out of range" << endl;
			return 0;
		}
		
		cout << "Next date: " << nDate.next(month, day, year) << endl;
		cout << "Previous date: " << pDate.prev(month, day, year) << endl;
		cout << "Zodiac sign: " << zodiacer.sign(month, day) << endl;
		cout << "Weekday: " << weekday.weekday(month, day, year) << endl;
		cout << "Next Friday the 13th: " << friday13.next(month, day, year) << endl;
		cout << "Days left till Christmas " << tillXmas.dLeft(month, day, year) << endl;
	}
	return 0;
}