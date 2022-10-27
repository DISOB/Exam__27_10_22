#include <iostream>
#include <cstdlib>
#include "Func.h"


int main()
{
	system("chcp 1251>nul");

	/*  example!!!
		
		Number
		4
		result
		Факториал числа равен:  24

	*/

	int N;
	std::cout << "Введите число, факториал которого хотите найти!" << std::endl;
	std::cin >> N;

	if (N >= 0)
	{
		std::cout << "Факториал числа равен:\t" << factorial(N) << std::endl;
	}
	else
	{
		std::cout << "факториала для отрицательных чисел не существует!" << std::endl;
	}

	return 0;
}