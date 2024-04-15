#include <iostream>
using namespace std;
void matrix_calculate(int matrix[][5])
{
	char S1[] = { '-A','T','G','C' };
	char S2[] = { '-A','T','G','G' };
	for (int i = 1; i < 5; i++)
	{
		for (int j = 1; j < 5; j++)
		{

			if (S1[i] == S2[j])
			{

				matrix[i][j] = matrix[i - 1][j - 1] + 1;

			}

			if (S1[i] != S2[j])
			{

				if (matrix[i - 1][j - 1] - 1 > matrix[i][j - 1] - 2 && matrix[i - 1][j - 1] - 1 > matrix[i - 1][j] - 2)
				{
					matrix[i][j] = matrix[i - 1][j - 1] - 1;
				}
				else if (matrix[i][j - 1] - 2 > matrix[i - 1][j - 1] - 1 && matrix[i][j - 1] - 2 > matrix[i - 1][j] - 2)
				{
					matrix[i][j] = matrix[i][j - 1] - 2;
				}
				else if (matrix[i - 1][j] - 2 > matrix[i][j - 1] - 2 && matrix[i - 1][j] - 2 > matrix[i - 1][j - 1] - 1)
				{
					matrix[i][j] = matrix[i - 1][j] - 2;
				}
			}
		}

	}
	
}
void display_similarity(int b[][5])
{
	if (b[5][5] < 2)
	{
		cout << "Sequences are not significantly similar" << endl;
	}
	else if (b[5][5] >= 2)
	{
		cout << "Sequences are significantly similar." << endl;
	}
}
int main()
{
	int matrix[5][5];
	matrix[0][0] = { 0 };
	for (int i = 0; i <1; i++)
	{
		for (int j = 0; j < 5; j++)
		{

			matrix[0][j] = -2 * j;

		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 1; j++)
		{

			matrix[i][0] = -2 * i;

		}
	}
	matrix_calculate(matrix);
	display_similarity(matrix);
	system("pause");
	return 0;
}