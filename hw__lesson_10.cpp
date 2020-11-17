//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//
////1. Write the functions, which as a parameter take a one - dimensional array and its dimension(10 elements).
////function Fill(), which fills a one - dimensional array with random values ​​in the range[-26..54]
////the Print() function, which displays the elements of the array on the screen
////a function that returns the number of positive elements of the array
////functions:
////-to find the sum of the elements of the array
////- to find the minimum element of the array to the specified upper limit of the interval(from the beginning to the specified index)
////2. Write the following functions, which take as a parameter a two - dimensional array and its dimensions 7x5.
////function Fill(), which fills a two - dimensional array with random values ​​in the range[1..30]
////function Print(), which displays the elements of the array on the screen as a matrix
////a function that replaces all even elements with zeros
//
//void Fill(int arr[], const int iSIZE, int iFrom, int iTill);
//void Print(int arr[],const int iSIZE);
//int NumberPositiveDigit(int arr[],const int iSIZE);
//int ArrSum(int arr[],const int iSIZE);
//int MinElement(int arr[],const int iSIZE, int iTopDigit);
//void FillMatrix(const int iROW, const int iCOLUMN, int iMatrix[][5], int iFrom, int iTill);
//void PrintMatrix(const int iROW, const int iCOLUMN, int iMatrix[][5]);
//void Changer(const int iROW, const int iCOLUMN, int iMatrix[][5]);
//
//
//void main() {
//	const int SIZE = 10, ROW = 7, COLUMN = 5;
//	int Arr[SIZE], Matrix[ROW][COLUMN];
//	int TopDigit = 0;
//	
//	Fill(Arr, SIZE, -26, 54);   // Fill array, you should specify the range of filling in arguments of function (from and to)
//	Print(Arr, SIZE);
//	cout << "\nNumber of positive values: " << NumberPositiveDigit(Arr, SIZE) << endl;
//	cout << "\nThe sum of all values: " << ArrSum(Arr, SIZE) << endl;
//	cout << "\nI want to find the smallest value in the range from 0 to (enter value from 0 till 9)_ _ _";
//	cin >> TopDigit;
//	cout << "\nThe smallest value of the range from 0 till " << TopDigit << " is: " << MinElement(Arr, SIZE, TopDigit) << endl;
//	cout << "========================================================================================================" << endl;
//	system("pause");
//	FillMatrix(ROW, COLUMN, Matrix, 1, 30);  // Fill in the matrix, you should specify the range of filling in the arguments of the function (from and to)
//	cout << "\nMatrix\n" << endl;
//	PrintMatrix(ROW, COLUMN, Matrix);
//	Changer(ROW, COLUMN, Matrix);
//	cout << "--------------------------------------------------------------------------------------------------------" << endl;
//	cout << "\nA matrix where all even values are changed to zero\n" << endl; 
//	PrintMatrix(ROW, COLUMN, Matrix);
//	system("pause");
//}
//                                                               // Function of filling an array with random numbers, the range is given in arguments
//void Fill(int arr[], const int iSIZE, int iFrom, int iTill) {
//	srand(unsigned int(time(NULL)));
//	for (int i = 0; i < iSIZE; i++)
//	{
//		if (iFrom == 0)
//		{
//			int Temp = iTill + 1;
//			arr[i] = rand() % Temp;
//			Temp = 0;
//		}
//		else if (iFrom > 0)
//		{
//			int Temp = iTill + 1;
//			arr[i] = rand() % (Temp - iFrom) + iFrom;
//			Temp = 0;
//		}
//		else if (iFrom < 0)
//		{
//			int Temp = iFrom - 1;
//			arr[i] = rand() % (iTill + (-Temp)) - (-iFrom);
//			Temp = 0;
//		}
//	}
//}
//                                                                    // Array output function
//void Print(int arr[], const int iSIZE) {
//
//	for (int i = 0; i < iSIZE; i++)
//	{
//		cout << "Arr[" << i << "]" << " = " << arr[i] << endl;
//	}
//}
//                                                               // The function of counting the number of positive elements in the array
//int NumberPositiveDigit(int arr[], const int iSIZE) {
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
//                                                              // The function of calculating the sum of all elements of the array
//int ArrSum(int arr[], const int iSIZE) {
//	
//	int Sum = 0; 
//	for (int i = 0; i < iSIZE; i++)
//	{
//		Sum += arr[i];
//	}
//	return Sum;
//}
//               // Function of finding the minimum element of an array in the set range of an array (the upper limit is specified by the user)
//int MinElement(int arr[], const int iSIZE, int iTopDigit) {
//	int MinValue = arr[0];
//	for (int i = 1; i <= iTopDigit; i++)
//	{
//		if (arr[i] < MinValue )
//		{
//			MinValue = arr[i];
//		}
//	}
//	return MinValue;
//}
//                                      // The function of filling the matrix with random numbers, the range is given in the arguments
//void FillMatrix(const int iROW, const int iCOLUMN, int iMatrix[][5], int iFrom, int iTill) {
//	srand(unsigned int(time(NULL)));
//	for (int i = 0; i < iROW; i++)
//	{
//		for (int j = 0; j < iCOLUMN; j++)
//		{
//			if (iFrom == 0)
//			{
//				int Temp = iTill + 1;
//				iMatrix[i][j] = rand() % Temp;
//				Temp = 0;
//			}
//			else if (iFrom > 0)
//			{
//				int Temp = iTill + 1;
//				iMatrix[i][j] = rand() % (Temp - iFrom) + iFrom;
//				Temp = 0;
//			}
//			else if (iFrom < 0)
//			{
//				int Temp = iFrom - 1;
//				iMatrix[i][j] = rand() % (iTill + (-Temp)) - (-iFrom);
//				Temp = 0;
//			}
//		}
//	}
//}
//                                                                             // Matrix output function
//void PrintMatrix(const int iROW, const int iCOLUMN, int iMatrix[][5]) {
//
//	for (int i = 0; i < iROW; i++)
//	{
//		for (int j = 0; j < iCOLUMN; j++)
//		{
//			cout << setw(7) << iMatrix[i][j];
//		}
//		cout << endl;
//		
//	}
//}
//                                                                   // Function of replacement of all paired elements of the matrix by 0
//void Changer(const int iROW, const int iCOLUMN, int iMatrix[][5]) {
//	for (int i = 0; i < iROW; i++)
//	{
//		for (int j = 0; j < iCOLUMN; j++)
//		{
//			if (iMatrix[i][j] % 2 == 0)
//			{
//				iMatrix[i][j] = 0;
//			}
//		}
//	}
//}
