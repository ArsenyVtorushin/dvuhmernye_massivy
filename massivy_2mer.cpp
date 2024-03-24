#include <iostream>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "ru");

	const int row_1 = 3, column_1 = 3;
	int arr_1[row_1][column_1]{};

	int element_1;
	std::cout << "¬ведите 1-ый элемент массива: ";
	std::cin >> element_1;

	arr_1[0][0] = element_1;

	for (int i = 0; i < row_1; i++)
	{
		for (int j = 0; j < column_1; j++)
		{
			arr_1[i][j] = element_1;
			std::cout << std::right << std::setw(3) << arr_1[i][j] << " ";
			element_1 *= 2;
		}
		std::cout << "\n";
	}





	std::cout << "\n\n===========================================\n\n";




	const int row_2 = 3, column_2 = 3;
	int arr_2[row_2][column_2]{};

	int element_2;
	std::cout << "¬ведите 1-ый элемент массива: ";
	std::cin >> element_2;

	for (int i = 0; i < row_2; i++)
	{
		for (int j = 0; j < column_2; j++)
		{
			arr_2[i][j] = element_2;
			std::cout << std::right << std::setw(2) << arr_2[i][j] << " ";
			element_2 += 1;
		}
		std::cout << "\n";
	}

	return 0;
}