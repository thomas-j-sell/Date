/*	Zodiacer.cpp
 *  A simple class that calculates a given date's associated Zodiac sign
 *	
 *	11/9/10
 *
 *  Thomas J. Sell
 */

#include "Zodiacer.h"

using namespace std;

/*
 * determins the Zodiac sign of the given date
 */

string Zodiacer::sign(int month, int day)
{	
	string sign;
	
	if((month == 1 && day >= 20) || (month == 2 && day <= 18)){
		sign = "Aquarius";
	}
	
	if((month == 2 && day >= 19) || (month == 3 && day <= 20)){
		sign = "Pisces";
	}
	
	if((month == 3 && day >= 21) || (month == 4 && day <= 19)){
		sign = "Aries";
	}
	
	if((month == 4 && day >= 20) || (month == 5 && day <= 20)){
		sign = "Taurus";
	}
	
	if((month == 5 && day >= 21) || (month == 6 && day <= 20)){
		sign = "Gemini";
	}
	
	if((month == 6 && day >= 21) || (month == 7 && day <= 22)){
		sign = "Cancer";
	}
	
	if((month == 7 && day >= 23) || (month == 8 && day <= 22)){
		sign = "Leo";
	}
	
	if((month == 8 && day >= 23) || (month == 9 && day <= 22)){
		sign = "Virgo";
	}
	
	if((month == 9 && day >= 23) || (month == 10 && day <= 22)){
		sign = "Libra";
	}
	
	if((month == 10 && day >= 23) || (month == 11 && day <= 21)){
		sign = "Scorpio";
	}
	
	if((month == 11 && day >= 22) || (month == 12 && day <= 21)){
		sign = "Sagittarius";
	}
	
	if((month == 12 && day >= 22) || (month == 1 && day <= 19)){
		sign = "Capricorn";
	}
	
	return sign;
}