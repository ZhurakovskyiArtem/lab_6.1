#include <iostream>
#include <cmath>
#include <time.h>
#include <iomanip>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	int k = 0, s = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] % 2 == 0 && a[i] >0) {
			k++;
			s += a[i];
			a[i] = 0;
		}
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
		cout << endl;
	}
	cout << "k = " << k << endl << "s = " << s << endl;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int Low = -20;
	int High = 30;
	Create(a, n, Low, High);
	Print(a, n);
	return 0;
}
