#include "Func.h"

int factorial(int N)
{
	int fact = 1;

	for (int i = 2; i <= N; i++)
	{
		fact *= i;
	}

	return fact;
}
