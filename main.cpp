/*
Bryan Wood
main.cpp
Variables: NUM1, NUM2, RMDR, N1, N2

This program gets two numbers from the user and determines if the numbers are valid 
	for use and then finds the gcd between the two numbers and print them to the 
	screen and askes to continue.
*/

#include "lib.h"

void main (void)
{
	int NUM1, NUM2, N1, N2, RMDR, Ans;
			
	while (Ans != 0) //loop while user wishes to continue
	{
		getnums (NUM1, NUM2); //gets user inputs
		figureok (NUM1, NUM2); //Determine if numbers are correct
		RMDR = findgcd (NUM1, NUM2, N1, N2, RMDR); //find GCD
		Ans = output (N1, N2, RMDR);	//give results and ask to continue or end
	} 	
}//exits program
