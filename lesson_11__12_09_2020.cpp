//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//
//
//void main() {
//	srand(unsigned int(time(NULL)));
//	int a = rand() % 100;
//	cout << a << endl;
//	a = a > 50 ? 500 : 1000;                     // if a > 50 give "a" 500 else give "a" 1000 --- short record
//	cout << a << endl;
//
//	system("Pause");
//}
//
//
// Fill array and matrix
//void Fill(int arr[], const int iSIZE, int iFrom, int iTill);
//void FillMatrix(const int iROW, const int iCOLUMN, int iMatrix[][5], int iFrom, int iTill);
// Print array and matrix
//void Print(int arr[], const int iSIZE);
//void PrintMatrix(const int iROW, const int iCOLUMN, int iMatrix[][5]);
//====================================================   SORT   ===================================================================
//
//Написати наступні функції, які в якості параметра приймають одновимірний масив і його розмірністю.Перевірити роботу функції для одновимірних масивів довжини 10 та довжини 7.
//функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні[-12..20]
//шаблонну функцію Print(), яка виводить елементи масиву на екран.Примітка!Протестувати дану функцію на масивах типу int, double, char
//функцію, яка повертає кількість відємних елементів масиву
//перевантажені функції :
//-для знаходження середнього арифметичного елементів масиву
//- для знаходження максимального елемента масиву в проміжку(між двома вказаними індексами)
//* /
//template <typename T>
//void Fill(T arr[], const int SIZE) {
//	for (int i = 0; i < SIZE; i++) {
//		arr[i] = rand() % 32 - 12;
//	}
//}
//template <typename T>
//void Print(T arr[], const int SIZE) {
//	for (int i = 0; i < SIZE; i++) {
//		cout << "arr[" << i << "] = " << arr[i] << endl;
//	}
//}
//template <typename T>
//int GetLessThenZero(T arr[], const int SIZE) {
//	int counter = 0;
//	for (int i = 0; i < SIZE; i++) {
//		if (arr[i] < 0) {
//			counter++;
//		}
//	}
//	return counter;
//}
//int AVG(int arr[], const int SIZE) {
//	int avg = 0;
//	for (int i = 0; i < SIZE; i++) {
//		avg += arr[i];
//	}
//	return avg / SIZE;
//}
//double AVG(double arr[], const int SIZE) {
//	double avg = 0;
//	for (int i = 0; i < SIZE; i++) {
//		avg += arr[i];
//	}
//	return avg / SIZE;
//}
//
//
//
//
//
//
//void Print(int arr[], const int iSIZE) {
//
//	for (int i = 0; i < iSIZE; i++)
//	{
//		cout << "Arr[" << i << "]" << " = " << arr[i] << endl;
//	}
//}
//
//template <typename T>
//int MoreThenZero(T arr[], const int iSIZE) {
//	int counter = 0;
//	for (int i = 0; i < iSIZE; i++)
//	{
//		if (arr[i] > 0)
//		{
//			counter++;
//		}
//	}
//	return counter;
//}
//
//int MinElement(int arr[], const int iSIZE, int iTopDigit) {
//	int MinValue = arr[0];
//	for (int i = 1; i <= iTopDigit; i++)
//	{
//		if (arr[i] < MinValue)
//		{
//			MinValue = arr[i];
//		}
//	}
//	return MinValue;
//}
//
//int ArrSum(int arr[], const int iSIZE) {
//
//	int Sum = 0;
//	for (int i = 0; i < iSIZE; i++)
//	{
//		Sum += arr[i];
//	}
//	return Sum;
//}
//
//int main() {
//	srand(unsigned(time(NULL)));
//	int iTopDigit = 0;
//	const int SIZE = 10;
//	int arr[SIZE];
//	Fill(arr, SIZE, -24, 54);
//	Print(arr, SIZE);
//	MoreThenZero(arr, SIZE);
//	ArrSum(arr, SIZE);
//	MinElement(arr, SIZE, iTopDigit);
//
//	
//
//	system("pause");
//	return 0;
//}
//
//template <typename T>
//void Fill(T Matrix[], const int ROW, const int COL) {
//
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			if (iFrom == 0)
//			{
//				Matrix[i][j] = rand() % 30;
//				Temp = 0;
//			}
//		}
//	}
//}
//
//void Fill(T Matrix[], const int ROW, const int COL) {
//
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			if (iFrom == 0)
//			{
//				Matrix[i][j] = rand() % 30;
//				Temp = 0;
//			}
//		}
//	}
//}
//
//
//
//
//
//
//
///*
//Написати наступні функції, які в якості параметра приймають двохвимірний масив і його розмірності. Перевірити роботу функції для двохвимірних масивів розмірністю 3х4 та 7х5.
//шаблонну функцію Fill(), яка заповнює двохвимірний масив випадковими значеннями в діапазоні [1..30]
//функцію Print(), яка виводить елементи масиву на екран в вигляді матриці.
//функцію, яка виводить на екран вказаний рядок
//*/
//template<typename T>
//void Fill(T arr[], const int ROW, const int COL) {
//	for (int i = 0; i < ROW; i++) {
//		for (int j = 0; j < COL; j++) {
//			arr[i][j] = rand() % 9 + 1;
//		}
//	}
//}
//template<typename T>
//void Print(T arr[], const int ROW, const int COL) {
//	for (int i = 0; i < ROW; i++) {
//		for (int j = 0; j < COL; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//template <typename T>
//void PrintRow(T arr[], const int ROW, const int COL) {
//	int userRow = 0;
//	cout << "Enter row for print: " << endl;
//	cin >> userRow;
//	for (int i = 0; i < COL; i++) {
//		cout << arr[userRow][i] << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	srand(unsigned(time(NULL)));
//	const int ROW = 7, COL = 5;
//	int matrix[ROW][COL];
//	Fill(matrix, ROW, COL);
//	Print(matrix, ROW, COL);
//	PrintRow(matrix, ROW, COL);
//	system("pause");
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
