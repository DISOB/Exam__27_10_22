#include "Func.h"
#include <iostream>
#include <cstdlib>



int main()
{
	system("chcp 1251>nul");

	/*  example!!!
		
		Size massive 
		2

		first matrix
		1 2
		3 4

		second matrix
		5 6
		7 8

		result
		19 22
		43 50
	*/

	int N;
	std::cout << "¬ведите размер квадратных матриц" << std::endl;
	std::cin >> N;

	std::cout << "¬ведите первую матрицу" << std::endl;

	int** matrix_1 = new int* [N];

	int temp;
	for (int i = 0; i < N; i++)
	{
		matrix_1[i] = new int[N];
		for (int j = 0; j < N; j++)
		{
			std::cin >> temp;
			matrix_1[i][j] = temp;
		}
	}

	std::cout << "¬ведите вторую матрицу" << std::endl;

	int** matrix_2 = new int* [N];

	for (int i = 0; i < N; i++)
	{
		matrix_2[i] = new int[N];
		for (int j = 0; j < N; j++)
		{
			std::cin >> matrix_2[i][j];
		}
	}

	std::cout << std::endl << "–езультат перемножени€ матриц" << std::endl;

	int** matrix_res = mult(N, matrix_1, matrix_2);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			std::cout << matrix_res[i][j] << " ";
		}
		std::cout << std::endl;
	}

	// ќчистка мап€ти !!!

	for (int i = 0; i < N; i++)
	{
		delete[] matrix_1[i];
		delete[] matrix_2[i];
	}

	delete[] matrix_1;
	delete[] matrix_2;

	return 0;
}