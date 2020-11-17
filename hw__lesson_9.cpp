//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//
////Написати калькулятор, робота якого буде основана на функціях. Введення цифр та вибір математичної операції виконати в діалоговому стилі
////(запитати у користувача, вивести меню).
////У програмі передбачити уникнення помилок(ділення на нуль і т.д.).Фантазія та «дизайн» меню – ціниться та вітається!!!
/////Примітка!Кожна арифметична операція описується окремою функцією.Побудова самого меню також винесена в окрему функцію.
//
//void SunnyCat(string phrase) {
//
//	cout << "                                                                             `" << endl;
//	cout << "    ~ ~ ~ ~                                                     |   ^     ^   |" << endl;
//	cout << "  (         )                                        . .  .  .  \\             /  .  .  . ." << endl;
//	cout << " (_ _ _ _ _ _)              ~ ~ ~                                \\   `---`   /" << endl;
//	cout << "	                  (       )                           .   `- _ _ _ -`   ." << endl;
//	cout << "                         (_ _ _ _ _)                       .        .     .        .            / \\" << endl;
//	cout << "                                                       .	  .         .         .        /   \\" << endl;
//	cout << "        |\\       /|        _____________________________                                      |     | " << endl;
//	cout << "        | \\ ___ / |       /                             \\                                      \\   /" << endl;
//	cout << "       /  @     @  \\     /                               \\                                      \\ /" << endl;
//	cout << "      ( >    ^    < ) \ <" << "  " << phrase << "\t\t\t\t\t |" <<endl;
//	cout << "       \\     o     /     \\                               /    ___________________________________|__________________" << endl;
//	cout << "         >>>>X<<<<<       \\_____________________________/     ___ _________________  _ _ _ _____________ _______ ___" << endl;
//	cout << "        /          \\ \n\n\n" << endl;
//
//}
//void Cat(string phrase) {
//
//		cout << "        |\\       /|        _____________________________" << endl;
//		cout << "        | \\ ___ / |       /                             \\" << endl;
//		cout << "       /  @     @  \\     /                               \\" << endl;
//		cout << "      ( >    ^    < ) \ <" << "  " << phrase << endl;
//		cout << "       \\     o     /     \\                               / " << endl;
//		cout << "         >>>>X<<<<<       \\_____________________________/" << endl;
//		cout << "        /          \\ \n\n\n" << endl;
//
//}
//char Action(char iChoice) {
//	if (iChoice == '1')
//	{
//		return '+';
//	}
//	else if (iChoice == '2')
//	{
//		return '-';
//	}
//	else if (iChoice == '3')
//	{
//		return '*';
//	}
//	else if (iChoice == '4')
//	{
//		return '/';
//	}
//}
//void CatResult(int iFirstDigit, int iSecondDigit, char iChoice, float iResult) {
//	cout << "        |\\       /|        _____________________________" << endl;
//	cout << "        | \\ ___ / |       /                             \\" << endl;
//	cout << "       /  @     @  \\     /                               \\" << endl;
//	cout << "      ( >    ~    < ) \ <" << "     " << iFirstDigit << " " << Action(iChoice) << " " << iSecondDigit << " = " << iResult << ",   "<< "Meow!" << endl;
//	cout << "       \\    `--`   /     \\                               / " << endl;
//	cout << "         >>>>X<<<<<       \\_____________________________/" << endl;
//	cout << "        /          \\ \n\n\n" << endl;
//
//}
//int Addition(int a, int b) {
//	return a + b;
//}
//int Subtraction(int a, int b) {
//	return a - b;
//}
//int Multiplication(int a, int b) {
//	return a * b;
//}
//float Division(float a, float b) {
//	return a / b;
//}
//float Operations (char iChoice, int iFirstDigit, int iSecondDigit) {
//	switch (iChoice)
//	{
//	case '1':
//	{  
//		return Addition(iFirstDigit, iSecondDigit);
//	}
//	case '2':
//	{
//		return Subtraction(iFirstDigit, iSecondDigit);
//	}
//	case '3':
//	{
//		return Multiplication(iFirstDigit, iSecondDigit);
//	}
//	case '4':
//	{
//		return Division(iFirstDigit, iSecondDigit);
//	}
//	}
//}
//
//void main() {
//	string UserName;
//	int FirstDigit = 0, SecondDigit = 0;
//	char Choice = 0, FlagContinue = 0;
//	SunnyCat("Meow, my name's Tom, and your's?");
//	cout << "Student's name: ";
//	cin >> UserName;
//	cout << "\n";
//	Cat(" I want to help you CATculate)\n\t\t\t       some math operations!");
//	system("Pause");
//	do
//	{
//	Cat(" Choose the operation.\n\t\t\t   Enter the digit from 1 to 4.");
//	Cat(" 1-addition; 2-subtraction;\n\t\t\t   3-multiplication; 4-division");
//	cout << "Your choice: ";
//	cin >> Choice;
//		while (Choice < '1' || Choice > '4')
//	{
//	Cat(" You entered wrong value!\n\t\t\t   Enter 1,2,3 or 4.");
//	cout << "Your choice: ";
//	cin >> Choice;
//	}
//	Cat(" Great! Enter two digits.");
//	cout << "First digit: ";
//	cin >> FirstDigit;
//	cout << "Second digit: ";
//	cin >> SecondDigit;
//		if (Choice == '4' && SecondDigit == 0) {
//		Cat(" Ouch! You can't division by 0!\n\t\t\t   Try again.(");
//		system("Pause");
//	}   
//		else {
//		float Result = Operations(Choice, FirstDigit, SecondDigit);
//		CatResult(FirstDigit, SecondDigit, Choice, Result);
//		system("Pause");
//	}
//	Cat("     Shall we continue?\n\t\t\t        Yes or No?");
//	cout << "Enter \"y\" or \"n\" ";
//	cin >> FlagContinue;
//	} while (FlagContinue == 'y');
//}
//         
//         
//
