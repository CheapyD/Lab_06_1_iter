#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* r, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		r[i] = Low + rand() % (High - Low + 1);
}

void Print(int* r, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << r[i];
	cout << endl;
}

int Sum(int* r, const int size)
{
	int j = 0;
	int S = 0;
	for (int i = 0; i < size; i++)
		if ((r[i] % 2 == 0) || (i % 7 != 0))
			S += r[i];
	return S;
}

void Replacing(int* r, const int size)
{
	for (int i = 0; i < size; i++)
	if ((r[i] % 2 == 0) || (i % 7 != 0))
		cout << 0 << "  ";
	else
		cout << r[i] << "  ";
}

int Count(int* r, const int size)
{
	int j = 0;
	for (int i = 0; i < size; i++)
	if ((r[i] % 2 == 0) || (i % 7 != 0))
		j++;
	return j;
}

int main()
{
	srand((unsigned)time(NULL)); 

	const int n = 26;
	int r[n];
	int j;

	int Low = 3;
	int High = 92;

	Create(r, n, Low, High);
	cout << "Original masive" << endl;
	Print(r, n);
	cout << endl;

	cout << "Calculating sum" << endl;
	cout << "S = " << Sum(r, n) << endl;
	cout << endl;

	cout << "Calculating count" << endl;
	cout << "j = " << Count(r, n) << endl;
	cout << endl;

	cout << "Replaced elements" << endl;
	Replacing(r, n);	
	cout << endl;

	system("pause");
	return 0;
}
