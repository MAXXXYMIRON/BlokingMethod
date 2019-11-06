#include "Matrix.h"

void main()
{
	setlocale(0, "");

	Matrix A;
	A.SetMatrix({ 
		{-1, -1, -1, -2},
		{2, 3, 4, 3},
		{-2, 0, 1, -6},
		{-2, -2, -3, -3} });

	Matrix B;
	B.SetMatrix({
		{-1, -1, -1, -2},
		{2, 3, 4, 3},
		{-2, 0, 1, -6},
		{-2, -2, -3, -3} });

	//Для проверки
	A.InverseBloking();
	B.Inverse();

	system("pause");
}