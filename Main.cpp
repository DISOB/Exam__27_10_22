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
		��������� ����� �����:  24

	*/

	int N;
	std::cout << "������� �����, ��������� �������� ������ �����!" << std::endl;
	std::cin >> N;

	if (N >= 0)
	{
		std::cout << "��������� ����� �����:\t" << factorial(N) << std::endl;
	}
	else
	{
		std::cout << "���������� ��� ������������� ����� �� ����������!" << std::endl;
	}

	return 0;
}