#include "Func.h"
#include <iostream>
#include <cstdlib>


int main()
{
	system("chcp 1251>nul");

	/* Example!!!
	
		Count numbers
		4
		input
		1 2 3 4
		output
		1 2 3 4
	
	*/



	int N, num;
	std::cout << "¬ведите количество чисел, которые хотите добавить в список" << std::endl;
	std::cin >> N;

	node* head = nullptr;

	std::cout << "¬водите числа" << std::endl;

	for (int i = 0; i < N; i++)
	{
		std::cin >> num;
		addList(&head, num);
	}

	std::cout << "»тоговый список чисел" << std::endl;
	PrintList(head);
	DeleteList(head);

	return 0;
}