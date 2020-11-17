//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//
//template <typename T> void Fill(T arr[], const int SIZE, int From, int Till);
//template <typename T> void Print(T arr[], const int SIZE);
//template <typename T> int NumPositiveDigits(T arr[], const int SIZE);
//
//int BubbleSort(int arr[], const int SIZE, bool RiseOrFall = true);
//int SelectSort(int arr[], const int SIZE, bool RiseOrFall = true);
//int InsertSort(int arr[], const int SIZE, bool RiseOrFall = true);
////void ReverseArr(int arr[], const int SIZE);
//
//int ArrSum(int arr[], const int SIZE);
//double ArrSum(double arr[], const int SIZE);
//long ArrSum(long arr[], const int SIZE);
//
//int MinElement(int arr[], const int iSIZE, int TopDigit);
//double MinElement(double arr[], const int iSIZE, int TopDigit);
//long MinElement(long arr[], const int iSIZE, int TopDigit);
//
//template <typename T> void FillMatrix(T Matrix[], const int ROW, const int COLUMN, int From, int Till);
//template <typename T> void PrintMatrix(T Matrix[], const int ROW, const int COLUMN);
//template <typename T> void Changer(T Matrix[], const int ROW, const int COLUMN);
//
//int main() {
//	const int SIZE = 10, ROW = 7, COLUMN = 5;
//	int TopDigit = 0, From = 0, Till = 0, Choice = 0;
//	int arr[SIZE];
//	int Matrix[ROW][COLUMN];
//
//	Fill(arr, SIZE, -26, 54);
//	Print(arr, SIZE);
//	cout << "====================================================================================" << endl;
//	cout << "\nThe number of positive digits is " << NumPositiveDigits(arr, SIZE) << endl;
//	cout << "\nThe sum of array's digits is " << ArrSum(arr, SIZE) << endl;
//	cout << "\nThe smallest value in the range from 0 to (enter value from 0 till 9)_ _ _";
//	cin >> TopDigit;
//	cout << "\nThe smallest value of the range from 0 till " << TopDigit << " is: " << MinElement(arr, SIZE, TopDigit) << endl;
//	cout << "====================================================================================\n" << endl;
//	system("Pause");
//	FillMatrix(Matrix, ROW, COLUMN, 1, 30);
//	cout << "\nMatrix\n" << endl;
//	PrintMatrix(Matrix, ROW, COLUMN);
//	Changer(Matrix, ROW, COLUMN);
//	cout << "-------------------------------------------------------------------------------------\n" << endl;
//	cout << "\nThe matrix where all even values are changed to zero\n" << endl;
//	PrintMatrix(Matrix, ROW, COLUMN);
//	cout << "====================================================================================\n" << endl;
//	system("Pause");
//	cout << "\nThe array is filled with random values:\n" << endl;
//	Print(arr, SIZE);
//	cout << "\nChoose the way you want to sort the array:\n\n1. Sort by bubble.\n2. Sort by select.\n3. Insert sorting.\n" << endl;
//	cin >> Choice;
//	switch (Choice)
//	{
//	case 1: {
//		cout << "-------------------------------------------------------------------------------------\n" << endl;
//		int NumberIterationsBubleSort = BubbleSort(arr, SIZE);//Put the third argument = "false" for the falling sorting
//		Print(arr, SIZE);
//		cout << "\nThe number of iterations by bubble sorting is " << NumberIterationsBubleSort << endl << endl;
//		break;
//	}
//	case 2: {
//		cout << "-------------------------------------------------------------------------------------\n" << endl;
//		int NumberIterationsSelectSort = SelectSort(arr, SIZE);//Put the third argument = "false" for the falling sorting
//		Print(arr, SIZE);
//		cout << "\nThe number of iterations by select sorting is " << NumberIterationsSelectSort << endl << endl;
//		break;
//	}
//	case 3: {
//		cout << "-------------------------------------------------------------------------------------\n" << endl;
//		int NumberIterationsInsertSort = InsertSort(arr, SIZE);//Put the third argument = "false" for the falling sorting
//		Print(arr, SIZE);
//		cout << "\nThe number of iterations by insert sorting is " << NumberIterationsInsertSort << endl << endl;
//		break;
//	}
//	}
//
//	system("Pause");
//	return 0;
//}
//
//                                    // Array filling function
//template <typename T> void Fill(T arr[], const int SIZE, int From, int Till) {
//	srand(unsigned(time(NULL)));
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (From == 0)
//		{
//			arr[i] = rand() % (Till + 1);
//		}
//		else if (From > 0)
//		{
//			arr[i] = rand() % ((Till + 1) - From) + From;
//		}
//		else if (From < 0)
//		{
//			arr[i] = rand() % (Till + (-(From - 1))) - (-From);
//		}
//	}
//}
//                                    // Array printing function
//template <typename T>void Print(T arr[], const int SIZE) {
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << "Arr[" << i << "]" << " = " << arr[i] << endl;
//	}
//}
//                                  // Getting the number of positive digits of array
//template <typename T> int NumPositiveDigits(T arr[], const int SIZE){
//	int Counter = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (arr[i] > 0)
//		{
//			Counter++;
//		}
//	}
//	return Counter;
//}
//
//
//
//                                 // The sum of array's digits
//int ArrSum(int arr[], const int SIZE) {
//	int Sum = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		Sum += arr[i];
//	}
//	return Sum;
//}
//                                 // The sum of array's digits --- overload function
//double ArrSum(double arr[], const int SIZE) {
//	double Sum = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		Sum += arr[i];
//	}
//	return Sum;
//}
//                                 // The sum of array's digits --- overload function
//long ArrSum(long arr[], const int SIZE) {
//	int Sum = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		Sum += arr[i];
//	}
//	return Sum;
//}
//
//
//
//                                   // Finding the minimum element of an array in the set range of an array
//int MinElement(int arr[], const int iSIZE, int TopDigit) {
//	int MinValue = arr[0];
//	for (int i = 1; i <= TopDigit; i++)
//	{
//		if (arr[i] < MinValue)
//		{
//			MinValue = arr[i];
//		}
//	}
//	return MinValue;
//}
//                                   // Finding the minimum element of an array in the set range of an array --- overload function
//double MinElement(double arr[], const int iSIZE, int TopDigit) {
//	double MinValue = arr[0];
//	for (int i = 1; i <= TopDigit; i++)
//	{
//		if (arr[i] < MinValue)
//		{
//			MinValue = arr[i];
//		}
//	}
//	return MinValue;
//}
//                                   // Finding the minimum element of an array in the set range of an array --- overload function
//long MinElement(long arr[], const int iSIZE, int TopDigit) {
//	long MinValue = arr[0];
//	for (int i = 1; i <= TopDigit; i++)
//	{
//		if (arr[i] < MinValue)
//		{
//			MinValue = arr[i];
//		}
//	}
//	return MinValue;
//}
//
//
//
//                                       // The function of filling the matrix with random numbers, the range is given in the arguments
//template <typename T> void FillMatrix(T Matrix[], const int ROW, const int COLUMN, int From, int Till) {
//	srand(unsigned(time(NULL)));
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COLUMN; j++)
//		{
//			if (From == 0)
//			{
//				Matrix[i][j] = rand() % (Till + 1);
//			}
//			else if (From > 0)
//			{
//				Matrix[i][j] = rand() % ((Till + 1) - From) + From;	
//			}
//			else if (From < 0)
//			{
//				Matrix[i][j] = rand() % (Till + (-(From - 1))) - (-From);
//			}
//		}
//	}
//}
//                                       // Matrix outputting function
//template <typename T> void PrintMatrix(T Matrix[], const int ROW, const int COLUMN) {
//
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COLUMN; j++)
//		{
//			cout << setw(7) << Matrix[i][j];
//		}
//		cout << endl;
//		
//	}
//}
//                                       // Function of replacement of all paired elements of the matrix by 0
//template <typename T> void Changer(T Matrix[], const int ROW, const int COLUMN) {
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COLUMN; j++)
//		{
//			if (Matrix[i][j] % 2 == 0)
//			{
//				Matrix[i][j] = 0;
//			}
//		}
//	}
//}
//
//
//
//                                       // Bubble sort function (The sorting in increase and decrease)
//int BubbleSort(int arr[], const int SIZE, bool RiseOrFall) {
//	int Counter = 0;
//	if (RiseOrFall)
//	{
//		for (int i = 0; i < SIZE; i++)
//		{
//			int Temp = 0;
//			bool flag = false;
//			for (int j = 0; j < SIZE - 1 - i; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					Temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = Temp;
//					flag = true;
//				}
//				Counter++;
//			}
//			if (!flag)
//			{
//				break;
//			}
//		}
//		return Counter;
//	}
//	
//	else if (!RiseOrFall)
//	{
//		for (int i = SIZE - 1; i >= 0; i--)
//		{
//			int Temp = 0;
//			bool flag = false;
//			for (int j = SIZE - 1; j > 0; j--)
//			{
//				if (arr[j] > arr[j - 1])
//				{
//					Temp = arr[j];
//					arr[j] = arr[j - 1];
//					arr[j - 1] = Temp;
//					flag = true;
//				}
//				Counter++;
//			}
//			if (!flag)
//			{
//				break;
//			}
//		}
//		}
//		return Counter;
//}
//                                       // Select sort function (The sorting in increase and decrease)
//int SelectSort(int arr[], const int SIZE, bool RiseOrFall) {
//	int Counter = 0;
//	if (RiseOrFall)
//	{
//		for (int i = 0; i < SIZE - 1; i++)
//		{
//			int MinIndex = i, Temp = 0;
//			for (int j = i + 1; j < SIZE; j++)
//			{
//				if (arr[j] < arr[MinIndex])
//				{
//					MinIndex = j;
//				}
//				Counter++;
//			}
//			if (i != MinIndex)
//			{
//				Temp = arr[i];
//				arr[i] = arr[MinIndex];
//				arr[MinIndex] = Temp;
//			}
//
//		}
//		return Counter;
//	}
//	else if (!RiseOrFall)
//	{
//		for (int i = SIZE - 1; i >= 0; i--)
//		{
//			int MinIndex = i, Temp = 0;
//			for (int j = i - 1; j >= 0; j--)
//			{
//				if (arr[j] < arr[MinIndex])
//				{
//					MinIndex = j;
//				}
//				Counter++;
//			}
//			if (i != MinIndex)
//			{
//				Temp = arr[i];
//				arr[i] = arr[MinIndex];
//				arr[MinIndex] = Temp;
//			}
//
//		}
//	}
//	return Counter;
//}
//                                       // Insert sort function (The sorting in increase and decrease)
//int InsertSort(int arr[], const int SIZE, bool RiseOrFall) {
//	int Counter = 0;
//	if (RiseOrFall)
//	{
//		for (int i = 1; i < SIZE; i++)
//		{
//			int j = i - 1, Temp = arr[i];
//			while (j >= 0 && arr[j] > Temp)
//			{
//				arr[j + 1] = arr[j];
//				arr[j] = Temp;
//				j--;
//				Counter++;
//			}
//		}
//		return Counter;
//	}
//	else if (!RiseOrFall)
//	{
//		for (int i = SIZE - 2; i >= 0; i--)
//		{
//			int j = i + 1, Temp = arr[i];
//			while (j <= SIZE && arr[j] > Temp)
//			{
//				arr[j - 1] = arr[j];
//				arr[j] = Temp;
//				j++;
//				Counter++;
//			}
//		}
//	}
//	return Counter;
//}
//
//
//
//                                       //Reverse array function
////void ReverseArr(int arr[], const int SIZE) {      // You can use this function instead of the body of second "if" in each kind of sorting function
////	int Temp = 0;
////	if (SIZE % 2 != 0)
////	{
////		for (int i = 0; i < (SIZE - 1) / 2; i++)
////		{
////			Temp = arr[i];
////			arr[i] = arr[SIZE - i - 1];
////			arr[SIZE - i - 1] = Temp;
////		}
////	}
////	else if (SIZE % 2 == 0)
////	{
////		for (int i = 0; i < SIZE/ 2; i++)
////		{
////			Temp = arr[i];
////			arr[i] = arr[SIZE - i - 1];
////			arr[SIZE - i - 1] = Temp;
////		}
////	}
////	
////}