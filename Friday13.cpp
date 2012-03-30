/*	friday13.h
 *  Given a date, calculates the next Friday the 13th.
 *	
 *	10/28/10
 *
 *  Thomas J. Sell
 */
#include "Friday13.h"

using namespace std;

string Friday13::next(int monthi, int dayi, int yeari)
{

	found = false;
	
	monthn = monthi;
	dayn = dayi;
	yearn = yeari;
	
	while(!found)
	{
		//find next date
		nextstr = nextDate.next(monthn, dayn, yearn);
		
		//parse next date
		slash1 = nextstr.find_first_of('/');
		slash2 = nextstr.find_first_of('/', nextstr.find_first_of('/') + 1);
				
		monthn = atoi(nextstr.substr(0,slash1).c_str());
		dayn = atoi(nextstr.substr(slash1 + 1 ,slash2-slash1).c_str());
		yearn = atoi(nextstr.substr(slash2 + 1).c_str());
		
		//find weekday
		weekdayn = weekday.weekday(monthn, dayn, yearn);
		
		//end loop when Friday the 13th is found
		if(weekdayn == "Friday" && dayn == 13)
		{
			found = true;
		}
	}
	
	stringstream date;
	date << monthn << '/' << dayn << '/' << yearn;
	return date.str();
}