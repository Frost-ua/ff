//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//
////1. Написати функцію, яка порівнює два цілих числа і повертає результат порівняння в вигляді одного з знаків : <, > або = .
////2. Написати функцію, яка отримує в якості параметрів два цілих числа і повертає суму чисел з діапазону між ними.
//
//char Compair(int a, int b) {                 //функція порівнює два введених числа і повертає відповідний символ
//
//	if (a > b)
//	{
//		return '>';
//	}
//	else if (a < b)
//	{
//		return '<';
//	}
//	else 
//	{
//		return '=';
//	}
//}
//
//int DiapasonSum(int a, int b) {               //функція додає всі числа в заданому діапазоні, між двома введеними числами і повертає їх суму
//	int res = 0;
//	for (int i = a + 1; i < b; i++)
//	{
//		res += i;
//	}
//	return res;
//}
//
//
//void main() {
//	srand(unsigned int(time(NULL)));
//	int m = 0, n = 0;
//	char res;
//	cout << "Enter 1-st digit: " << endl;
//	cin >> m;
//	cout << "Enter 2-d digit: " << endl;
//	cin >> n;
//
//	res = Compair(m, n);                                                 //Викликаємо функцію порівняння двох чисел
//	cout << "Result of comparison is: " <<"\"" << res <<"\"" << endl;
//
//	int sum = DiapasonSum(m, n);                                         //Викликаємо функцію, яка рахує суму чисел в заданому діапазоні
//	cout << "Sum of diapason is " << sum << endl;
//
//	system("Pause");
//}