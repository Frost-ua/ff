//#include<iostream>
//#include<math.h>
//#include "ctime"
//using namespace std;

//void main()
//{
//	srand(unsigned(time(NULL)));
//
//
//	int days[7];
//	int counter = 0;
//
//	for (int i = 0; i < 7; i++)
//	{
//		days[i] = rand() % 40 - 20;
//		if (days[i] > 10)
//		{
//			counter++;
//		}
//	}
//
//	for (int i = 0; i < 7; i++)
//	{
//		cout << days[i] << endl;
//	}
//	cout << "Temperature was more then 10 " << counter << " times" << endl;
//
//
//
//
//	system("pause");
//}





//Оголосити одновимірний масив з 10 елементів типу int. Заповнити 
//його значеннями з клавіатури, вивести на екран та підрахувати добуток елементів масиву

// 2. Оголосити одновимірний масив з 7 елементів типу int. Заповнити його випадковими
//значеннями в діапазоні [-12..+50] та вивести на екран. Підрахувати кількість відємних та додатніх елементів масиву.






//void main()
//{
//	srand(unsigned(time(NULL)));
//	int CounterPos = 0;
//	int CounterNeg = 0;
//
//	int days[7];
//	
//	for (int i = 0; i < 7; i++)
//	{
//		days[i] = rand() % 50 - 12;
//		if (days[i] > 0)
//		{
//			CounterPos++;
//		}
//		else if (days[i] < 0)
//		{
//			CounterNeg++;
//		}
//	}
//
//	for (int i = 0; i < 7; i++)
//	{
//		cout << days[i] << endl;
//	}
//	cout << "Temperature was more then 0 " << CounterPos << " times" << endl;
//	cout << "Temperature was less then 0 " << CounterNeg << " times" << endl;
//
//
//
//
//	system("pause");
//}


//3. Оголосити, проініціалізувати початковими значеннями та вивести одновимірний масив з 7 елементів типу int.Визначити суму парних елементів масиву

//void main()
//{
//	srand(unsigned(time(NULL)));
//
//
//	int days[7];
//	int Pos = 0;
//	int Neg = 0;
//	int SumPos = 0;
//	int SumNeg = 0;
//
//	for (int i = 0; i < 7; i++)
//	{
//		days[i] = rand();
//		if (days[i] % 2 == 0)
//		{
//			
//			SumPos += days[i];
//		}
//		else if (days[i] % 2 != 0)
//		{
//			
//			SumNeg += days[i];
//		}
//	}
//
//	for (int i = 0; i < 7; i++)
//	{
//		cout << days[i] << endl;
//	}
//
//	cout << "=============\n";
//	cout << SumPos << endl;
//	cout << SumNeg << endl;
//
//	system("pause");
//}



//void main()
//{
//	srand(unsigned(time(NULL)));
//
//
//	const int SIZE = 10;
//	int arr[SIZE];
//	int Sum = 0;
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 20 + 1;
//		cout << "arr [" << i << "]" << " = " << arr[i] << endl;
//	}
//
//	for (int i = 0; i < SIZE; i++) {
//		if (i % 2 != 0) 
//		{
//			cout << "index " << i << " value " << arr[i] << endl;
//			Sum += arr[i];
//		}
//	}
//
//
//	system("pause");
//}


//4 Дано одновимірний масив. Знайти найбільший та найменший елементи масиву та поміняти їх у масиві місцями.
//5. Дано одновимірний масив 10 елементів Знайти скільки елементів знаходиться між першим і останнім відємним елементом.


//void main()
//{
//	srand(unsigned(time(NULL)));
//
//
//	const int SIZE = 10;
//	int arr[SIZE];
//	int first = 0;
//	int second = 0;
//	int firstIndex = 0, SecondIndex = 0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 20 - 10;
//		cout << "arr [" << i << "]" << " = " << arr[i] << endl;
//	}
//
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (arr[i] < 0)
//		{
//			first = arr[i];
//			firstIndex = i;
//			break;
//		}
//
//		if (arr[i] < 0)
//		{
//			first = arr[i];
//			SecondIndex = i;
//			break;
//		}
//	}
//
//	
//
//	cout << firstIndex << endl;
//	cout << second << endl;
//
//	system("pause");
//}




//const int SIZE = 10;
//int arr[SIZE];
//int max = 0, min = 100;
//int min_index = 0, max_index = 0;;
//cout << "Before ==================>>>>> " << endl;
//for (int i = 0; i < SIZE; i++) {
//	arr[i] = rand() % 20 + 1;
//	cout << "arr [" << i << "]" << " = " << arr[i] << endl;
//}
//
//
//
//for (int i = 0; i < SIZE; i++) {
//	if (arr[i] > max) {
//		max = arr[i];
//		max_index = i;
//	}
//	if (arr[i] < min) {
//		min = arr[i];
//		min_index = i;
//	}
//}
//
//
//
//
//cout << "Max element = " << max << " max index = " << max_index << endl;
//cout << "Min element = " << min << " min index = " << min_index << endl;
//
//
//
//
//cout << "After ==================>>>>> " << endl;
//int tmp = 0;
//tmp = arr[max_index];
//arr[max_index] = arr[min_index];
//arr[min_index] = tmp;
//for (int i = 0; i < SIZE; i++) {
//	cout << "arr [" << i << "]" << " = " << arr[i] << endl;
//}