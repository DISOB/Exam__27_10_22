#include "Func.h"
#include <iostream>
#include <cstdlib>



int main()
{
	system("chcp 1251>nul");

	/*  example!!!
	
		First number
		1 3
		second number
		2 1

		result
		sum = 3 + 4i
		subtraction = -1 + 2i
		multiplication = -1 + 7i
		division = 1 + 1i
	
	*/

	
	Complex* Z_1 = new Complex, * Z_2 = new Complex;
	std::cout << "Введите действительную и мнимую часть первого числа: " << std::endl;
	std::cin >> Z_1->real >> Z_1->imag;

	std::cout << "Введите действительную и мнимую часть второго числа: " << std::endl;
	std::cin >> Z_2->real >> Z_2->imag;

	Complex* res = new Complex;

	std::cout << std::endl;

	res = sum(Z_1, Z_2);
	std::cout << "sum = " << res->real << " + " << res->imag << "i" << std::endl;

	res = subtraction(Z_1, Z_2);
	std::cout << "subtraction = " << res->real << " + " << res->imag << "i" << std::endl;

	res = multiplication(Z_1, Z_2);
	std::cout << "multiplication = " << res->real << " + " << res->imag << "i" << std::endl;

	res = division(Z_1, Z_2);
	std::cout << "division = " << res->real << " + " << res->imag << "i" << std::endl;

	delete Z_1;
	delete Z_2;
	delete res;

	return 0;
}