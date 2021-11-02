#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int n, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int Count(int* a, const int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0 && abs(a[i]) % 5 != 0)
		{
			count++;
		}
	}
	return count;
}

void Zero(int* a, const int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] > 0 && abs(a[i]) % 5 != 0)
			a[i] = 0;
}

int Sum(int* a, const int n)
{
	int S = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > 0 && abs(a[i]) % 5 != 0)
			S += a[i];
	return S;
}

int main()
{
	srand((unsigned)time(NULL)); 

	const int n = 20;
	int a[n];

	int Low = -20;
	int High = 50;

	Create(a, n, Low, High);
	Print(a, n);

	cout << "S = " << Sum(a, n) << endl;
	cout << "Count = " << Count(a, n) << endl;

	Zero(a, n);
	Print(a, n);

	return 0;
}