#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;
// написати рекурсивну функцію для обчислення факторіала
long long factorial(int n) {
	if (n > 0) return n * factorial(n - 1);
	else return 1;
}
void main() {
	cout << factorial(4) << endl;
	system("pause");
}