//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//
///*1.Створити масив довільного розміру.Заповнити рандомними числами.Знайти кількість рядків, 
//    де всі числа йдуть по зростанню if (arr[i][j] < arr[i][j + 1])
//  2.Створити двовимірний масив довільного розміру.Заповнити рандомними значеннями.Знайти всі рядки, де всі елементи йдуть по спаданню
//  3.Створити масив довільного розміру.Заповнити рандомними числами.Знайти всі стовбчики, де всі елементи йдуть по спаданню
//  4.Створити масив довільного розміру.Заповнити рандомними числами.Поміняти максимальний і мінімальний елементи в кожному рядку*/
//
//
////===================================================== TASK #1 =======================================================================
////Створити масив довільного розміру.Заповнити рандомними числами.Знайти кількість рядків, 
////де всі числа йдуть по зростанню 
////=====================================================================================================================================
//void main() {
//	srand(unsigned int(time(NULL)));
//	int choice = 0;
//	const int ROW = 5, COLUMN = 3;
//	int arr[ROW][COLUMN]{};
//
//	cin >> choice;
//
//	switch (choice)
//	{
//	case 1:
//	{
//
//		for (int i = 0; i < ROW; i++)
//		{
//			for (int j = 0; j < COLUMN; j++)
//			{
//				arr[i][j] = rand() % 10;
//			}
//		}
//		for (int i = 0; i < ROW; i++)
//		{
//			for (int j = 0; j < COLUMN; j++)
//			{
//				cout << setw(10) << arr[i][j];
//			}
//			cout << endl;
//		}
//		int counter = 0;
//		bool flag = false;
//		for (int i = 0; i < ROW; i++)
//		{
//			flag = false;
//			for (int j = 0; j < COLUMN; j++)
//			{
//				if (j == COLUMN - 1)
//				{
//					continue;
//				}
//				if (arr[i][j] < arr[i][COLUMN - (COLUMN - j - 1)])
//				{
//					flag = true;
//				}
//				else
//				{
//					flag = false;
//					break;
//				}
//			}
//			if (flag)
//			{
//				counter++;
//			}
//		}
//		cout << endl;
//		cout << "Amount rows where digits constantly increase is " << counter << endl;
//		cout << endl;
//		system("pause");
//	}
//
//
//	//===================================================== TASK #2 =======================================================================
//	//Створити двовимірний масив довільного розміру.Заповнити рандомними значеннями.
//	//Знайти всі рядки, де всі елементи йдуть по спаданню
//	//=====================================================================================================================================
//
//
//	case 2: {
//
//		const int ROW = 5, COLUMN = 3;
//		int arr[ROW][COLUMN]{};
//
//		for (int i = 0; i < ROW; i++)
//		{
//			for (int j = 0; j < COLUMN; j++)
//			{
//				arr[i][j] = rand() % 10;
//			}
//		}
//
//		for (int i = 0; i < ROW; i++)
//		{
//			for (int j = 0; j < COLUMN; j++)
//			{
//				cout << setw(10) << arr[i][j];
//			}
//			cout << endl;
//		}
//		int counter = 0;
//		bool flag = false;
//		for (int i = 0; i < ROW; i++)
//		{
//			flag = false;
//			for (int j = 0; j < COLUMN; j++)
//			{
//				if (j == COLUMN - 1)
//				{
//					continue;
//				}
//				if (arr[i][j] > arr[i][COLUMN - (COLUMN - j - 1)])
//				{
//					flag = true;
//				}
//				else
//				{
//					flag = false;
//					break;
//				}
//			}
//			if (flag)
//			{
//				counter++;
//			}
//		}
//		cout << endl;
//		cout << "Amount rows where digits constantly decrease is " << counter << endl;
//		cout << endl;
//		system("pause");
//	}
//
//
//			//===================================================== TASK #3 =======================================================================
//			//Створити масив довільного розміру.Заповнити рандомними числами.
//			//Знайти всі стовбчики, де всі елементи йдуть по спаданню
//			//=====================================================================================================================================
//
//	case 3:
//	{
//
//		const int ROW = 3, COLUMN = 5;
//		int arr[ROW][COLUMN]{};
//
//		for (int i = 0; i < ROW; i++)
//		{
//			for (int j = 0; j < COLUMN; j++)
//			{
//				arr[i][j] = rand() % 10;
//			}
//		}
//
//		for (int i = 0; i < ROW; i++)
//		{
//			for (int j = 0; j < COLUMN; j++)
//			{
//				cout << setw(10) << arr[i][j];
//			}
//			cout << endl;
//		}
//		int counter = 0;
//		bool flag = false;
//		int i = 0;
//		flag = false;
//		for (int j = 0; j < COLUMN; j++)
//		{
//			i = 0;
//			for (int k = 0; k < ROW; k++)
//			{
//				if (i == ROW - 1)
//				{
//					continue;
//				}
//				if (arr[i][j] > arr[i + 1][j])
//				{
//					flag = true;
//				}
//				else
//				{
//					flag = false;
//					break;
//				}
//				i++;
//			}
//			if (flag)
//			{
//				counter++;
//			}
//		}
//
//
//		cout << endl;
//		cout << "Amount columns where digits constantly decrease is " << counter << endl;
//		cout << endl;
//		system("pause");
//	}
//
//	//===================================================== TASK #4 =======================================================================
//	//Створити масив довільного розміру.Заповнити рандомними числами.
//	//Поміняти максимальний і мінімальний елементи в кожному рядку*/
//	//=====================================================================================================================================
//
//
//	case 4:
//	{
//
//		const int ROW = 5, COLUMN = 5;
//		int arr[ROW][COLUMN];
//
//		for (int i = 0; i < ROW; i++)
//		{
//			for (int j = 0; j < COLUMN; j++)
//			{
//				arr[i][j] = rand() % 10;
//			}
//		}
//		for (int i = 0; i < ROW; i++)
//		{
//			for (int j = 0; j < COLUMN; j++)
//			{
//				cout << setw(10) << arr[i][j];
//			}
//			cout << endl;
//		}
//		cout << "=====================================================================\n";
//
//		int max = arr[0][0], min = arr[0][0], pos_i_max = 0, pos_i_min = 0, pos_j_max = 0, pos_j_min = 0;
//
//		for (int i = 0, j = 0; i < ROW; i++)
//		{
//			max = arr[i][j];
//			min = arr[i][j];
//			pos_i_max = i;
//			pos_j_max = j;
//			pos_i_min = i;
//			pos_j_min = j;
//			for (int j = 1; j < COLUMN; j++)
//			{
//				if (arr[i][j] > max)
//				{
//					max = arr[i][j];
//					pos_i_max = i;
//					pos_j_max = j;
//				}
//				if (arr[i][j] < min)
//				{
//					min = arr[i][j];
//					pos_i_min = i;
//					pos_j_min = j;
//				}
//			}
//			swap(arr[pos_i_max][pos_j_max], arr[pos_i_min][pos_j_min]);
//		}
//		for (int i = 0; i < ROW; i++)
//		{
//			for (int j = 0; j < COLUMN; j++)
//			{
//				cout << setw(10) << arr[i][j];
//			}
//			cout << endl;
//		}
//		system("Pause");
//	}
//
//
//	{
//	default:
//		break;
//	}
//	}
//}