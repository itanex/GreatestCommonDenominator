#include "lib.h"

int main (void)
{
	int first, second, gcd, answer;
			
	while (answer != 0)
	{
		GetNumbers(first, second);
		gcd = FindGCD(first, second);
		answer = Output(first, second, gcd);
	}

	return 0;
}