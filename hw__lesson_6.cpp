//#include<iostream>
//#include<math.h>
//#include "ctime"
//using namespace std;
//
//void main() {
//	srand(unsigned(time(NULL)));
//	//Дано масив(А) із К елементів (К- парне число). Утворити 2 масиви(В і С),
//	//переписуючи у масив В першу половину масиву А, у масив С – другу половину масиву А
//	//   You have an array A that contains K elements (K - pair number).
//	//Create two arrays (B and C) by writing the first part of array A to array B and the second part of array A to array C
//
//	const int SIZE = 10;
//	int arr_A[SIZE];
//	int arr_B[SIZE / 2];
//	int arr_C[SIZE / 2];
//	
//	cout << "***** TASK #1: *****\n\n";
//
//	for (int i = 0; i < SIZE; i++) {
//		arr_A[i] = rand() % 50;
//	}
//	for (int i = 0; i < SIZE; i++) {
//
//		cout << "arr_A[" << i << "] = " << arr_A[i] << endl;
//	}
//	cout << "=============================" << endl;
//	for (int i = 0; i < SIZE/2; i++) {
//
//		arr_B[i] = arr_A[i];
//	}
//	for (int i = 0; i < SIZE / 2; i++) {
//
//		cout << "arr_B[" << i << "] = " << arr_B[i] << endl;
//	}
//	cout << "=============================" << endl;
//	for (int i = 0; i < SIZE / 2; i++) {
//
//		arr_C[i] = arr_A[i+5];
//	}
//	for (int i = 0; i < SIZE / 2; i++) {
//
//		cout << "arr_C[" << i << "] = " << arr_C[i] << endl;
//	}
//	system("Pause");
//	cout << endl;
////Утворити одновимірний масив розміром 30. 
////Заповнити його випадковими числам. Вивести елементи масиву на екран у прямому і оберненому порядку.
//// Create an array of size 30.Fill it with random numbers. Display the elements of the array in forward and reverse order.
//	cout << "***** TASK #2: *****\n\n";
//	const int SIZE1 = 30;
//	int arr_D[SIZE1];
//	for (int i = 0; i < SIZE1; i++)
//	{
//		arr_D[i] = rand() % 50; 
//	}
//	for (int i = 0; i < SIZE1; i++)
//	{
//		cout << "arr_D[" << i << "] = " << arr_D[i] << "\t\t" << "arr_D[" << i << "] = " << arr_D[SIZE1 - 1 - i] << endl;
//	}
//}
//
//
//
//
