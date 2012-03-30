/*	TillXmas.cpp
 *  Given a date, calculates the days left until Christmas
 *	
 *	10/28/10
 *
 *  Thomas J. Sell
 */
#include "TillXmas.h"

int TillXmas::dLeft(int monthi, int dayi, int yeari)
{
	monthn = monthi;
	dayn = dayi;
	yearn = yeari;
	daysLeft = 1;
	done = false;
	
	
	while (!done)
	{
		//find next date
		nextstr = nextDate.next(monthn,dayn,yearn);
		
		//parse next date
		slash1 = nextstr.find_first_of('/');
		slash2 = nextstr.find_first_of('/', nextstr.find_first_of('/') + 1);
		monthn = atoi(nextstr.substr(0,slash1).c_str());
		dayn = atoi(nextstr.substr(slash1 + 1 ,slash2-slash1).c_str());
		yearn = atoi(nextstr.substr(slash2 + 1).c_str());
		dayw = weekday.weekday(monthn, yearn, yearn);
		
		if(monthn == 12 && dayn == 25){done = true;}
		else if(dayw == "Sunday" || monthn == 7 && dayn == 4 
				|| monthn == 1 && dayn == 1){}
		else {daysLeft += 1;}	
	}
	
	return daysLeft;
}