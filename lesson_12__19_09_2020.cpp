//#include <iostream>
//#include <ctime>
//#include<iomanip>
////===============   RECURSION   ===========================
//using namespace std;
//
//
////Гра х0.Гра між комп’ютером та гравцем.Перший гравець ходить хрестиками.Перший гравець(комп’ютер чи людина) 
////обирається випадковим чином.Програма після кожного ходу показує ігрове поле.При завершенні гри оголошується переможець чи нічия.
//
//const int COL = 3, ROW = 3;
//char PlayingField[COL][ROW] = { {'-', '-', '-'},{'-', '-', '-'},{'-', '-', '-'} };
//void ShowPlayingField() {
//	for (int i = 0; i < COL; i++) {
//		cout << "|";
//		for (int j = 0; j < ROW; j++) {
//
//			cout << PlayingField[i][j] << "|";
//
//		}
//		cout << endl;
//	}
//}
//
//int UrerOrComp() {
//	srand(unsigned int(time(NULL)));
//	int Choice = rand() % 2;
//	return Choice;
//}
//
//void UserMove() {
//	int x, y;
//	cout << "\nYour move:\nEnter coordinates:" << endl;
//	
//	cin >> x >> y;
//	PlayingField[x][y] = 'x';
//	
//}
//
//
//void CompMove() {
//
//	cout << "\nComputers move\n" << endl;
//	system("pause");
//	for (int i = 0; i < ROW; i++)
//	{
//		bool flag = false;
//		for (int j = 0; j < COL; j++)
//		{
//			if (PlayingField[i][j] == '-')
//			{
//				PlayingField[i][j] = '0';
//				flag = true;
//				if (flag)
//				{
//					break;
//				}
//			}
//			if (flag)
//			{
//				break;
//			}
//
//		}
//		if (flag)
//		{
//			break;
//		}
//
//	}
//}
//
//void main(){
//	int x, y;
//	cout << "Who first?" << endl;
//	ShowPlayingField();
//	switch (UrerOrComp()) {
//	case 0: {
//		cout << "Computer is first\n" << endl;
//		PlayingField[1][1] = '0';
//		ShowPlayingField();
//		while (true)
//		{
//
//			UserMove();
//			ShowPlayingField();
//			system("pause");
//			CompMove();
//			ShowPlayingField();
//
//		}
//
//
//		break;
//	}
//
//	case 1: {
//		cout << "You are first first\n" << endl;;
//		cout << "\nYour move:\nEnter coordinates:" << endl;
//		cin >> x >> y;
//		PlayingField[x][y] = 'x';
//		ShowPlayingField();
//
//
//		break;
//	}
//	}
//
//	
//
//	system("pause");
//}
//
