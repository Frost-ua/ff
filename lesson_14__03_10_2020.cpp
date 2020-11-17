//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
////=================================================   POINTER   ==============================================================
//
////1. Данo массив целых чисел.Воспользовавшись указателями, поменяйте местами элементы массива с четными
////   и нечетными индексами(т.е. элементы массива, которые стоят на четных местах, поменяйте с элементами,
////	 которые стоят на нечетных местах).
//
////2. Даны два массива, упорядоченных по возрастанию :
////   А[n] и B[m].Сформируйте массив C[n + m], состоящий из элементов массивов А и В, упорядоченный
////   по возрастанию.Используйте синтаксис указателей.
//
////3. Даны два массива : А[n] и B[m].Необходимо создать
////   третий массив, в котором нужно собрать:
////   - Элементы обоих массивов;
////   - Общие элементы двух массивов;
////   - Элементы массива A, которые не включаются в B;
////   - Элементы массива B, которые не включаются в A;
////   - Элементы массивов A и B, которые не являются общими для них(то есть объединение результатов двух
////	 предыдущих вариантов).
//
//void Changer(int* pArr, const int SIZE) {
//	int temp = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (i % 2 == 0)
//		{
//			temp = *(pArr + i);
//			*(pArr + i) = *(pArr + i + 1);
//			*(pArr + i + 1) = temp;
//		}
//	}
//}
//
//void InsertSort(int* Arr, const int SIZE) {
//	/*     6 3 2 7 8
//	       j i                   */
//		int tempIndex = 0, temp = 0;
//		for (int i = 1; i < SIZE; i++)
//		{
//			tempIndex = i;
//			for (int j = i - 1; j >= 0; j--)
//			{
//				if (*(Arr + tempIndex) < *(Arr + j))
//				{
//					temp = *(Arr + j);
//					*(Arr + j) = *(Arr + tempIndex);
//					*(Arr + tempIndex) = temp;
//					tempIndex--;
//				}
//			}	
//		}
//}
//
////void main() {
////	srand(unsigned int(time(NULL)));
//	//const int SIZE = 10;
//	//int Arr[SIZE];
//	//int* pArr = Arr;
//
//	//								int d = 100, k = 25, n = 16;
//	//								cout << &d << endl;                 //  Можна і так записать?
//	//								cout << *&d << endl;
//	//								int h = *&k;
//
//
//	//cout << "Task #1\n" << endl;
//	//for (int i = 0; i < SIZE; i++)
//	//{
//	//	*(pArr + i) = rand() % 50;
//	//}
//	//for (int i = 0; i < SIZE; i++)
//	//{
//	//	cout << "Array[" << i << "]" << " = " << *(pArr + i) << endl;
//	//}
//	//cout << "-------------------------------" << endl;
//	//
//	//Changer(pArr, SIZE);
//
//	//for (int i = 0; i < SIZE; i++)
//	//{
//	//	cout << "Array[" << i << "]" << " = " << *(pArr + i) << endl;
//	//}
//	//cout << "\n===============================\nTask #2\n" << endl;
//	//const int SIZEA = 7, SIZEB = 5;
//	//int arrA[SIZEA]{6,3,2,7,8};
//	//int arrB[SIZEB]{};
//	//int arrC[SIZEA + SIZEB]{};
//
//	///*for (int i = 0; i < SIZEA; i++)
//	//{
//	//	*(arrA + i) = rand() % 50;
//	//}*/
//
//	//for (int i = 0; i < SIZEB; i++)
//	//{
//	//	*(arrB + i) = rand() % 50;
//	//}
//
//	//InsertSort(arrA, SIZEA);
//	//InsertSort(arrB, SIZEB);
//
//	//for (int i = 0; i < SIZEA; i++)
//	//{
//	//	cout << "Array A [" << i << "] = " << *(arrA + i) << endl;
//	//}
//	//cout << "=====================" << endl;
//	//for (int i = 0; i < SIZEB; i++)
//	//{
//	//	cout << "Array B [" << i << "] = " << *(arrB + i) << endl;
//	//}
//	//cout << "=====================" << endl;
//	//for (int i = 0; i < (SIZEA + SIZEB); i++)
//	//{
//	//	if (i < SIZEA)
//	//	{
//	//		*(arrC + i) = *(arrA + i);
//	//	}
//	//	if (i >= SIZEA && i < (SIZEA + SIZEB))
//	//	{
//	//		*(arrC + i) = *(arrB + (i - SIZEA));
//	//	}
//	//}
//	//InsertSort(arrC, (SIZEA + SIZEB));
//	//for (int i = 0; i < (SIZEA + SIZEB); i++)
//	//{
//	//	cout << "Array C [" << i << "] = " << *(arrC + i) << endl;
//	//}
//	/*cout << "\n===============================\nTask #3\n" << endl;*/
//	//3. Даны два массива : А[n] и B[m].Необходимо создать
////   третий массив, в котором нужно собрать:
////   - Элементы обоих массивов;
////   - Общие элементы двух массивов;
////   - Элементы массива A, которые не включаются в B;
////   - Элементы массива B, которые не включаются в A;
////   - Элементы массивов A и B, которые не являются общими для них(то есть объединение результатов двух
////	 предыдущих вариантов).
//
//	/*const int SIZEA = 5, SIZEB = 7;
//	int sized = 0;
//	int arrA[SIZEA]{}, arrB[SIZEB]{}, arrC[(SIZEA + SIZEB)]{};
//	int* arrD = new int[sized];
//
//	for (int i = 0; i < SIZEA; i++)
//	{
//		*(arrA + i) = rand() % 20;
//	}
//	for (int i = 0; i < SIZEB; i++)
//	{
//		*(arrB + i) = rand() % 20;
//	}
//	for (int i = 0; i < SIZEA; i++)
//	{
//		cout << "Array A [" << i << "] = " << *(arrA + i) << endl;
//	}
//	cout << "----------------------------------" << endl;
//	for (int i = 0; i < SIZEB; i++)
//	{
//		cout << "Array B [" << i << "] = " << *(arrB + i) << endl;
//	}
//	cout << "----------------------------------" << endl;*/
//
//	/*for (int i = 0; i < (SIZEA + SIZEB); i++)
//	{
//		if (i < SIZEA)
//		{
//			*(arrC + i) = *(arrA + i);
//		}
//		if (i >= SIZEA && i < (SIZEA + SIZEB))
//		{
//			*(arrC + i) = *(arrB + (i - SIZEA));
//		}
//	}
//	for (int i = 0; i < (SIZEA + SIZEB); i++)
//	{
//		cout << "Array C [" << i << "] = " << *(arrC + i) << endl;
//	}
//	cout << "----------------------------------" << endl;*/
//
//
//	/*int k = 0;
//	for (int i = 0; i < SIZEA; i++)
//	{
//		for (int j = 0; j < SIZEB; j++)
//		{
//			if (*(arrA + i) == *(arrB + j))
//			{
//				sized++;
//				*(arrD + k) = *(arrA + i);
//				k++;
//			}
//		}
//	}
//	*/
//	
//	
////
////	cout << "The same elements of array A and array B are\n";
////	for (int i = 0; i < sized; i++)
////	{
////		cout << *(arrD + i) << "\t" << arrD + i << endl;
////	}
////	
////	cout << endl;
////
////
////
////	delete[] arrD;
////	arrD = nullptr;
////	system("Pause");
////}
//
//
////================================================   Class work   =========================================
//
//void Fill(int arr[], const int SIZE) {
//
//	for (int i = 0; i < SIZE; i++) {
//		arr[i] = rand() % 10 + 1;
//	}
//}
//
//void Print(int arr[], const int SIZE) {
//	for (int i = 0; i < SIZE; i++) {
//		cout << "Arr[" << i << "] = " << arr[i] << "\taddress - " << arr + i << endl;
//	}
//}
//
//void InsertEnd(int*& arr, int& size, int newValue) {
//	
//	int* newArr = new int[size + 1];
//	for (int i = 0; i < size; i++) {
//
//		newArr[i] = arr[i];
//	}
//	newArr[size] = newValue;
//	delete[] arr;
//	arr = newArr;
//	size++;
//}
//
//void InsertStart(int*& arr, int& size, int newValue) {
//
//	int* newArr = new int[size + 1];
//	for (int i = 0; i < size; i++) {
//
//		newArr[i + 1] = arr[i];
//	}
//	newArr[0] = newValue;
//	delete[] arr;
//	arr = newArr;
//	size++;
//}
//
//void DeleteFirst(int*& arr, int& size) {
//
//	int* newArr = new int[size + 1];
//	for (int i = 0; i < size; i++) {
//
//		newArr[i] = arr[i + 1];
//	}
//	delete[] arr;
//	arr = newArr;
//	size--;
//}
//
//void DeleteLast(int*& arr, int& size) {
//
//	int* newArr = new int[size + 1];
//	for (int i = 0; i < size-1; i++) {
//
//		newArr[i] = arr[i];
//	}
//	delete[] arr;
//	arr = newArr;
//	size--;
//}
//
//void InsertUserIndex(int*& arr, int& size, int index1, int value1) {
//	/*bool flag = false;*/
//	int* newArr = new int[size + 1];
//	for (int i = 0; i < size + 1; i++) {
//		/*if (!flag)
//		{
//			newArr[i] = arr[i];
//		}
//		else if (flag)
//		{
//			newArr[i] = arr[i - 1];
//		}
//		if (i == index1)
//		{
//			newArr[index1] = value1;
//			
//			flag = true;
//		}*/
//
//		if (index1 > i)
//		{
//			newArr[i] = arr[i];
//		}
//		if (index1 < i)
//		{
//			newArr[i] = arr[i - 1];
//		}
//		if (i == index1)
//		{
//			newArr[index1] = value1;
//		}
//		
//	}
//	delete[] arr;
//	arr = newArr;
//	size++;
//}
//
//void DeleteUserIndex(int*& arr, int& size, int index2) {
//	
//	int* newArr = new int[size - 1];
//	for (int i = 0; i < size - 1; i++) {
//		if (i >= index2)
//		{
//			newArr[i] = arr[i + 1];
//		}
//		else
//		{
//			newArr[i] = arr[i];
//		}
//	}
//
//	delete[] arr;
//	arr = newArr;
//	size--;
//}
//
//void DeleteUserDigit(int*& arr, int& size, int value2) {
//	
//	int counter = 0;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] == value2)
//		{
//			DeleteUserIndex(arr, size, i);
//			counter++;
//			i--;
//		}
//	}
//	int* newArr = new int[size];
//
//	for (int i = 0; i < size; i++)
//	{
//		newArr[i] = arr[i];
//	}
//
//	
//	
//	delete[] arr;
//	arr = newArr;
//	
//	
//}
//
//int main() {
//	srand(unsigned(time(NULL)));
//
//	int size = 0, Index1 = 0, Index2 = 0, Value1 = 0, Value2 = 0;
//	cout << "Enter array size ";
//	cin >> size;
//
//	int* arr = new int[size];
//	Fill(arr, size);
//	Print(arr, size);
//	cout << "After push =======================================" << endl;
//	InsertStart(arr, size, 20);
//	Print(arr, size);
//	cout << "After pop =======================================" << endl;
//	InsertEnd(arr, size, 52);
//	Print(arr, size);
//	cout << "After delete first =======================================" << endl;
//	DeleteFirst(arr, size);
//	Print(arr, size);
//	cout << "After delete last =======================================" << endl;
//	DeleteLast(arr, size);
//	Print(arr, size);
//	cout << "Enter index you want to insert: ";
//	cin >> Index1;
//	cout << "Enter digit you want to insert: ";
//	cin >> Value1;
//	InsertUserIndex(arr, size, Index1, Value1);
//	cout << "After user insert =======================================" << endl;
//	Print(arr, size);
//	cout << "Enter index you want to delete: ";
//	cin >> Index2;
//	DeleteUserIndex(arr, size, Index2);
//	cout << "After user delete =======================================" << endl;
//	Print(arr, size);
//	cout << "Enter digit you want to delete: ";
//	cin >> Value2;
//	DeleteUserDigit(arr, size, Value2);
//	cout << "After user delete digit =======================================" << endl;
//	Print(arr, size);
//	delete[] arr;
//
//	system("pause");
//	return 0;
//}