#include "math.h"

int a = 0;
int b = 0;

int addition(int a, int b)
{
	return a + b;
}

int subtraction(int a, int b)
{
	return a - b;
}

int multiplication(int a, int b)
{
	return a * b;
}

int division(int a, int b)
{
	return a / b;
}

int power(int a, int b) 
{
	int result = 1; 
	for (int i = 0; i < b; ++i) 
	{ 
		result *= a; 
	} 
	return result; 
}