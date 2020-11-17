//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//
////Дана цілочисельна матриця розміром 30 x 30 (випадкові числа)
////Написати наступрий функціонал :
////   - запитує у користувача число,
////   - знаходить кількість і індекси тих значень які були введені користувачвми.
//
//int main() {
//	srand(unsigned int(time(NULL)));
//	const int ROW = 13, COL = 30;
//	int Matrix[ROW][COL];
//	int UserDigit = 0, Counter = 0;
//	bool flag = false;
//
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			Matrix[i][j] = rand() % 50;
//		}
//	}
//
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			cout << Matrix[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	do{
//		cout << "\nEnter a digit for searching: " << endl;
//		cin >> UserDigit;
//		cout << "\nIndexes of the searched digit:\n\n";
//
//		for (int i = 0; i < ROW; i++)
//		{
//			for (int j = 0; j < COL; j++)
//			{
//				if (Matrix[i][j] == UserDigit)
//				{
//					flag = true;
//					Counter++;
//					cout << "[" << i << "][" << j << "]\n";
//				}	
//			}
//		}
//		if (flag)
//		{
//			cout << "\nAmount of the searched digit \"" << UserDigit << "\" is: " << Counter << endl << endl;
//		}
//		if (!flag)
//		{
//			cout << "Your digit isn't in the matrix! Try again!\n\n";
//		}
//	} while (!flag);
//
//	system("Pause");
//	return 0;
//}