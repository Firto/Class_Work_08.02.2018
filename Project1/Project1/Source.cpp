#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;
// Написати рекурсивну функцію яка обчислює суму массива
long long sum_elsm(int mass[],int n) {
	if (n > 0) 
		return (mass[n-1]+sum_elsm(mass, n-1));
	else return 0;
}
void main(){
	int mass[10];
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		mass[i] = rand() % 10;
		cout << " " << mass[i];
	}
	cout << endl;
	cout << sum_elsm(mass, 10);
	cout << endl;
	system("pause");
}