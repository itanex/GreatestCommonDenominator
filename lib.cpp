/*
Bryan Wood
Lib.cpp
Variables: NUM1, NUM2, RMDR, N1, N2, Ans
char variable: Ansl
*/

#include "lib.h"

/*-------------------------------------------------------
prompts user for two positive numbers
Receives: user input
Returns: NUM1, NUM2
---------------------------------------------------------*/
void getnums (int &NUM1, int &NUM2)
{
cout << "Enter two positive numbers for which the GCD is desired:" << endl; 
cin >> NUM1 >> NUM2;
}//end of sub

/*-------------------------------------------------------
determines if numbers are positive and request new numbers
	if they aren't
Receives: NUM1, NUM2
Returns: NUM1,NUM2
---------------------------------------------------------*/
void figureok (int &NUM1, int &NUM2) 
{
	while (NUM1 < 0)
	{
		cout << "Enter an positive number for calculation of the first number:" << endl;
		cin >> NUM1;
	}
		
	while (NUM2 < 0)
	{
		cout << "Enter an positive number for calculation of the second number:" << endl;
		cin >> NUM2;
	}
	if (NUM1 > 0 && NUM2 > 0)
	{
		cout << "Thanks for entering two correct numbers." << endl;

	}
}//end of sub

/*-------------------------------------------------------
Finds GCD using NUM 1 and NUM2
Receives: NUM1, NUM2
Returns: RMDR
---------------------------------------------------------*/
int findgcd (int &NUM1, int &NUM2, int &N1, int &N2, int &RMDR) 
{
	N1 = NUM1;
	N2 = NUM2;

	RMDR = NUM1 % NUM2;

	while (RMDR != 0)
	{
		NUM1 = NUM2;
		NUM2 = RMDR;
		RMDR = NUM1  % NUM2;
	}
	return NUM2;
}//end of sub


/*-------------------------------------------------------
Give results and ask to continues or exits program
Receives: N1, N2, RMDR
---------------------------------------------------------*/
int output (int N1, int N2, int RMDR)
{

char Ansl;

int Ans;
  
cout << "The GCD of " << N1 << " and " << N2 << " is " << RMDR << endl;
cout << "Would you like to continue? (Y/N)" << endl;
cin >> Ansl;

if (Ansl == 'Y' || Ansl == 'y')
{
	Ans = 1;
}
else 
{
	Ans = 0;
}
return Ans;
}//end of sub