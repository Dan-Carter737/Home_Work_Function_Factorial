#include <iostream>
using namespace std;

int Factorial(int f)
{
	int fact_result = 1;
	for (int i = 1; i <= f; i++)
	{
		fact_result *= i;
	}
	return fact_result;
}

void main()
{
	setlocale(LC_ALL, "");
	int number;
	cout << "Введите число для расчета его факториала: "; cin >> number;
	cout << endl;
	cout << "Факториал числа " << number << " равен: " << Factorial(number) << endl << endl;
}

