//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//
////1. �������� �������, ��� ������� ��� ����� ����� � ������� ��������� ��������� � ������ ������ � ����� : <, > ��� = .
////2. �������� �������, ��� ������ � ����� ��������� ��� ����� ����� � ������� ���� ����� � �������� �� ����.
//
//char Compair(int a, int b) {                 //������� ������� ��� �������� ����� � ������� ��������� ������
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
//int DiapasonSum(int a, int b) {               //������� ���� �� ����� � �������� �������, �� ����� ��������� ������� � ������� �� ����
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
//	res = Compair(m, n);                                                 //��������� ������� ��������� ���� �����
//	cout << "Result of comparison is: " <<"\"" << res <<"\"" << endl;
//
//	int sum = DiapasonSum(m, n);                                         //��������� �������, ��� ���� ���� ����� � �������� �������
//	cout << "Sum of diapason is " << sum << endl;
//
//	system("Pause");
//}