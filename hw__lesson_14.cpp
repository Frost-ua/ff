//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//
///*
//Дано динамічний масив : "Розмір вказується користувачем"
//
//Написати наступні функції :
//-- - заповнення масиву
//-- - виводу на екран
//-- - Додавання елементу в кінець масиву
//-- - Додавання елементу на початок масиву
//-- - Видалення елементу з кінеця масиву
//-- - Видалення елементу з початкумасиву
//-- - Вставка елементу по індексу
//-- - Видалення елементу по індексу
//*/
//
////
////void Fill(int arr[], const int SIZE) {
////
////	for (int i = 0; i < SIZE; i++) {
////		arr[i] = rand() % 10 + 1;
////	}
////}
////void Print(int arr[], const int SIZE) {
////	for (int i = 0; i < SIZE; i++) {
////		cout << "Arr[" << i << "] = " << arr[i] << "\taddress - " << arr + i << endl;
////	}
////}
////void InsertEnd(int*& arr, int& size, int newValue) {
////
////	int* newArr = new int[size + 1];
////	for (int i = 0; i < size; i++) {
////
////		newArr[i] = arr[i];
////	}
////	newArr[size] = newValue;
////	delete[] arr;
////	arr = newArr;
////	size++;
////}
////void InsertStart(int*& arr, int& size, int newValue) {
////
////	int* newArr = new int[size + 1];
////	for (int i = 0; i < size; i++) {
////
////		newArr[i + 1] = arr[i];
////	}
////	newArr[0] = newValue;
////	delete[] arr;
////	arr = newArr;
////	size++;
////}
////void DeleteFirst(int*& arr, int& size) {
////
////	int* newArr = new int[size + 1];
////	for (int i = 0; i < size; i++) {
////
////		newArr[i] = arr[i + 1];
////	}
////	delete[] arr;
////	arr = newArr;
////	size--;
////}
////void DeleteLast(int*& arr, int& size) {
////
////	int* newArr = new int[size + 1];
////	for (int i = 0; i < size - 1; i++) {
////
////		newArr[i] = arr[i];
////	}
////	delete[] arr;
////	arr = newArr;
////	size--;
////}
////void InsertUserIndex(int*& arr, int& size, int index1, int value1) {
////	
////	int* newArr = new int[size + 1];
////
////	while (index1 >= size || index1 < 0) {
////		cout << "You entered wrong value! Try again!" << endl;
////		cin >> index1;
////	}
////
////	for (int i = 0; i < size + 1; i++) {
////		
////		if (index1 > i)
////		{
////			newArr[i] = arr[i];
////		}
////		if (index1 < i)
////		{
////			newArr[i] = arr[i - 1];
////		}
////		if (i == index1)
////		{
////			newArr[index1] = value1;
////		}
////
////	}
////	delete[] arr;
////	arr = newArr;
////	size++;
////}
////void DeleteUserIndex(int*& arr, int& size, int index2) {
////
////	int* newArr = new int[size - 1];
////
////	while (index2 >= size || index2 < 0) {
////		cout << "You entered wrong value! Try again!" << endl;
////		cin >> index2;
////	}
////
////	for (int i = 0; i < size - 1; i++) {
////		if (i >= index2)
////		{
////			newArr[i] = arr[i + 1];
////		}
////		else
////		{
////			newArr[i] = arr[i];
////		}
////	}
////	delete[] arr;
////	arr = newArr;
////	size--;
////}
////void DeleteUserDigit(int*& arr, int& size, int value2) {
////
////	int counter = size;
////	while (counter != 0)
////	{
////		bool flag = false;
////		for (int i = 0; i < size; i++)
////		{
////			if (arr[i] == value2)
////			{
////				DeleteUserIndex(arr, size, i);
////				i--;
////			}
////			else if (arr[i] != value2)
////			{
////				counter--;
////			}
////		}
////		if (counter == 0)
////		{
////			cout << "The array isn't contains the value! Try again!" << endl;
////			cin >> value2;
////			flag = true;
////			counter = size;
////		}
////		if (!flag)
////		{
////			break;
////		}
////	}
////	int* newArr = new int[size];
////
////	for (int i = 0; i < size; i++)
////	{
////		newArr[i] = arr[i];
////	}
////
////	delete[] arr;
////	arr = newArr;
////}
////
////int main() {
////	srand(unsigned(time(NULL)));
////
////	int Size = 0, Index1 = 0, Index2 = 0, Value1 = 0, Value2 = 0, Choice = 0;
////	bool menu = true;
////	cout << "Enter the array size:\n";
////	cin >> Size;
////	cout << endl;
////	int* arr = new int[Size];
////	Fill(arr, Size);
////	Print(arr, Size);
////	while (menu)
////	{
////		cout << "\nChoice the operation you want to do:"<< endl;
////		cout << "----------------------------------------------------" << endl;
////		cout << "1. To add one element at the end of the array." << endl;
////		cout << "2. To add one element at the beginning of the array." << endl;
////		cout << "3. To delete the last element from the array." << endl;
////		cout << "4. To delete the first element from the array." << endl;
////		cout << "5. To add an element into the array by index." << endl;
////		cout << "6. To delete an element from the array by index." << endl;
////		cout << "7. To delete the same values from the array." << endl;
////		cout << "0. To leave the app.\n" << endl;
////		cin >> Choice;
////		switch (Choice)
////		{
////			case 1: {
////				cout << "\nThe array after increment by one element at the end of the array:\n" << endl;
////				InsertEnd(arr, Size, 125);
////				Print(arr, Size);
////				cout << endl;
////				system("pause");
////				break;
////			}
////			case 2: {
////				cout << "\nThe array after increment by one element at the beginning of the array:\n" << endl;
////				InsertStart(arr, Size, 225);
////				Print(arr, Size);
////				cout << endl;
////				system("pause");
////				break;
////			}
////			case 3: {
////				cout << "\nThe array after decrement by one element at the end of the array:\n" << endl;
////				DeleteLast(arr, Size);
////				Print(arr, Size);
////				cout << endl;
////				system("pause");
////				break;
////			}
////			case 4: {
////				cout << "\nThe array after decrement by one element at the beginning of the array:\n" << endl;
////				DeleteFirst(arr, Size);
////				Print(arr, Size);
////				cout << endl;
////				system("pause");
////				break;
////			}
////			case 5: {
////				cout << "Enter the index you want to add:" << endl;;
////				cin >> Index1;
////				cout << "Enter the digit you want to insert:" << endl;;
////				cin >> Value1;
////				InsertUserIndex(arr, Size, Index1, Value1);
////				cout << "\nThe array after adding one more element into the array:\n" << endl;
////				Print(arr, Size);
////				cout << endl;
////				system("pause");
////				break;
////			}
////			case 6: {
////				cout << "Enter the index you want to delete: " << endl;
////				cin >> Index2;
////				DeleteUserIndex(arr, Size, Index2);
////				cout << "\nThe array after deleting the element from the array:\n" << endl;
////				Print(arr, Size);
////				cout << endl;
////				system("pause");
////				break;
////			}
////			case 7: {
////				cout << "Enter the digit you want to delete: " << endl;;
////				cin >> Value2;
////				DeleteUserDigit(arr, Size, Value2);
////				cout << "\nThe array after deleting the value(s) from the array:\n" << endl;
////				Print(arr, Size);
////				cout << endl;
////				system("pause");
////				break;
////			}
////			case 0: {
////				cout << "\t\t\t      =====================\n\t\t\t\tThanks for using)\n\t\t\t      =====================\n\n";
////				menu = false;
////				break;
////			}
////			default:
////				cout << "You've entered wrong value! Please, enter the value from 0 to 7." << endl;
////				break;
////			}
////	}
////	delete[] arr;
////	system("pause");
////	return 0;
////}
//
//
//
////=======================================    Tasks with *   =======================================
///*
//***************************************
//Написати функції для роботи з динамічною матрицею :
//-- - Функція створення динамічної матриці розміром row x col, де row та col - аргументи функції,
//     функція повертає адресу створеної матриці(або адреса матриці передається за посиланням).
//-- - Функція заповнення матриці *
//-- - Функція виводу матриці *
//-- - Функція доповнення матриці новим рядком (у кінець матриці) *
//-- - Функція видалення з матриці рядка за вказаним номером
//-- - Функція вставки нового рядка за вказаним номером
//-- - Функція додавання нового стовпця(у кінець матриці) *
//-- - Функція видалення з матриці стовпця за вказаним номером *
//-- - Функція вставки нового стовпця за вказаним номером 
//-- - Перевірити роботу функцій.
//
//* ********************/
//                                                                        // Creating the matrix
//void CreateMatrix(int**& matrix, int row, int col);
//                                                                        // Filling the matrix
//void FillMatrix(int**& matrix, int row, int* col);
//																		// Printing the matrix
//void PrintMatrix(int**& matrix, int row, int* col);
//                                                                        // Deleting each array of the matrix
//void DeleteEachArr(int**& matrix, int row);
//																	    // Adding a new row at the end of the matrix
//void AddNewRowEnd(int**& matrix, int* row, int col);
//																	    // Deleting a row from the matrix by index entered by user
//void DeleteRowByIndex(int**& matrix, int* row, int* index);
//																		// Adding a new row at the matrix by index entered by user
//void AddNewRowByIndex(int**& matrix, int* row, int col, int* index);
//																		// Adding a new column at the end of the matrix
//void AddNewColEnd(int**& matrix, int row, int* col);
//																		// Deleting a column from the matrix by index entered by user
//void DeleteColByIndex(int**& matrix, int row, int* col, int* index);
//																		// Adding a new column at the matrix by index entered by user
//void AddNewColByIndex(int**& matrix, int row, int* col, int* index);
//
//int main() {
//
//	int row = 0, col = 0, index = 0, choice = 0;
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
//	cout << endl;
//	cout << "The address of the matrix is " << matrix << endl;
//	cout << "---------------------------------------" << endl;
//
//	bool menu = true;
//	while (menu)
//	{
//		
//		cout << "\nChoice the operation you want to do:" << endl;
//		cout << "----------------------------------------------------------------" << endl;
//		cout << "1. To add one row at the end of the matrix." << endl;
//		cout << "2. To delete one row from the matrix by index entered by user." << endl;
//		cout << "3. To add one row at the matrix by index entered by user." << endl;
//		cout << "4. To add a new column at the end of the matrix." << endl;
//		cout << "5. To delete one column from the matrix by index entered by user." << endl;
//		cout << "6. To add one column at the matrix by index entered by user." << endl;
//		cout << "0. To leave the app." << endl;
//		cout << "----------------------------------------------------------------" << endl;
//		cin >> choice;
//		switch (choice)
//		{
//			case 1: {
//				AddNewRowEnd(matrix, &row, col);
//				cout << "\nThe matrix after adding one more row at the end of the matrix:\n\n";
//				PrintMatrix(matrix, row, &col);
//				system("Pause");
//				break;
//			}
//			case 2: {
//				cout << "Enter the index of a row you want to delete\n";
//				cin >> index;
//				DeleteRowByIndex(matrix, &row, &index);
//				cout << "\nThe matrix after deleting the row by index:\n\n";
//				PrintMatrix(matrix, row, &col);
//				system("Pause");
//				break;
//			}
//			case 3: {
//				cout << "Enter the index of row where you want to add a new row\n";
//				cin >> index;
//				AddNewRowByIndex(matrix, &row, col, &index);
//				cout << "\nThe matrix after adding the row by index:\n\n";
//				PrintMatrix(matrix, row, &col);
//				system("Pause");
//				break;
//			}
//			case 4: {
//				AddNewColEnd(matrix, row, &col);
//				cout << "\nThe matrix after adding one more column at the end of the matrix:\n\n";
//				PrintMatrix(matrix, row, &col);
//				system("Pause");
//				break;
//			}
//			case 5: {
//				cout << "Enter the index of a column you want to delete\n";
//				cin >> index;
//				DeleteColByIndex(matrix, row, &col, &index);
//				cout << "\nThe matrix after deleting the column by index:\n\n";
//				PrintMatrix(matrix, row, &col);
//				system("Pause");
//				break;
//			}
//			case 6: {
//				cout << "Enter the index of column where you want to add a new column\n";
//				cin >> index;
//				AddNewColByIndex(matrix, row, &col, &index);
//				cout << "\nThe matrix after adding the column by index:\n\n";
//				PrintMatrix(matrix, row, &col);
//				system("Pause");
//				break;
//			}
//			case 0: {
//				cout << "\t\t\t      =====================\n\t\t\t\tThanks for using)\n\t\t\t      =====================\n\n";
//				menu = false;
//				break;
//			}
//			default: {
//				cout << "You've entered wrong value! Please, enter the value from 0 to 6." << endl;
//				break;
//			}
//		}
//	}
//	DeleteEachArr(matrix, row);
//	delete[] matrix;
//		
//	system("Pause");
//	return 0;
//}
//
//void CreateMatrix(int**& matrix, int row, int col) {
//	matrix = new int* [row];
//	for (int i = 0; i < row; i++)
//	{
//		*(matrix + i) = new int[col];
//	}
//}
//void FillMatrix(int**& matrix, int row, int* col) {
//	srand(unsigned int(time(NULL)));
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < *col; j++)
//		{
//			*(*(matrix + i) + j) = rand() % 50;
//		}
//	}
//}
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
//void DeleteEachArr(int**& matrix, int row) {
//	for (int i = 0; i < row; i++)
//	{
//		delete[] matrix[i];
//	}
//}
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
//		matrix[(*(row)-1)][i] = rand() % 50;
//	}
//
//}
//void DeleteRowByIndex(int**& matrix, int* row, int* index) {
//	int** newMatrix = new int* [*row - 1];
//	while (*index >= *row || *index < 0) {
//		cout << "You entered wrong value! Try again!" << endl;
//		cin >> *index;
//	}
//	for (int i = 0; i < (*(row)-1); i++)
//	{
//		if (i >= *index)
//		{
//			newMatrix[i] = matrix[i + 1];
//		}
//		else
//		{
//			newMatrix[i] = matrix[i];
//		}
//	}
//	delete[] matrix;
//	matrix = newMatrix;
//	(*row)--;
//	*index = 0;
//}
//void AddNewRowByIndex(int**& matrix, int* row, int col, int* index) {
//	int** newMatrix = new int* [(*(row) + 1)];
//
//	while (*index >= *row || *index < 0) {
//		cout << "You entered wrong value! Try again!" << endl;
//		cin >> *index;
//	}
//
//	for (int i = 0; i <= *row; i++)
//	{
//		if (i < *index)
//		{
//			newMatrix[i] = matrix[i];
//		}
//		if (i == *index)
//		{
//			newMatrix[i] = new int[col];
//		}
//		if (i > *index)
//		{
//			newMatrix[i] = matrix[i - 1];
//		}
//		
//	}
//
//	delete[] matrix;
//	matrix = newMatrix;
//	for (int i = 0; i < col; i++)
//	{
//		matrix[*index][i] = rand() % 50;
//	}
//	(*row)++;
//	*index = 0;
//}
//void AddNewColEnd(int**& matrix, int row, int* col) {
//	int** newMatrix = new int* [row];
//
//	for (int i = 0; i < row; i++)
//	{
//		newMatrix[i] = new int[(*(col)+1)];
//	}
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < (*(col)+1); j++)
//		{
//			newMatrix[i][j] = matrix[i][j];
//		}
//
//		newMatrix[i][*col] = rand() % 50;
//	}
//
//	delete[] matrix;
//	matrix = newMatrix;
//	(*col)++;
//
//}
//void DeleteColByIndex(int**& matrix, int row, int* col, int* index) {
//	int** newMatrix = new int* [row];
//
//	for (int i = 0; i < row; i++)
//	{
//		newMatrix[i] = new int[(*(col)-1)];
//	}
//
//	while (*index >= *col || *index < 0) {
//		cout << "You entered wrong value! Try again!" << endl;
//		cin >> *index;
//	}
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < (*(col)-1); j++)
//		{
//			if (j >= *index)
//			{
//				newMatrix[i][j] = matrix[i][j + 1];
//			}
//			if (j < *index)
//			{
//				newMatrix[i][j] = matrix[i][j];
//			}
//		}
//	}
//
//	delete[] matrix;
//	matrix = newMatrix;
//	(*col)--;
//	*index = 0;
//
//}
//void AddNewColByIndex(int**& matrix, int row, int* col, int* index) {
//	int** newMatrix = new int* [row];
//
//	for (int i = 0; i < row; i++)
//	{
//		newMatrix[i] = new int[(*(col)+1)];
//	}
//
//	while (*index >= *col || *index < 0) {
//		cout << "You entered wrong value! Try again!" << endl;
//		cin >> *index;
//	}
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < (*(col)+1); j++)
//		{
//			if (j > * index)
//			{
//				newMatrix[i][j] = matrix[i][j - 1];
//			}
//			if (j < *index)
//			{
//				newMatrix[i][j] = matrix[i][j];
//			}
//			if (j == *index)
//			{
//				newMatrix[i][j] = rand() % 50;
//			}
//		}
//	}
//
//	delete[] matrix;
//	matrix = newMatrix;
//	(*col)++;
//	*index = 0;
//
//}
//
