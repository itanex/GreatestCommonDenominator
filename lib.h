#ifndef LIB_H
#define LIB_H
#include <iostream>
#include <iomanip>
#include <stdlib.h>

///<summary>
/// Prompts user for two positive numbers
///</summary>
void GetNumbers (int &first, int &second);

///<summary>
/// Finds GCD using first and second values
///</summary>
int FindGCD (int &first, int &second);

///<summary>
/// Give results and ask to continue or exit program
///</summary>
int Output (int first, int second, int gcd);
#endif