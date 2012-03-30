/*	Zodiacer.h
 *  A simple class that calculates a given date's associated Zodiac sign
 *	
 *	11/9/10
 *
 *  Thomas J. Sell
 */

#ifndef ZODIACER_H
#define ZODIACER_H

class Zodiacer
{	
public:
	Zodiacer(){};
	string sign(int month, int day);
};
#endif