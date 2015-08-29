#include "lib.h"

///<summary>
/// Prompts user for two positive numbers
///</summary>
void GetNumbers (int &first, int &second)
{
	while (first < 0)
	{
		std::cout << "Enter an positive number for calculation of the first number:";
		std::cin >> first;
	}
		
	while (second < 0)
	{
		std::cout << "Enter an positive number for calculation of the second number:";
		std::cin >> second;
	}

	if (first > 0 && second > 0)
	{
		std::cout << "Thanks for entering two correct numbers.\n";
	}
}

///<summary>
/// Finds GCD using first and second values
///</summary>
int FindGCD (int &first, int &second)
{
	int gcd;

	gcd = first % second;

	while (gcd != 0)
	{
		first = second;
		second = gcd;
		gcd = first  % second;
	}

	return gcd;
}

///<summary>
/// Give results and ask to continue or exit program
///</summary>
int Output (int first, int second, int gcd)
{
	char answerInput;
	  
	std::cout << "The GCD of " << first << " and " << second << " is " << gcd << std::endl;
	std::cout << "Would you like to continue? (Y/N)" << std::endl;
	std::cin >> answerInput;

	if (answerInput == 'Y' || answerInput == 'y')
	{
		return 1;
	}

	return 0;
}