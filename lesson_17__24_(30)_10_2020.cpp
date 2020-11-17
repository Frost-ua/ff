//#include <iostream>
//#include <string>
//
//using namespace std;
////Написати програму, яка реалізує телефонну книгу з вказаною користувачем кількістю абонентів
////і всіма необхідними функціями. Використати вкладені структури (для адреси чи ПІБ).
//
//
//
//struct  Player
//{
//	string Name;
//	string Surname;
//	int Age;
//	int Price;
//	string Position;
//
//	void ShowPlayerInfo() {
//		cout << "Name = " << Name << "\nSurname = " << Surname << "\nAge = " << Age << "\nPrice = " << Price << "\nPosition = " << Position << endl;
//	}
//};
//
//struct Team
//{
//	string Name;
//	string City;
//	int Win;
//	int Loose;
//	int Draw;
//	string Coach;
//	int size;
//
//	void SetTeamSize(int newSize) {
//		size = newSize;
//	}
//	void GetMem() {
//		player = new Player[size];
//	}
//
//	void ShowTeamInfo() {
//		cout << Name << " " << City << " " << Coach << " " << Win << " " << Loose << " " << Draw << " " << size << endl;
//	}
//
//	Player* player = nullptr;  //new Player[size];
//
//};
//
//void FillPlayer(Player* player, int size) {
//	for (int i = 0; i < size; i++) {
//		cout << "Enter player name: " << endl;
//		cin >> player[i].Name;
//		cout << "Enter player surname: " << endl;
//		cin >> player[i].Surname;
//		cout << "Enter player age: " << endl;
//		cin >> player[i].Age;
//		cout << "Enter player price: " << endl;
//		cin >> player[i].Price;
//		cout << "Enter player position: " << endl;
//		cin >> player[i].Position;
//
//	}
//}
//
//void ShowPlayer(Player* player, int size) {
//	cout << "===================================>>>>>>>>>>>>>>>>>>>>>" << endl;
//	for (int i = 0; i < size; i++) {
//		player[i].ShowPlayerInfo();
//	}
//	cout << "===================================>>>>>>>>>>>>>>>>>>>>>" << endl;
//}
//
//
//int main() {
//
//
//
//
//	Team karpaty = Team();
//	karpaty.Name = "Karpaty";
//	karpaty.City = "Lviv";
//	karpaty.Coach = "Gvardiolla";
//	karpaty.Win = 100500;
//	karpaty.Loose = 340;
//	karpaty.Draw = 189;
//	karpaty.SetTeamSize(2);
//	karpaty.GetMem();
//	karpaty.ShowTeamInfo();
//
//	FillPlayer(karpaty.player, karpaty.size);
//	ShowPlayer(karpaty.player, karpaty.size);
//
//
//	system("pause");
//	return 0;
//}