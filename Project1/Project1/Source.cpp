#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;
// Вивести цифри числа з ліва на право та з права на ліва використовуючи рекурсивну функцію
void digits(long long n) {
	if (n > 0) { digits(n / 10); cout << " " << n % 10;}
	else cout << endl;
}
void main() {
	digits(1285);
	system("pause");
}