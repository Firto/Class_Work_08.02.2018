#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
using namespace std;
// Написати рекурсивну функцію яка обчислює число фібаначі з номером N використовуючи дану функцію вивести перші 10 чисел фібаначі
long long fibanachi(long long n) {
	if (n > 1) 
		return (fibanachi(n - 1) + fibanachi(n - 2));
	else return 1;
}
void main(){
	for (int i = 0; i < 10; i++)
		cout << " " << fibanachi(i);
	cout << endl;
	system("pause");
}