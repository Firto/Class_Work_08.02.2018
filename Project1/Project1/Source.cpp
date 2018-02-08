#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;
// Написати рекурсивну функцію яка отримує ціле число і переводить його в двійкову систему
void dviykova(long long n) {
	if (n > 0) { dviykova(n / 2); cout << n % 2;}
}
void main(){
	dviykova(125);
	cout << endl;
	system("pause");
}