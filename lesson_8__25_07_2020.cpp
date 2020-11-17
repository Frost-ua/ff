//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//                                                 ==================== Багатовимврні масиви ======================






//void main()
//{
//	srand(unsigned(time(NULL)));

	//const int ROW = 5;
	//const int COLUMN = 10;
	//int arr[ROW][COLUMN];

	//for (int i = 0; i < ROW; i++)
	//{
	//	for (int j = 0; j < COLUMN; j++)           // заполнение двухмерного массива рандомными числами
	//	{                                          //цикл. 1-й - итератор і считает строчки ROW 
	//		arr[i][j] = rand() % 10;               //вложенный цикл - итератор j считает колонки COLUMN 
	//	}
	//}


	//for (int i = 0; i < ROW; i++)                  //аналогично выводим єлементы массива двумя циклами
	//{
	//	for (int j = 0; j < COLUMN; j++)
	//	{
	//		cout << setw(5) << arr[i][j];
	//	}
	//	cout << endl;
	//}

	//int max, pos_i, pos_j;

	//for (int i = 0; i < ROW; i++)
	//{
	//		max = arr[i][0];
	//		pos_i = 0;
	//		pos_j = 0;

	//	for (int j = 0; j < COLUMN; j++)
	//	{
	//		if (arr[i][j] > max)
	//		{
	//			max = arr[i][j];
	//			pos_i = i;
	//			pos_j = j;
	//		}
	//	}
	//	cout << i + 1 << " " << max << " Position (" << pos_i << ":" << pos_j << ")" << endl;
	//}

	//Утворити матрицю вигляду:



	/*1    2    ...    10
		11    12    ...    20
		...    ...    ...    ...
		91    92    ...    100*/

		//	const int ROW = 10;
		//	const int COLUMN = 10;
		//	int arr[ROW][COLUMN];
		//	int a = 1;
		//
		//	for (int i = 0; i < ROW; i++)
		//	{
		//		for (int j = 0; j < COLUMN; j++)           
		//		{                                          
		//			arr[i][j] = a;
		//			a++;
		//		}
		//	}
		//
		//	for (int i = 0; i < ROW; i++)                  
		//	{
		//		for (int j = 0; j < COLUMN; j++)
		//		{
		//			cout << setw(5) << arr[i][j];
		//		}
		//		cout << endl;
		//	}
		//
		//	system("pause");
		//
		//}


			////Даний двухвимірний масив розмірністю 5X4. Заповніть його випадковими числами із інтервалу -20.. 20:
			//Виведіть масив на екран та знайдіть кількість елементів, значення яких рівне нулю.
			//	знайдіть середнє арифметичне значення кожного рядка.
			//	знайдіть максимальне та мінімальне значення матриці.
			//	Вивести на екран елементи вказаного користувачем рядка і вказаного користувачем стовпця.



//	const int ROW = 5;
//	const int COLUMN = 4;
//	int arr[ROW][COLUMN];
//	int count = 0, avg1 = 0, sum = 0;
//	double avg[ROW]{};
//
//	for (int i = 0; i < ROW; i++)
//	{
//		sum = 0;
//		for (int j = 0; j < COLUMN; j++)           
//		{                                          
//			arr[i][j] = rand() % 40 - 20;  
//		}
//
//	}
//	
//	for (int i = 0; i < ROW; i++)                  
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			cout << setw(5) << arr[i][j];
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < ROW; i++)
//	{
//		sum = 0;
//		for (int j = 0; j < COLUMN; j++)
//		{
//			
//			if (arr[i][j] == 0)
//			{
//				count++;
//			}
//			sum += arr[i][j];
//			
//		}
//		avg[i] = (double)sum/ (double)COLUMN;
//
//		cout << "AVG " << i << "= " << avg[i] << endl;
//	}
//
//	cout << "\n" << "Amount of zero is " << count << endl << endl;
//
//	int max, min, pos_i, pos_j;
//
//	for (int i = 0; i < ROW; i++)
//	{
//		max = arr[i][0];
//		pos_i = 0;
//		pos_j = 0;
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				pos_i = i;
//				pos_j = j;
//			}
//		}
//		cout << i + 1 << " " << max << " Position (" << pos_i << ":" << pos_j << ")" << endl;
//	}
//	cout << endl;
//
//	for (int i = 0; i < ROW; i++)
//	{
//		min = arr[i][0];
//		pos_i = 0;
//		pos_j = 0;
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			if (arr[i][j] < min)
//			{
//				min = arr[i][j];
//				pos_i = i;
//				pos_j = j;
//			}
//		}
//		cout << i + 1 << " " << min << " Position (" << pos_i << ":" << pos_j << ")" << endl;
//	}
//	int user_row, user_col;
//	cin >> user_row;
//	cout << endl;
//	
//	for (int i = 0; i < COLUMN; i++)
//	{
//		if (user_row < 0 || user_row > ROW)
//		{
//			cout << "Error";
//			break;
//		}
//		cout << setw(5) << arr[user_row - 1][i];
//	}
//	
//	cout << endl;
//	cin >> user_col;
//	cout << endl;
//	for (int i = 0; i < ROW; i++)
//	{
//		if (user_col < 0 || user_col > COLUMN)
//		{
//			cout << "Error";
//			break;
//		}
//		cout << setw(5) << arr[i][user_col-1];
//	}
//}




