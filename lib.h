/*
Bryan Wood
Lib.h
Variables: NUM1, NUM2, RMDR, N1, N2
*/

#include <iostream.h>
#include <iomanip.h>
#include <stdlib.h>

/*-------------------------------------------------------
prompts user for two positive numbers
Receives: user input
Returns: NUM1, NUM2
---------------------------------------------------------*/
void getnums (int &NUM1, int &NUM2);

/*-------------------------------------------------------
determines if numbers are positive and request new numbers
	if they aren't
Receives: NUM1, NUM2
Returns: NUM1,NUM2
---------------------------------------------------------*/
void figureok (int &NUM1, int &NUM2);

/*-------------------------------------------------------
Finds GCD using NUM 1 and NUM2
Receives: NUM1, NUM2
Returns: RMDR
---------------------------------------------------------*/
int findgcd (int &NUM1, int &NUM2, int &N1,int &N2, int &RMDR);

/*-------------------------------------------------------
Give results and ask to continues or exits program
Receives: N1, N2, RMDR
---------------------------------------------------------*/
int output (int N1, int N2, int RMDR);