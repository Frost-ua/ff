//#include<iostream>
//#include<math.h>
//using namespace std;
//
//
//void main()
//{                    // MENU*******************************************************************************************************
//	char choice = '0'; 
//	cout << "\n\t\t\t           *** Hello, here you can use four programs ***" << endl << endl;     
//menu:
//	cout << endl;
//	cout << "\t\t********************************************************************************\n";
//	cout << "\t\t*   Enter 1 - To find the AVG and multiplication result of any eight numbers   *" << endl << endl;
//	cout << "\t\t*   Enter 2 - To find the product of any five numbers\t\t\t       *" << endl << endl;
//	cout << "\t\t*   Enter 3 - To find a number of days when temperature was higher than 0 C    *" << endl << endl;
//	cout << "\t\t*   Enter 4 - To display the multiplication table by the entered number        *" << endl << endl;
//	cout << "\t\t*   Enter 5 - To exit the program\t\t\t\t\t       *" << endl;
//	cout << "\t\t********************************************************************************\n";
//	cin >> choice;
//	cout << endl;
//
//	if (choice == '1' || choice == '2' || choice == '3' || choice == '4' || choice == '5')
//	{
//		switch (choice)
//		{
//		case '1':    // TASK #1*****************************************************************************************************
//		{            //Вводяться 8 чисел.Знайти добуток та середнє арифметичне цих чисел. - while
//			int i = 0, j = 0, k =0, number = 0, product = 1, summ = 0;
//			const int amount_of_numbers = 8;
//			while (i < amount_of_numbers)
//			{
//				cout << "\t\tEnter number #" << ++i << endl;
//				cin >> number;
//				cout << "You entered number " << number << "..." << endl << endl;
//				summ += number;
//				product *= number;
//			}
//			cout << "\t\t\t\tLoading... Please wait...\n";
//			while (k < 80)                       // Лоадер
//			{
//					while (j < 100000)
//				{
//					cout << "";
//					j++;
//				}
//					cout << "#";
//					k++;
//					j = 0;
//					(k == 40) ? cout << " 50% " : cout << "";
//			}
//			cout << " 100%"<< endl << endl;
//			cout << "\t\t\t\tAverage of your numbers is " <<(double) summ / amount_of_numbers << endl;
//			cout << "\t\t\t\tProduct of your numbers is " << product << endl << endl;
//			goto menu;
//		}
//		case '2':    // TASK #2*****************************************************************************************************
//		{            // Написати програму яка обчислює добуток п’яти чисел, які вводяться з клавіатури. - while 
//			int i = 0, j = 0, k = 0, number = 0, product = 1;
//			const int amount_of_numbers = 5;
//			while (i < amount_of_numbers)
//			{
//				i++;
//				cout << "\t\tEnter number #" << i << endl;
//				cin >> number;
//				cout << "You entered number " << number << "..." << endl << endl;
//				product *= number;
//			}
//			cout << "\t\t\t\tLoading... Please wait...\n";
//			while (k < 80)                       // Лоадер
//			{
//				while (j < 100000)
//				{
//					cout << "";
//					j++;
//				}
//				cout << "#";
//				k++;
//				j = 0;
//				(k == 40) ? cout << " 50% " : cout << "";
//			}
//			cout << " 100%" << endl << endl;
//			cout << "\t\t\t\tProduct of your numbers is " << product << endl << endl;
//			goto menu;
//		}
//		case '3':   // TASK #3****************************************************************************************************
//		{        //Протягом тижня вимірювали температуру повітря. Знайти кількість днів, коли температура перевищувала 10o С. 
//			
//			int i = 0,k = 0, j = 0, temperature = 0, amount_warm_days = 0;
//
//			while (i < 7)
//			{
//				cout << "Enter the temperature on the day #" << ++i << endl;
//				cin >> temperature;
//				if (temperature > 10)
//				{
//					amount_warm_days++;
//				}
//			}
//			cout << "\t\t\t\tLoading... Please wait...\n";
//			while (k < 80)                       // Лоадер
//			{
//				while (j < 100000)
//				{
//					cout << "";
//					j++;
//				}
//				cout << "#";
//				k++;
//				j = 0;
//				(k == 40) ? cout << " 50% " : cout << "";
//			}
//			cout << " 100%" << endl << endl;
//			cout << "\t\tA number of days when the temperature was higher than 10 C is " << amount_warm_days << endl << endl;
//			goto menu;
//		}
//		case '4':   // TASK #4****************************************************************************************************
//		{           //Вивести на екран таблицю множення на задане із клавіатури число.
//			int i = 0, j  = 0, k = 0, multiplier = 0, top_of_multiplication = 0, product = 0;
//			cout << "Enter multiplier: ";
//			cin >> multiplier;
//			cout << "Enter the number to which you want to multiply from 0 to ";
//			cin >> top_of_multiplication;
//			cout << "\t\t\t\tLoading... Please wait...\n";
//			while (k < 80)                       // Лоадер
//			{
//				while (j < 100000)
//				{
//					cout << "";
//					j++;
//				}
//				cout << "#";
//				k++;
//				j = 0;
//				(k == 40) ? cout << " 50% " : cout << "";
//			}
//			cout << " 100%" << endl << endl;
//			while (i <= top_of_multiplication)
//			{
//				product = i* multiplier;
//				cout << i << " * " << multiplier << " = " << product << endl;
//				i++;
//			}
//			goto menu;
//		}
//		case '5':   // Exit the program******************************************************************************************
//		{
//			cout << "\t\t\t\t     Thank you for using! Bye!!!\n\n";
//		}
//		break;
//		}
//	}
//	else
//	{
//		cout << "You've entered an incorrect character. Make your choice again...\n";
//		goto menu;
//	}
//	system("pause");
//}
//
//
//
//
//
