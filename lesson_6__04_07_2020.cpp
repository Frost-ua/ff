/*#include<iostream>
#include<math.h>
#include "ctime"
using namespace std;     */           

//void main() {        // Task #1     
//	srand(unsigned(time(NULL)));

	/*int rnd = rand() % 10 + 1;
	cout << "RND = " << rnd << endl;

	if (rnd % 2 == 0) {
		cout << "Pair" << endl;
	}

	if (rnd % 2 != 0) {
		cout << "Not pair" << endl;
	}*/

	//const int SIZE = 10;
	//int arrA[SIZE], max = 0, min = SIZE, maxIndex = 0, minIndex = 0;

	//for (int i = 0; i < SIZE; i++)
	//{
	//	arrA[i] = rand() % 10 + 1;
	//}
	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << "A[" << i << "] = " << arrA[i] << endl;
	//}
	//cout << "===================================" << endl;
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (arrA[i] > max) {
	//		max = arrA[i];
	//		maxIndex = i;
	//	}
	//	if (arrA[i] < min) {
	//		min = arrA[i];
	//		minIndex = i;
	//	}
	//}
	//cout << "Max value - " << max << "\tindex - " << maxIndex << endl;
	//cout << "Min value - " << min << "\tindex - " << minIndex << endl;

	//int tmp = arrA[maxIndex];
	//arrA[maxIndex] = arrA[minIndex];
	//arrA[minIndex] = tmp;

	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << "A[" << i << "] = " << arrA[i] << endl;
	//}

	//Дано 2 одновимірних масиви(А і В) по 5 елементів кожен. Утворити третій масив(С) із К * 2 елементів, 
	//переписуючи у нього спочатку всі елементи масиву А по порядку, а потім елементи масиву В.

	/*const int SIZE = 5;
	int arr_A[SIZE];
	int arr_B[SIZE];
	int arr_C[SIZE * 2];

	for (int i = 0; i < SIZE; i++) {
		arr_A[i] = rand() % 10 + 1;
		arr_B[i] = rand() % 10 + 1;
	}
	for (int i = 0; i < SIZE; i++) {

		cout << "arr_A[" << i << "] = " << arr_A[i] << endl;
	}
	cout << "========================================= " << endl;

	for (int i = 0; i < SIZE; i++) {

		cout << "arr_B[" << i << "] = " << arr_B[i] << endl;
	}
	for (int i = 0; i < SIZE; i++) {

		arr_C[i] = arr_A[i];
	}
	for (int i = 0; i < SIZE; i++) {

		arr_C[i + 5] = arr_B[i];
	}
	cout << "========================================= " << endl;

	for (int i = 0; i < SIZE * 2; i++) {

		cout << "arr_C[" << i << "] = " << arr_C[i] << endl;
	}
*/

//2. Дано одновимірний масив. Знайти суму елементів з непарними індексами.

	//const int SIZE = 5;
	//int arr_A[SIZE];
	//int sumN = 0;
	//int sumP = 0;


	//for (int i = 0; i < SIZE; i++) {
	//	arr_A[i] = rand() % 10 + 1;
	//	if (i % 2 == 0)
	//	{
	//		sumP += arr_A[i];
	//	}
	//	if (i % 2 != 0)
	//	{
	//		sumN += arr_A[i];
	//	}
	//	
	//}
	//for (int i = 0; i < SIZE; i++) {

	//	cout << "arr_A[" << i << "] = " << arr_A[i] << endl;
	//}
	//cout << sumP << endl;
	//cout << sumN << endl;
	
	//Дано масив(А) із К елементів (К- парне число). Утворити 2 масиви(В і С), переписуючи у масив В першу половину масиву А, у масив С – другу половину масиву А
	//

//	const int SIZE = 10;
//	int arr_A[SIZE];
//	int arr_B[SIZE/2];
//	int arr_C[SIZE/2];
//
//	for (int i = 0; i < SIZE; i++) {
//		arr_A[i] = rand() % 10 + 1;
//	}
//	for (int i = 0; i < SIZE; i++) {
//
//		cout << "arr_A[" << i << "] = " << arr_A[i] << endl;
//	}
//	cout << "========================================= " << endl;
//
//	
//	for (int i = 0; i < SIZE; i++) {
//
//		arr_B[i] = arr_A[i];
//		arr_C[i] = arr_A[i+6];
//	}
//	
//	for (int i = 0; i < SIZE/2; i++) {
//
//		cout << "arr_B[" << i << "] = " << arr_B[i] << endl;
//	}
//	for (int i = 0; i < SIZE/2; i++) {
//
//		cout << "arr_C[" << i << "] = " << arr_C[i] << endl;
//	}
//
//}
//


