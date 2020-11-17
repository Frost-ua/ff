//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//
//void Fill(int arr[], const int SIZE) {
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 32 - 12;
//
//	}
//
//}
//void Print(int arr[], const int SIZE) {
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << "arr[" << i << "] = " << arr[i] << endl;
//	}
//}
//int AmountNegativeDigital(int arr[], const int SIZE) {
//	int count = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (arr[i] < 0)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//void Changer(int arr[], const int SIZE) {
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (arr[i] == 0)
//		{
//			arr[i] = 100;
//		}
//	}
//}
//
//void main() {
//srand(unsigned int(time(NULL)));
//
//	const int SIZE = 10;
//	int arr[SIZE];
//	int Result = 0;
//
//	Fill(arr, SIZE);
//	Print(arr, SIZE);
//	Result = AmountNegativeDigital(arr, SIZE);
//	cout << Result << endl;
//	Changer(arr, SIZE);
//	Print(arr, SIZE);
//
//system("pause");
//
//}