//Напишите программу, которая создает двухмерный массив и заполняет его по следующему принципу:
//пользователь вводит число(например, 3) первый элемент
//массива принимает значение этого числа, последующий элемент массива принимает значение этого числа
//умноженного на 2 (т.е. 6 для нашего примера), третий
//элемент массива предыдущий элемент умноженный на
//2 (т.е. 6 * 2 = 12 для нашего примера).Созданный массив
//вывести на экран.

//void main()
//{
//	srand(unsigned(time(NULL)));
//
//	const int ROW = 5;
//	const int COLUMN = 4;
//	int arr[ROW][COLUMN]{};
//	int user_num = 0, tmp = 0;
//
//	cin >> user_num;
//	arr[0][0] = user_num;
//	tmp = user_num;
//	for (int i = 0; i < ROW; i++)
//	{
//		
//		for (int j = 1; j < COLUMN; j++)
//		{
//			arr[i][j] = tmp*2;
//			tmp = arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//		cout << setw(10) << arr[i][j];
//		}
//	cout << endl;
//	}
//}





//Створюємо масив M на N.Заповнюємо рандомними значеннями.Вводимо k.Всі елементи в стовбчику k повинні збільшитись в 10 разів



//void main()
//{
//	srand(unsigned(time(NULL)));
//
//	const int ROW = 5;
//	const int COLUMN = 4;
//	int arr[ROW][COLUMN]{};
//	int user_col = 0;
//
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			arr[i][j] = rand() % 50;
//		}
//	}
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			cout << setw(10) << arr[i][j];
//		}
//		cout << endl;
//	}
//
//	cout << endl;
//	cin >> user_col;
//	cout << endl;
//	for (int i = 0; i < ROW; i++)
//	{
//		if (user_col < 0 || user_col > COLUMN)
//		{
//			cout << "Error";
//			break;
//		}
//		cout << setw(5) << (arr[i][user_col - 1])*10;
//	}
//
//}



//Створюємо масив M на N.Заповнюємо рандомними значеннями і вивести.Вивести всі елементи з парних рядків.If не використовувати



//void main()
//{
//	srand(unsigned(time(NULL)));
//
//	const int ROW = 10;
//	const int COLUMN = 4;
//	int arr[ROW][COLUMN]{};
//	int user_col = 0;
//
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			arr[i][j] = rand() % 50;
//		}
//	}
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			cout << setw(10) << arr[i][j];
//		}
//		cout << endl;
//	}
//
//	cout << "=========================================" << endl;
//
//	for (int i = 2; i < ROW; i += 2)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			cout << setw(10) << arr[i][j];
//		}
//		cout << endl;
//	}
//}


//Створити двовимірний масив довільного розміру. Заповнити рандомними значеннями. 
//Поміняти місцями рядкі, які містять мінімальний і максимальний елементи


