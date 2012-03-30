/*	DateMain.cpp
 *  Main for testing NextDate, YesterDate, and Zodiacer
 *  Handles input and output
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

int main()
{
	NextDate nDate;
	YesterDate pDate;
	Zodiacer zodiacer;
	Weekday weekday;
	Friday13 friday13;
	TillXmas tillXmas;
	
	cout << endl;
	/*
	 * test cases for NextDate
	 */
		cout << "NextDate test cases" << endl;
	{
	cout << "Test case 1: increment normal Date" << endl;
	cout <<"input: 10/28/2010" << " result" << nDate.next(10,28,2010) << endl;
	cout << endl;
	
	cout << "Test case 2: increment 30 day month" << endl;
	cout <<"input: 4/30/2010" << " result" << nDate.next(4,30,2010) << endl;
	cout << endl;
	
	cout <<"Test case 3: increment 31 day month" << endl;
	cout <<"input: 1/31/2010" << " result" << nDate.next(1,31,2010) << endl;	
	cout << endl;
	
	cout << "Test case 4: increment year" << endl;
	cout <<"input: 12/31/2010" << " result" << nDate.next(12,31,2010) << endl;	
	cout << endl;
	
	cout << "Test case 5: 2/28 common year" << endl;
	cout <<"input: 2/28/2010" << " result" << nDate.next(2,28,2010) << endl;
	cout << endl;
	
	cout << "Test case 6: 2/28 leap year" << endl;
	cout <<"input: 2/28/2008" << " result" << nDate.next(2,28,2008) << endl;
	cout << endl;
	
	cout << "Test case 7: 2/28 common century year" << endl;
	cout <<"input: 2/28/2100" << " result" << nDate.next(2,28,2100) << endl;
	cout << endl;
	}
	
	/*
	 * test cases for YesterDate
	 */
		cout << "YesterDate test cases" << endl;
	{
	cout << "Test case 8: decrement normal Date" << endl;	
	cout <<"input: 10/28/2010" << " result" << pDate.prev(10,28,2010) << endl;
	cout << endl;
	
	cout << "Test case 9: decrement 30 day month" << endl;
	cout <<"input: 5/1/2010" << " result" << pDate.prev(5,1,2010) << endl;
	cout << endl;
	
	cout <<"Test case 10: decrement 31 day month" << endl;
	cout <<"input: 2/1/2010" << " result" << pDate.prev(2,1,2010) << endl;	
	cout << endl;
	
	cout << "Test case 11: decrement year" << endl;
	cout <<"input: 1/1/2010" << " result" << pDate.prev(1,1,2010) << endl;	
	cout << endl;
	
	cout << "Test case 12: 3/1 common year" << endl;
	cout <<"input: 3/1/2010" << " result" << pDate.prev(3,1,2010) << endl;
	cout << endl;
	
	cout << "Test case 13: 3/1 leap year" << endl;
	cout <<"input: 3/1/2008" << " result" << pDate.prev(3,1,2008) << endl;
	cout << endl;
	
	cout << "Test case 14: 3/1 common century year" << endl;
	cout <<"input: 3/1/2100" << " result" << pDate.prev(3,1,2100) << endl;
	cout << endl;
	
	}
	
	/*
	 * test cases for Zodiacer
	 */
		cout << "Zodiacer test cases" << endl;
	//Aquarius
	{
	cout << "test case 15: lower bound Aquarius" << endl;
	cout << "input 1/20" << " result: " << zodiacer.sign(1,20) << endl;
	cout << endl;
	
	cout << "test case 16: lower month Aquarius" << endl;
	cout << "input 1/20" << " result: " << zodiacer.sign(1,25) << endl;
	cout << endl;
	
	cout << "test case 17: upper month Aquarius" << endl;
	cout << "input 2/10" <<  " result: " << zodiacer.sign(2,10) << endl;
	cout << endl;
	
	cout << "test case 18: upper bound Aquarius" << endl;
	cout << "input 2/18" <<  " result: " << zodiacer.sign(2,18) << endl;
	cout << endl;
	}
	
	//Pisces
	{
	cout << "test case 19: lower bound Pisces" << endl;
	cout << "input 2/19" <<  " result: " << zodiacer.sign(2,19) << endl;
	cout << endl;
	
	cout << "test case 20: lower month Pisces" << endl;
	cout << "input 2/25" <<  " result: " << zodiacer.sign(2,25) << endl;
	cout << endl;
	
	cout << "test case 21: upper month Pisces" << endl;
	cout << "input 3/15" <<  " result: " << zodiacer.sign(3,15) << endl;
	cout << endl;
	
	cout << "test case 22: upper bound Pisces" << endl;
	cout << "input 3/20" <<  " result: " << zodiacer.sign(3,20) << endl;
	cout << endl;
	}
	
	//Aries
	{
	cout << "test case 23: lower bound Aries" << endl;
	cout << "input 3/21" <<  " result: " << zodiacer.sign(3,21) << endl;
	cout << endl;
	
	cout << "test case 24: lower month Aries" << endl;
	cout << "input 3/25" <<  " result: " << zodiacer.sign(3,25) << endl;
	cout << endl;
	
	cout << "test case 25: upper month Aries" << endl;
	cout << "input 4/15" <<  " result: " << zodiacer.sign(4,15) << endl;
	cout << endl;
	
	cout << "test case 26: upper bound Aries" << endl;
	cout << "input 4/19" <<  " result: " << zodiacer.sign(4,19) << endl;
	cout << endl;
	}
	
	//Taurus
	{
	cout << "test case 27: lower bound Taurus" << endl;
	cout << "input 4/20" <<  " result: " << zodiacer.sign(4,20) << endl;
	cout << endl;
	
	cout << "test case 28: lower month Taurus" << endl;
	cout << "input 4/25" <<  " result: " << zodiacer.sign(4,25) << endl;
	cout << endl;
	
	cout << "test case 29: upper month Taurus" << endl;
	cout << "input 5/15" <<  " result: " << zodiacer.sign(5,15) << endl;
	cout << endl;
	
	cout << "test case 30: upper bound Taurus" << endl;
	cout << "input 5/20" <<  " result: " << zodiacer.sign(5,20) << endl;
	cout << endl;
	}
	
	//Gemini
	{
	cout << "test case 31: lower bound Gemini" << endl;
	cout << "input 5/21" <<  " result: " << zodiacer.sign(5,21) << endl;
	cout << endl;
	
	cout << "test case 32: lower month Gemini" << endl;
	cout << "input 5/25" <<  " result: " << zodiacer.sign(5,25) << endl;
	cout << endl;
	
	cout << "test case 33: upper month Gemini" << endl;
	cout << "input 6/15" <<  " result: " << zodiacer.sign(6,15) << endl;
	cout << endl;
	
	cout << "test case 34: upper bound Gemini" << endl;
	cout << "input 6/20" <<  " result: " << zodiacer.sign(6,20) << endl;
	cout << endl;
	}
	
	//Cancer
	{
	cout << "test case 35: lower bound Cancer" << endl;
	cout << "input 6/21" <<  " result: " << zodiacer.sign(6,21) << endl;
	cout << endl;
	
	cout << "test case 36: lower month Cancer" << endl;
	cout << "input 6/25" <<  " result: " << zodiacer.sign(6,25) << endl;
	cout << endl;
	
	cout << "test case 37: upper month Cancer" << endl;
	cout << "input 7/15" <<  " result: " << zodiacer.sign(7,15) << endl;
	cout << endl;
	
	cout << "test case 38: upper bound Cancer" << endl;
	cout << "input 7/22" <<  " result: " << zodiacer.sign(7,22) << endl;
	cout << endl;
	}
	
	//Leo
	{
	cout << "test case 39: lower bound Leo" << endl;
	cout << "input 7/23" <<  " result: " << zodiacer.sign(7,23) << endl;
	cout << endl;
	
	cout << "test case 40: lower month Leo" << endl;
	cout << "input 7/25" <<  " result: " << zodiacer.sign(7,25) << endl;
	cout << endl;
	
	cout << "test case 41: upper month Leo" << endl;
	cout << "input 8/15" <<  " result: " << zodiacer.sign(8,15) << endl;
	cout << endl;
	
	cout << "test case 42: upper bound Leo" << endl;
	cout << "input 8/22" <<  " result: " << zodiacer.sign(8,22) << endl;
	cout << endl;
	}
	
	//Virgo
	{
	cout << "test case 43: lower bound Virgo" << endl;
	cout << "input 8/23" <<  " result: " << zodiacer.sign(8,23) << endl;
	cout << endl;
	
	cout << "test case 45: lower month Virgo" << endl;
	cout << "input 8/25" <<  " result: " << zodiacer.sign(8,25) << endl;
	cout << endl;
	
	cout << "test case 46: upper month Virgo" << endl;
	cout << "input 9/15" <<  " result: " << zodiacer.sign(9,15) << endl;
	cout << endl;
	
	cout << "test case 47: upper bound Virgo" << endl;
	cout << "input 9/22" <<  " result: " << zodiacer.sign(9,22) << endl;
	cout << endl;
	}
	
	//Libra
	{
	cout << "test case 48: lower bound Libra" << endl;
	cout << "input 9/23" <<  " result: " << zodiacer.sign(9,23) << endl;
	cout << endl;
	
	cout << "test case 49: lower month Libra" << endl;
	cout << "input 9/25" <<  " result: " << zodiacer.sign(9,25) << endl;
	cout << endl;
	
	cout << "test case 50: upper month Libra" << endl;
	cout << "input 10/15" <<  " result: " << zodiacer.sign(10,15) << endl;
	cout << endl;
	
	cout << "test case 51: upper bound Libra" << endl;
	cout << "input 10/22" <<  " result: " << zodiacer.sign(10,22) << endl;
	cout << endl;
	}
	
	//Scorpio
	{
	cout << "test case 52: lower bound Scorpio" << endl;
	cout << "input 10/23" <<  " result: " << zodiacer.sign(10,23) << endl;
	cout << endl;
	
	cout << "test case 53: lower month Scorpio" << endl;
	cout << "input 10/25" <<  " result: " << zodiacer.sign(10,25) << endl;
	cout << endl;
	
	cout << "test case 54: upper month Scorpio" << endl;
	cout << "input 11/15" <<  " result: " << zodiacer.sign(11,15) << endl;
	cout << endl;
	
	cout << "test case 55: upper bound Scorpio" << endl;
	cout << "input 11/21" <<  " result: " << zodiacer.sign(11,21) << endl;
	cout << endl;
	}
	
	//Sagittarius
	{
	cout << "test case 56: lower bound Sagittarius" << endl;
	cout << "input 11/22" <<  " result: " << zodiacer.sign(11,22) << endl;
	cout << endl;
	
	cout << "test case 57: lower month Sagittarius" << endl;
	cout << "input 11/25" <<  " result: " << zodiacer.sign(11,25) << endl;
	cout << endl;
	
	cout << "test case 58: upper month Sagittarius" << endl;
	cout << "input 12/15" <<  " result: " << zodiacer.sign(12,15) << endl;
	cout << endl;
	
	cout << "test case 59: upper bound Sagittarius" << endl;
	cout << "input 12/21" <<  " result: " << zodiacer.sign(12,21) << endl;
	cout << endl;
	}
	
	//Capricorn
	{
	cout << "test case 60: lower bound Capricorn" << endl;
	cout << "input 12/22" <<  " result: " << zodiacer.sign(12,22) << endl;
	cout << endl;
	
	cout << "test case 61: lower month Capricorn" << endl;
	cout << "input 12/25" <<  " result: " << zodiacer.sign(12,25) << endl;
	cout << endl;
	
	cout << "test case 62: upper month Capricorn" << endl;
	cout << "input 1/15" <<  " result: " << zodiacer.sign(1,15) << endl;
	cout << endl;
	
	cout << "test case 63: upper bound Capricorn" << endl;
	cout << "input 1/19" <<  " result: " << zodiacer.sign(1,19) << endl;
	cout << endl;
	}
	
	/*
	 * test cases for Weekday
	 */	
		cout << "Weekday test cases" << endl;
	{
		//current week
		cout << "test case 64: Expected Saturday" << endl;
		cout << "input 11/20/2010" << " result: " << weekday.weekday(11, 20, 2010) << endl;
		cout << endl;
		
		cout << "test case 65: Expected Sunday" << endl;
		cout << "input 11/21/2010" << " result: " << weekday.weekday(11, 21, 2010) << endl;
		cout << endl;
		
		cout << "test case 66: Expected Monday" << endl;
		cout << "input 11/22/2010" << " result: " << weekday.weekday(11, 22, 2010) << endl;
		cout << endl;
		
		cout << "test case 67: Expected Tuesday" << endl;
		cout << "input 11/23/2010" << " result: " << weekday.weekday(11, 23, 2010) << endl;
		cout << endl;
		
		cout << "test case 68: Expected Wednesday" << endl;
		cout << "input 11/24/2010" << " result: " << weekday.weekday(11, 24, 2010) << endl;
		cout << endl;
		
		cout << "test case 69: Expected Thursday" << endl;
		cout << "input 11/25/2010" << " result: " << weekday.weekday(11, 25, 2010) << endl;
		cout << endl;
		
		cout << "test case 70: Expected Friday" << endl;
		cout << "input 11/26/2010" << " result: " << weekday.weekday(11, 26, 2010) << endl;
		cout << endl;
		
		//pre-2000 week
		cout << "test case 71: Expected Saturday" << endl;
		cout << "input 6/12/1999" << " result: " << weekday.weekday(6, 12, 1999) << endl;
		cout << endl;
		
		cout << "test case 72: Expected Sunday" << endl;
		cout << "input 6/12/1999" << " result: " << weekday.weekday(6, 13, 1999) << endl;
		cout << endl;
		
		cout << "test case 73: Expected Monday" << endl;
		cout << "input 6/12/1999" << " result: " << weekday.weekday(6, 14, 1999) << endl;
		cout << endl;
		
		cout << "test case 74: Expected Tuesday" << endl;
		cout << "input 6/12/1999" << " result: " << weekday.weekday(6, 15, 1999) << endl;
		cout << endl;
		
		cout << "test case 75: Expected Wednesday" << endl;
		cout << "input 6/12/1999" << " result: " << weekday.weekday(6, 16, 1999) << endl;
		cout << endl;
		
		cout << "test case 76: Expected Thursday" << endl;
		cout << "input 6/12/1999" << " result: " << weekday.weekday(6, 17, 1999) << endl;
		cout << endl;
		
		cout << "test case 77: Expected Friday" << endl;
		cout << "input 6/12/1999" << " result: " << weekday.weekday(6, 18, 1999) << endl;
		cout << endl;
		
		//week spanning 2 months
		cout << "test case 78: Expected Saturday" << endl;
		cout << "input 11/27/2010" << " result: " << weekday.weekday(11, 27, 2010) << endl;
		cout << endl;
		
		cout << "test case 79: Expected Sunday" << endl;
		cout << "input 11/28/2010" << " result: " << weekday.weekday(11, 28, 2010) << endl;
		cout << endl;
		
		cout << "test case 80: Expected Monday" << endl;
		cout << "input 11/29/2010" << " result: " << weekday.weekday(11, 29, 2010) << endl;
		cout << endl;
		
		cout << "test case 81: Expected Tuesday" << endl;
		cout << "input 11/30/2010" << " result: " << weekday.weekday(11, 30, 2010) << endl;
		cout << endl;
		
		cout << "test case 82: Expected Wednesday" << endl;
		cout << "input 12/1/2010" << " result: " << weekday.weekday(12, 1, 2010) << endl;
		cout << endl;
		
		cout << "test case 83: Expected Thursday" << endl;
		cout << "input 12/2/2010" << " result: " << weekday.weekday(12, 2, 2010) << endl;
		cout << endl;
		
		cout << "test case 84: Expected Friday" << endl;
		cout << "input 12/3/2010" << " result: " << weekday.weekday(12, 3, 2010) << endl;
		cout << endl;
		
		//week spanning 2 years
		cout << "test case 78: Expected Saturday" << endl;
		cout << "input 12/29/2007" << " result: " << weekday.weekday(12, 29, 2007) << endl;
		cout << endl;
		
		cout << "test case 79: Expected Sunday" << endl;
		cout << "input 12/30/2007" << " result: " << weekday.weekday(12, 30, 2007) << endl;
		cout << endl;
		
		cout << "test case 80: Expected Monday" << endl;
		cout << "input 12/31/2007" << " result: " << weekday.weekday(12, 31, 2007) << endl;
		cout << endl;
		
		cout << "test case 81: Expected Tuesday" << endl;
		cout << "input 1/1/2008" << " result: " << weekday.weekday(1, 1, 2008) << endl;
		cout << endl;
		
		cout << "test case 82: Expected Wednesday" << endl;
		cout << "input 1/2/2008" << " result: " << weekday.weekday(1, 2, 2008) << endl;
		cout << endl;
		
		cout << "test case 83: Expected Thursday" << endl;
		cout << "input 1/3/2008" << " result: " << weekday.weekday(1, 3, 2008) << endl;
		cout << endl;
		
		cout << "test case 84: Expected Friday" << endl;
		cout << "input 1/4/2008" << " result: " << weekday.weekday(1, 4, 2008) << endl;
		cout << endl;
	}
	
	
	/*
	 * test cases for Friday13
	 * Because this class's logic consists of simple parsing and boolean comparisons
	 * and depends on NextDate and Weekday, which have already been tested, I only need
	 * to a few test cases to verify this class.
	 */
	{
		cout << "test case 85:, general date: expected 8/13/2010" << endl;
		cout << "input 5/20/2010" << " result: " << friday13.next(5, 20, 2010) << endl;
		cout << endl;
		
		cout << "test case 86, general date: expected 5/13/2011" << endl;
		cout << "input 10/1/2010" << " result: " << friday13.next(10, 1, 2010) << endl;
		cout << endl;
		
	}
	
	
	/*
	 * test cases for TillXmas
	 * Because this class's logic consists of simple parsing and boolean comparisons
	 * and depends on NextDate and Weekday, which have already been tested, I only need
	 * to a few test cases to verify this class.  Test cases for this group are paired
	 */
	
	{
		
		//no shopping on New Year's Day
		cout << "test case 87 part A: expected 326" << endl;
		cout << "input 12/31/2009" << " result: " << tillXmas.dLeft(12, 31, 2009) << endl;
		cout << endl;
		cout << "test case 87 part B: expected 326" << endl;
		cout << "input 1/1/2010" << " result: " << tillXmas.dLeft(1, 1, 2010) << endl;
		cout << endl;
		
		//no shopping on July 4th
		cout << "test case 88 part A: expected 143" << endl;
		cout << "input 7/3/2010" << " result: " << tillXmas.dLeft(7, 3, 2010) << endl;
		cout << endl;
		cout << "test case 88 part B: expected 143" << endl;
		cout << "input 7/4/2010" << " result: " << tillXmas.dLeft(7, 4, 2010) << endl;
		cout << endl;
		
	}
	
}