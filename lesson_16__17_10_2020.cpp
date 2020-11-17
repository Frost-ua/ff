//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//
//
//
//
////Написати програму, яка отримує від користувача довільний набір цифр(динамічний масив)
////та виводить на екран новоутворений рядок символів.Наприклад, при введенні цифр 65 66 65 на екрані буде ABA
//
//
//
//int strSize(char* str) {
//	int counter = 0;
//	while (str[counter] != '\0') {
//	counter++;
//	}
//	return counter;
//}
//
//void CreateMatrix(int**& matrix, int row, int col);
//void FillMatrix(int**& matrix, int row, int* col);
//void PrintMatrix(int**& matrix, int row, int* col);
//void AddNewRowEnd(int**& matrix, int* row, int col);
//
//int main() {
//	/*srand(unsigned int(time(NULL)));*/
//	/*char str[255]{};
//	int key = 5;
//	cout << "Enter your message: " << endl;
//	cin >> str;
//	int size = strSize(str);
//	char* arr = new char[size];
//	int* arrKey = new int[size];
//	
//	for (int i = 0; i < size; i++) {
//		arr[i] = str[i];
//	}
//
//	for (int i = 0; i < size; i++) {
//		arrKey[i] = rand() % 5;
//	}
//
//	
//	for (int i = 0; i < size; i++) {
//		arr[i] = arr[i] + arrKey[i];
//	}
//	
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i];
//	}
//	cout << endl;
//
//	cout << "I can decrypt the message" << endl;
//
//	for (int i = 0; i < size; i++) {
//		arr[i] = arr[i] - arrKey[i];
//	}
//
//	system("Pause");
//
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i];
//	}
//	cout << endl;
//
//	delete[] arr;
//
//*/
//
//	//for (int i = 0; i < 255; i++)
//	//{
//	//	cout << "code = " << i << "\t" << "char = " << (char)i << endl;
//	//}
//	/*delete[] matrix;*/
//
//	/*Написати функції для роботи з динамічним двовимірним масивом :
//	Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами в діапазоні[-12..56].
//		Виводу масиву
//		Доповнення масиву одним рядком*/
//
//
//
//
//
//
//	int row = 0, col = 0, choice = 0;
//	bool flag = false;
//	int** matrix = nullptr;
//	cout << "Enter rows count:" << endl;
//	cin >> row;
//	cout << "Enter columns count:" << endl;
//	cin >> col;
//
//	CreateMatrix(matrix, row, col);
//	FillMatrix(matrix, row, &col);
//	cout << endl;
//	PrintMatrix(matrix, row, &col);
//	cout << "\nEnter 1 if you want to add one more row at the end of the matrix" << endl;
//	cin >> flag;
//	while (flag)
//	{
//		AddNewRowEnd(matrix, &row, col);
//		
//		PrintMatrix(matrix, row, &col);
//		cout << "Enter 1 if you want to add one more row at the end of the matrix\nEnter any digit if you want to leave the app." << endl;
//		cin >> choice;
//		if (choice != 1)
//		{
//			flag = false;
//			cout << "Thanks for using! Bay)" << endl;
//		}
//		
//	}
//
//
//	system("Pause");
//	return 0;
//}
//
//
//void CreateMatrix(int**& matrix, int row, int col) {
//	matrix = new int* [row];
//	for (int i = 0; i < row; i++)
//	{
//		*(matrix + i) = new int[col];
//	}
//}
//
//void FillMatrix(int**& matrix, int row, int* col) {
//	srand(unsigned int(time(NULL)));
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < *col; j++)
//		{
//			*(*(matrix + i) + j) = rand() % (56 + 12) - 12;
//		}
//	}
//}
//
//void PrintMatrix(int**& matrix, int row, int* col) {
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < *col; j++)
//		{
//			cout << *(*(matrix + i) + j) << "\t";
//		}
//		cout << endl;
//	}
//}
//
//void AddNewRowEnd(int**& matrix, int* row, int col) {
//
//	int** newMatrix = new int* [*row + 1];
//	for (int i = 0; i < *row; i++)
//	{
//		newMatrix[i] = matrix[i];
//	}
//
//	delete[] matrix;
//	matrix = newMatrix;
//	matrix[*row] = new int[col];
//	(*row)++;
//
//	for (int i = 0; i < col; i++)
//	{
//		matrix[(*(row)-1)][i] = rand() % (56 + 12) - 12;
//	}
//
//}
//
//
