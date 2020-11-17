//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//
////Password Verifier.
////Imagine you are developing a software package that requires users to enter their own passwords.
////Your software requires that users passwords meet the following criteria :
//
////a.The password should be at least six characters long.
////b.The password should contain at least one uppercase and at least one lowercase letter.
////c.The password should have at least one digit.
//
////Write a program that asks for a password and then verifies that it meets the stated criteria.
////If it doesn't, the program should display a message telling the user why
//
//int str_size(char password[]);
//bool is_correct_long(int size);
//bool is_uppercase(char password[], int size);
//bool is_lowercase(char password[], int size);
//bool is_digit(char password[], int size);
//
//void main() {
//	srand(unsigned int(time(NULL)));
//
//	cout << "\t\tWelcome! Here you can create your password.\n\t\tThe password must meet the following criteria:\n" << endl;
//	cout << "\t\t- the password should be at least six characters long." << endl;
//	cout << "\t\t- the password should contain at least one uppercase and at least one lowercase letter." << endl;
//	cout << "\t\t- the password should have at least one digit." << endl;
//	cout << "\nEnter your password : " << endl;
//	
//	char password[50]{};
//	cin >> password;
//	int size = str_size(password), counter = 0;
//	bool flag = false;
//
//	do{
//		size = str_size(password);
//		cout << "\n==================================================================================" << endl;
//
//		if (is_correct_long(size) && is_uppercase(password, size) && is_lowercase(password, size) && is_digit(password, size)) {
//			cout << "Your password is correct! Thanks for using)" << endl;
//			cout << "==================================================================================" << endl;
//			flag = true;
//		}
//		else {
//			cout << "\t\t\t    Your password is wrong!\n" << endl;
//			if (!is_correct_long(size)) {
//				cout << " -- password has incorrect size! Enter a password from 6 to 50 characters." << endl;
//			}
//			if (!is_uppercase(password, size)) {
//				cout << " -- password must have at least one uppercase letter" << endl;
//			}
//			if (!is_lowercase(password, size)) {
//				cout << " -- password must have at least one lowercase letter" << endl;
//			}
//			if (!is_digit(password, size)) {
//				cout << " -- password must have at least one digit" << endl;
//			}
//			cout << "\n==================================================================================" << endl;
//			cout << "\nTry one more." << endl;
//			cin >> password;
//		}
//	} while (!flag);
//	
//	
//	system("Pause");
//}
//
//														// Count number of characters
//int str_size(char password[]) {
//	int counter = 0;
//	while (password[counter] != '\0') {
//		counter++;
//	}
//	return counter;
//}
//														// Check uppercase letter.
//bool is_uppercase(char password[], int size) {
//	int counter = 0;
//	bool flag = false;
//	for (int i = 0; i < (size); i++){
//		if (password[i] > 64 && password[i] < 91){
//			counter++;
//			flag = true;
//		}
//		if (counter > 0){
//			break;
//		}
//	}
//	return flag;
//}
//														// Check lowercase letter.
//bool is_lowercase(char password[], int size) {
//	int counter = 0;
//	bool flag = false;
//	for (int i = 0; i < (size); i++) {
//		if (password[i] > 96 && password[i] < 123) {
//			counter++;
//			flag = true;
//		}
//		if (counter > 0) {
//			break;
//		}
//	}
//	return flag;
//}
//														// Check digit
//bool is_digit(char password[], int size) {
//	int counter = 0;
//	bool flag = false;
//	for (int i = 0; i < (size); i++) {
//		if (password[i] > 47 && password[i] < 58) {
//			counter++;
//			flag = true;
//		}
//		if (counter > 0) {
//			break;
//		}
//	}
//	return flag;
//}
//														// Check correct long (6-50 characters)
//bool is_correct_long(int size) {
//	bool flag = false;
//	if (size >= 6 && size <= 50){
//		flag = true;;
//		
//	}
//	return flag;
//}
//
//
