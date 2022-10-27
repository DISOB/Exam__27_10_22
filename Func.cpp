#include "Func.h"


int** mult(int N, int** matr_1, int** matr_2)
{
	int** matrix_res = new int* [N];
	int row = 0;

	for (int i = 0; i < N; i++)
	{
		matrix_res[i] = new int[N];
		for (int j = 0; j < N; j++)
		{
			matrix_res[i][j] = 0;
			for (int g = 0; g < N; g++)
			{
				matrix_res[i][j] += matr_1[row][g] * matr_2[g][j];
			}
		}
		row++;
	}

	return matrix_res;
}
