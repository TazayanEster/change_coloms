/*
Создается числовая матрица. Необходимо поменять местами два произвольных столбца. 
Т.е. элементы 1 столбца поставить на соответствующие места 2 столбца и наоборот.
Матрица создается с помощью двумерного массива и заполняется случайно-сгенерированными числами.
Размер матрицы и столбцы для замены определяются пользователем.
*/

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	int n, m,  //размер матрицы
		sk, st; //столбцы для замены

	cout << "Enter the dimension of the matrix (n and m): ";
	cin >> n >> m;

	double **mtrx = new double*[n]; //матрица
	for (int count = 0; count < n; count++)
		mtrx[count] = new double[m];

	for (int i = 0; i < n; i++) //заполнение матрицы значениями
		for (int j = 0; j < m; j++)
		{
			mtrx[i][j] = rand() % 10000;
		}

	cout << endl << "Matrix generated " << n << "x" << m << ":" <<endl;
	for (int i = 0; i < n; i++) //вывод матрицы
	{
		for (int j = 0; j < m; j++)
		{
			cout.width(4);
			cout << mtrx[i][j] << " ";
		}
		cout << endl;
	}

		cout << endl << "Enter column numbers for the swap: ";
		cin >> sk >> st;

		for (int i = 0; i < n; i++) //замена столбцов
			swap(mtrx[i][sk], mtrx[i][st]);

		cout << endl << "Matrix swap:" << endl;
		for (int i = 0; i < n; i++) //вывод матрицы
		{
			for (int j = 0; j < m; j++)
			{
				cout.width(4);
				cout << mtrx[i][j] << " ";
			}
			cout << endl;
		}
}