//void main()
//{
//	srand(unsigned(time(NULL)));
//
//	const int ROW = 5;
//	const int COLUMN = 4;
//	int arr[ROW][COLUMN]{};
//	int user_col = 0;
//	int max, min, pos_i = 0, pos_j=0, pos_i1=0, pos_j1=0;
//
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			arr[i][j] = rand() % 50;
//		}
//	}
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			cout << setw(10) << arr[i][j];
//		}
//		cout << endl;
//	}
//
//	max = arr[0][0];
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COLUMN; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				pos_i = i;
//				pos_j = j;
//			}
//		}
//		
//	}
//	cout << " " << max << " Position (" << pos_i << ":" << pos_j << ")" << endl;
//
//
//min = arr[0][0];
//for (int i = 0; i < ROW; i++)
//{
//	for (int j = 0; j < COLUMN; j++)
//	{
//		if (arr[i][j] < min)
//		{
//			min = arr[i][j];
//			pos_i1 = i;
//			pos_j1 = j;
//		}
//	}
//
//}
//cout << " " << min << " Position (" << pos_i1 << ":" << pos_j1 << ")" << endl;
//
//cout << "===========================" << endl;
//
//for (int i = 0; i < COLUMN; i++)
//{
//	swap(arr[pos_i][i], arr[pos_i1][i]);
//}
//
//for (int i = 0; i < ROW; i++)
//{
//
//	for (int j = 0; j < COLUMN; j++)
//	{
//		cout << setw(10) << arr[i][j];
//	}
//	cout << endl;
//}
//
//
//}


//Створити двовимірний масив. Заповнити рандомними числами. Знайти середнє арифметичне діагоналей матриці




//
//i == j — главная диагональ;
//i > j — область под главной диагональю;
//i < j — область над главной диагональю;
//N — количество строк или столбцов i + j == N – 1 — побочная диагональ;
//i + j > N — 1 — область под побочной диагональю;
//i + j < N – 1 — область над побочной диагональю;



//void main()
//{
//	srand(unsigned(time(NULL)));
//
//	const int ROW = 3;
//	const int COLUMN = 3;
//	int arr[ROW][COLUMN]{};
//	int user_col = 0;
//	int sum_main_diag = 0, sum_side_diag = 0, avg_main_diag = 0, avg_side_diag = 0;
//
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			arr[i][j] = rand() % 50;
//		}
//	}
//
//	for (int i = 0; i < ROW; i++)
//			{
//		
//				for (int j = 0; j < COLUMN; j++)
//				{
//					cout << setw(10) << arr[i][j];
//				}
//				cout << endl;
//			}
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			if (i == j) 
//			{
//				sum_main_diag += arr[i][j];
//			}
//		}
//	}
//	avg_main_diag = sum_main_diag / ROW;
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			if (i + j == ROW - 1)
//			{
//				sum_side_diag += arr[i][j];
//			}
//		}
//	}
//	avg_side_diag = (double)sum_side_diag / ROW;
//
//	cout << "AVG of main diagonal - " << avg_main_diag << endl;
//	cout << "AVG of side diagonal - " << avg_side_diag << endl;
//
//	
//
//
//}



//Створити двовимірний масив довільного розміру.Заповнити рандомними значеннями.
//Вивести номер останнього рядка, де є тільки парні елементи, якщо такого нема - то нуль.


//void main()
//{
//	srand(unsigned(time(NULL)));
//
//	const int ROW = 3;
//	const int COLUMN = 3;
//	int arr[ROW][COLUMN]{};
//	int pos_i = 0;
//	bool flag = false;
//	
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			arr[i][j] = rand() % 50;
//		}
//	}
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			cout << setw(10) << arr[i][j];
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < ROW; i++)
//	{
//		flag = false;
//		for (int j = 0; j < COLUMN; j++)
//		{
//			if (arr[i][j] % 2 == 0)
//			{
//				flag = true;
//				
//			}
//			else
//			{
//				flag = false;
//				break;
//			}
//		}
//
//		if (flag == true)
//		{
//			pos_i = i;
//		}
//	}
//		cout << pos_i;
//}
//                                                                         Варіант викладача

//void main()
//{
//	srand(unsigned(time(NULL)));
//	int const m = 3, n = 3;
//	int arr[m][n] =
//	{
//		{1,2,3},
//		{2,2,2},
//		{3,2,2}
//	};
//	bool flag = false;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			//arr[i][j] = rand() % 10;
//			cout << setw(10) << arr[i][j];
//		}
//		cout << endl;
//	}
//	int pos = 0;
//	for (int i = 0; i < m; i++)
//	{
//		flag = false;
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[i][j] % 2 == 0)
//			{
//				flag = true;
//			}
//			else
//			{
//				flag = false;
//				break;
//
//			}
//		}
//		if (flag == true)
//		{
//			pos = i;
//		}
//
//	}
//	cout << pos << endl;
//}