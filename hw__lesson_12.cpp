//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//
////Гра х0.Гра між комп’ютером та гравцем.Перший гравець ходить хрестиками.Перший гравець(комп’ютер чи людина)
////обирається випадковим чином.Програма після кожного ходу показує ігрове поле.При завершенні гри оголошується переможець
////чи нічия.
////
////*** Розвинути логіку AI
//
//const int ROW = 3, COL = 3;
//char Matrix[3][3]{ {' ',' ',' '}, {' ',' ',' '}, {' ',' ',' '} };
//void ShowField();
//void UserMove(int UserSymbol);
//void ComputerMove(char Matrix[3][3], const int ROW, const int COL, int UserSymbol, int CompSymbol);
//bool GameOver(char Matrix[][3], const int ROW, const int COL, char UserSymbol, char CompSymbol);
//
//int main() {
//	srand(unsigned int(time(NULL)));
//	ShowField();
//	bool WhoMove = rand() % 2;                          // 0 - Computer move first, 1 - User move first
//	char UserSymbol = 0, CompSymbol = 0;
//
//
//	switch (WhoMove)
//	{
//	case false: {
//		CompSymbol = 'x', UserSymbol = 'o';
//		cout << "The computer moves first:\nComputer - x\nYou\t - o\n" << endl;
//		do
//		{
//			ComputerMove(Matrix, ROW, COL, UserSymbol, CompSymbol);
//			ShowField();
//			if (GameOver(Matrix, ROW, COL, UserSymbol, CompSymbol) == false)
//			{
//				break;
//			}
//			UserMove(UserSymbol);
//			ShowField();
//			if (GameOver(Matrix, ROW, COL, UserSymbol, CompSymbol) == false)
//			{
//				break;
//			}
//		} while (GameOver(Matrix, ROW, COL, UserSymbol, CompSymbol) == true);
//		break;
//	}
//	case true: {
//		UserSymbol = 'x', CompSymbol = 'o';
//		cout << "You move first:\n\nComputer - o\nYou\t - x\n" << endl;
//		do
//		{
//			UserMove(UserSymbol);
//			ShowField();
//			if (GameOver(Matrix, ROW, COL, UserSymbol, CompSymbol) == false)
//			{
//				break;
//			}
//			ComputerMove(Matrix, ROW, COL, UserSymbol, CompSymbol);
//			ShowField();
//			if (GameOver(Matrix, ROW, COL, UserSymbol, CompSymbol) == false)
//			{
//				break;
//			}
//		} while (GameOver(Matrix, ROW, COL, UserSymbol, CompSymbol) == true);
//		break;
//	}
//	}
//
//	system("Pause");
//	return 0;
//}
//
//void ShowField() {
//	cout << "    0   1   2\n  -------------\n";
//	for (int i = 0; i < ROW; i++)
//	{
//		cout << i << " | ";
//		for (int j = 0; j < COL; j++)
//		{
//			cout << Matrix[j][i] << " | ";
//		}
//		cout << endl;
//	}
//	cout << "  -------------\n\n";
//}
//void UserMove(int UserSymbol) {
//	int x = 0, y = 0;
//	cout << "Enter coordinates X, Y:\n";
//	cin >> x >> y;
//	while (x < 0 || x > 2 || y < 0 || y > 2) {
//		cout << "You entered wrong coordinates. Enter correct coordinates.\n";
//		cin >> x >> y;
//	}
//	while (Matrix[x][y] != ' ') {
//		cout << "You've selected a filled field! Select empty field.\n";
//		cin >> x >> y;
//	}
//	Matrix[x][y] = UserSymbol;
//}
//void ComputerMove(char Matrix[3][3], const int ROW, const int COL, int UserSymbol, int CompSymbol) {
//	srand(unsigned int(time(NULL)));
//	int x = 0, y = 0;
//	bool flag = false;
//
//	do {
//		x = rand() % 3;
//		y = rand() % 3;
//	} while (Matrix[x][y] != ' ');
//
//	do
//	{
//		if (Matrix[0][0] == UserSymbol && Matrix[1][0] == UserSymbol ||      // Check position #3
//			Matrix[2][1] == UserSymbol && Matrix[2][2] == UserSymbol ||
//			Matrix[1][1] == UserSymbol && Matrix[0][2] == UserSymbol)
//		{
//			flag = true;
//			if (Matrix[2][0] == ' ') {
//				Matrix[2][0] = CompSymbol;
//			}
//			else {
//				Matrix[x][y] = CompSymbol;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//
//		if (Matrix[1][0] == UserSymbol && Matrix[2][0] == UserSymbol ||     // Check position #1
//			Matrix[0][1] == UserSymbol && Matrix[0][2] == UserSymbol ||
//			Matrix[1][1] == UserSymbol && Matrix[2][2] == UserSymbol)
//		{
//			flag = true;
//			if (Matrix[0][0] == ' ') {
//				Matrix[0][0] = CompSymbol;
//			}
//			else {
//				Matrix[x][y] = CompSymbol;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//
//		if (Matrix[0][0] == UserSymbol && Matrix[2][0] == UserSymbol ||    // Check position #2
//			Matrix[1][1] == UserSymbol && Matrix[1][2] == UserSymbol)
//		{
//			flag = true;
//			if (Matrix[1][0] == ' ') {
//				Matrix[1][0] = CompSymbol;
//			}
//			else {
//				Matrix[x][y] = CompSymbol;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//
//		if (Matrix[0][1] == UserSymbol && Matrix[1][1] == UserSymbol ||     // Check position #6
//			Matrix[2][0] == UserSymbol && Matrix[2][2] == UserSymbol)
//		{
//			flag = true;
//			if (Matrix[2][1] == ' ') {
//				Matrix[2][1] = CompSymbol;
//			}
//			else {
//				Matrix[x][y] = CompSymbol;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//		
//		if (Matrix[1][1] == UserSymbol && Matrix[2][1] == UserSymbol ||     // Check position #4
//			Matrix[0][0] == UserSymbol && Matrix[0][2] == UserSymbol)
//		{
//			flag = true;
//			if (Matrix[0][1] == ' ') {
//				Matrix[0][1] = CompSymbol;
//			}
//			else {
//				Matrix[x][y] = CompSymbol;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//
//		if (Matrix[0][1] == UserSymbol && Matrix[2][1] == UserSymbol ||      // Check position #5
//			Matrix[1][0] == UserSymbol && Matrix[1][2] == UserSymbol ||
//			Matrix[0][0] == UserSymbol && Matrix[2][2] == UserSymbol ||
//			Matrix[2][0] == UserSymbol && Matrix[0][2] == UserSymbol)
//		{
//			flag = true;
//			if (Matrix[1][1] == ' ') {
//				Matrix[1][1] = CompSymbol;
//			}
//			else {
//				Matrix[x][y] = CompSymbol;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//
//		if (Matrix[0][2] == UserSymbol && Matrix[1][2] == UserSymbol ||    // Check position #9
//			Matrix[2][0] == UserSymbol && Matrix[2][1] == UserSymbol ||
//			Matrix[0][0] == UserSymbol && Matrix[1][1] == UserSymbol)
//		{
//			flag = true;
//			if (Matrix[2][2] == ' ') {
//				Matrix[2][2] = CompSymbol;
//			}
//			else {
//				Matrix[x][y] = CompSymbol;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//
//		if (Matrix[1][2] == UserSymbol && Matrix[2][2] == UserSymbol ||   // Check position #7
//			Matrix[0][0] == UserSymbol && Matrix[0][1] == UserSymbol ||
//			Matrix[2][0] == UserSymbol && Matrix[1][1] == UserSymbol)
//		{
//			flag = true;
//			if (Matrix[0][2] == ' ') {
//				Matrix[0][2] = CompSymbol;
//			}
//			else {
//				Matrix[x][y] = CompSymbol;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//
//		if (Matrix[0][2] == UserSymbol && Matrix[2][2] == UserSymbol ||     // Check position #8
//			Matrix[1][0] == UserSymbol && Matrix[1][1] == UserSymbol)
//		{
//			flag = true;
//			if (Matrix[1][2] == ' ') {
//				Matrix[1][2] = CompSymbol;
//			}
//			else {
//				Matrix[x][y] = CompSymbol;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//
//		if (!flag)
//		{
//			Matrix[x][y] = CompSymbol;
//		}
//		break;
//	} while (true);
//}
//bool GameOver(char Matrix[][3], const int ROW, const int COL, char UserSymbol, char CompSymbol) {
//	int UserCounter1 = 0, CompCounter1 = 0, UserCounter2 = 0, CompCounter2 = 0, UserCounter3 = 0, CompCounter3 = 0, UserCounter4 = 0, CompCounter4 = 0;
//	int Draw = 0;
//	bool flag = false, flag1 = false;
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COL; j++)
//		{
//			if (Matrix[j][i] == UserSymbol)
//			{
//				UserCounter1++;
//			}
//			if (Matrix[j][i] == CompSymbol)
//			{
//				CompCounter1++;
//			}
//
//			if (Matrix[i][j] == UserSymbol)
//			{
//				UserCounter2++;
//			}
//			if (Matrix[i][j] == CompSymbol)
//			{
//				CompCounter2++;
//			}
//
//			if (Matrix[j][j] == UserSymbol)
//			{
//				UserCounter3++;
//			}
//			if (Matrix[j][j] == CompSymbol)
//			{
//				CompCounter3++;
//			}
//
//			if (Matrix[2 - j][j] == UserSymbol)
//			{
//				UserCounter4++;
//			}
//			if (Matrix[2 - j][j] == CompSymbol)
//			{
//				CompCounter4++;
//			}
//
//			if (Matrix[i][j] != ' ')
//			{
//				Draw++;
//			}
//
//		}
//
//
//
//		if (UserCounter1 == 3 || UserCounter2 == 3 || UserCounter3 == 3 || UserCounter4 == 3)
//		{
//			cout << "You won!!!" << endl;
//			flag = true;
//			return false;
//		}
//		if (CompCounter1 == 3 || CompCounter2 == 3 || CompCounter3 == 3 || CompCounter4 == 3)
//		{
//			cout << "Computer won!!!" << endl;
//			flag1 = true;
//			return false;
//		}
//		if (Draw == 9 && !flag || Draw == 9 && !flag1)
//		{
//			cout << "Draw!!!" << endl;
//			return false;
//		}
//		UserCounter1 = 0;
//		CompCounter1 = 0;
//		UserCounter2 = 0;
//		CompCounter2 = 0;
//		UserCounter3 = 0;
//		CompCounter3 = 0;
//		UserCounter4 = 0;
//		CompCounter4 = 0;
//
//
//	}
//	return true;
//}