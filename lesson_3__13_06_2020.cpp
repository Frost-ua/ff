//#include<iostream>
//#include<math.h>
//using namespace std;









//{
//		char choice = '0';
//		cout << endl;
//		cout << "\t\t**********************************************************************\n";
//		cout << "\t\t*   Enter 1 - Task 4" << endl << endl;
//		cout << "\t\t*   Enter 2 - Task 5 << endl << endl;
//		cout << "\t\t*   Enter 3 - Task 6 << endl << endl;
//		cout << "\t\t*   Enter 4 - To know kind of animal Shark" << endl << endl;
//		cout << "\t\t*   Enter 5 - To know kind of animal Eagle" << endl;
//		cout << "\t\t**********************************************************************\n";
//		cin >> choice;
//	
//
//	
//		switch (choice)
//		{
//		case '1':
//		{
//			int count = 0;
//
//			while (count < 100)
//			{
//				count++;
//				cout << "Count = " << count << endl;
//			}
//	
//			break;
//		}
//		case '2':
//		{
//			int num = 0;
//			int count2 = 0;
//			int summ = 0;
//			int avg = 0;
//			while (count2<10)
//			{
//				count2++;
//				cout << "Enter numbers: " << count2 << endl;
//				cin >> num;
//			summ += num;
//
//			}
//			cout<< "Summ " << summ << endl;
//			cout << "AVG " << summ/10 << endl;
//			
//			
//			break;
//		}
//		case '3':
//		{
//	
//			int num = 0;
//			int count2 = 0;
//			int summ = 0;
//			int avg = 0;
//			while (count2 < 10)
//			{
//				count2++;
//				cout << "Enter numbers: " << count2 << endl;
//				cin >> num;
//				summ += num;
//
//			}
//			cout << "Summ " << summ << endl;
//			cout << "AVG " << summ / 10 << endl;
//			break;
//		}
//		case '4':
//		{
//	
//			cout << "Shark is fish\n";
//			break;
//		}
//		case '5':
//		{
//			cout << "Eagle is bird\n";
//		}
//		break;
//		default:
//		{
//			cout << "You've entered wrong item";
//		}
//		break;
//		}
//	
//		system("pause");
//	}



	/*double a, b;
	int var;
	cout << "Enter any two numbers for mathematical operations:" << endl;
	cout << "Enter 1-st number: ";
	cin >> a;
	cin >> b;
	cout << "You entere two numbers: " << a << " and " << b << endl <<
		"Enter a number from 1 to 4 to select a math operation:" << endl <<
		"PLUS  enter 1" << endl <<
		"MINUS enter 2" << endl <<
		"MULTIPLICATION  enter 3" << endl <<
		"DIVISION enter    4" << endl;
	cin >> var;

	enum Action {
		PLUS = 1, MINUS, MULTIPLICATION, DIVISION
	};

	switch (var)
	{
	case PLUS:
		cout << a << " + " << b << " = " << a + b << endl;
		break;

	case MINUS:
		cout << a << " - " << b << " = " << a - b << endl;
		break;

	case MULTIPLICATION:
		cout << a << " * " << b << " = " << a * b << endl;
		break;

	case DIVISION:
		if ((a == 0) && (b == 0))
		{
			cout << "Both numbers are 0" << endl;
		}
		else if (b == 0)
		{
			cout << "It is impossible to divide by 0!!!" << endl;
		}
		else
		{
			cout << a << " / " << b << " = " << a / b << endl;
		}
		break;
	default:
		cout << "You've entered incorrect input, please try again! Select from 1 till 4";
		break;
	}
}*/


//int count = 10;



 //while (count != 0)
 //{
 //    cout << "Count = " << count << endl;
 //    count--;
 //}



	/*int count = 0;

	while (count < 100)
	{
		count++;
		cout << "Count = " << count << endl;
	}
*/




//void main()
//{
//	int num = 0;
//	int sum = 0;
//	//	while (num < 10)
//	//	
//	//	{
//	//		
//	//		cout << "Num: " << num<< endl;
//	//		sum += num;
//	//		num++;
//	//	}
//	//}
//	//int num = 0;
//	while (num < 5)
//	{
//		cout << "Enter numbers: " << endl;
//		cin >> num;
//		if (num < 0)
//		{
//			sum += num;
//			num++;
//		}
//		cout << sum;
	/*}
}*/















//int a = 0;
//
//do                                                        
//{
//	cout << "Переменная равна " << a << endl;
//	a++;                                                  
//} while (a < 10);
//
//}




//char symbol;
//int type_of_line, number_of_cymbols, index = 0;
//
//cout << "Enter symbol you want to use: " << endl;
//cin >> symbol;
//
//cout << "Enter amount of symbol: " << endl;
//cin >> number_of_cymbols;
//
//cout << "Select kind of line: " << endl <<
//"Gorizontal - enter -   1" << endl <<
//"Vertical - enter -     2" << endl;
//cin >> type_of_line;
//
//switch (type_of_line)
//{
//case 1:                                           
//	do
//	{
//		cout << symbol;                            
//		index++;
//	} while (index < number_of_cymbols);
//	cout << endl << endl;
//	break;
//
//case 2:                                           
//	while (index < number_of_cymbols)
//	{
//		cout << symbol << endl;                   
//		index++;
//	}
//	cout << endl << endl;
//	break;
//
//default:
//{
//
//}
//
//}