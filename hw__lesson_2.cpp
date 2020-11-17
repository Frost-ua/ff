//#include<iostream>
//#include<math.h>
//using namespace std;
//
//void main()
//{                    // MENU*******************************************************************************************************
//	char choice = '0'; 
//	cout << "\n\t\t\t     *** Hello, here you can use four programs ***" << endl << endl;     
//menu:
//	cout << endl;
//	cout << "\t\t**********************************************************************\n";
//	cout << "\t\t*   Enter 1 - If you want to know if your symbol is digital or not   *" << endl << endl;
//	cout << "\t\t*   Enter 2 - To know the maximum number entered by you\t\t     *" << endl << endl;
//	cout << "\t\t*   Enter 3 - To convert your ratings into my rating system\t     *" << endl << endl;
//	cout << "\t\t*   Enter 4 - To check if there are two negative numbers \t     *" << endl << endl;
//	cout << "\t\t*   Enter 5 - To exit the program\t\t\t\t     *" << endl;
//	cout << "\t\t**********************************************************************\n";
//	cin >> choice;
//
//	if (choice == '1' || choice == '2' || choice == '3' || choice == '4' || choice == '5')
//	{
//		switch (choice)
//		{
//		case '1':    // TASK #1*****************************************************************************************************
//		{
//			char symbol;
//			cout << "\t\t\t\t   Enter symbol you want checking:\n";
//			cin >> symbol;
//			(symbol >= '0' && symbol <= '9') ? cout << symbol << " is digit\n\n" : cout << symbol << " isn't digit\n\n";
//			system("pause");
//			goto menu;
//		}
//		case '2':    // TASK #2*****************************************************************************************************
//		{
//			float a = 0, b = 0, c = 0;
//			cout << "\t\t\t\t\tEnter three numbers:\n";
//			cin >> a; cin >> b; cin >> c;
//			float max = (a > b && a > c) ? a : (b > a && b > c) ? b : c;
//			cout << "Maximum number's " << max << endl;
//			goto menu;
//		}
//		case '3':   // TASK #3****************************************************************************************************
//		{
//			int first_rating = 0, second_rating = 0, third_rating = 0;
//		repeat:
//			cout << "\t\t\t\tEnter three ratings from 2 till 5:\n";
//			cin >> first_rating; cin >> second_rating; cin >> third_rating;
//			if (first_rating < 2 || first_rating > 5 || second_rating < 2 || second_rating > 5 || third_rating < 2 || third_rating > 5)
//			{
//				cout << "You've entered incorrect ratings, please try again...\n\n";
//				goto repeat;
//			}
//			float avg = (float)(first_rating + second_rating + third_rating) / 3;
//			(avg >= 2 && avg <= 2.5) ? cout << "Your rating is \"BAD\"\n" : (avg > 2.5 && avg <= 3.3) ? cout << "Your rating is \"SO-SO\"\n" : (avg > 3.3 && avg <= 4.2) ? cout << "Your rating is \"GOOD\"\n" : cout << "Your rating is \"EXCELLENT\"\n";
//			goto menu;
//		}
//		case '4':   // TASK #4****************************************************************************************************
//		{
//			int num_1 = 0, num_2 = 0, num_3 = 0;
//			cout << "\t\t\t\t\tEnter three numbers: \n";
//			cin >> num_1, cin >> num_2, cin >> num_3;
//			(num_1 < 0 && num_2 < 0 && num_3 > 0 || num_1 < 0 && num_3 < 0 && num_2 > 0 || num_2 < 0 && num_3 < 0 && num_1 > 0) ? cout << "There are two negative numbers among the entered ones\n" : cout << "There aren't two negative numbers among the entered ones.\n";
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
