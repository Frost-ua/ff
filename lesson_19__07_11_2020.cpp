//#include <iostream>
//#include <string>
//#include <fstream>
//
//
//using namespace std;
//
//void WriteToFile(int result) {
//	ofstream writeFile;
//	string path = "lib/db.txt";
//	string text;
//
//	writeFile.open(path, ofstream::app);
//
//	if (!writeFile.is_open()) {
//		cout << "Can't open file!" << endl;
//	}
//	else {
//
//		writeFile << result << "\n";
//		cout << "Saved" << endl;
//	}
//	writeFile.close();
//}
//
//void ReadFromFile() {
//	string path = "lib/db.txt";
//	string text;
//	ifstream readFile;
//
//	readFile.open(path, ios::in);
//
//	if (!readFile.is_open()) {
//		cout << "Can't open file!" << endl;
//	}
//	else {
//		cout << "Opened" << endl;
//		string data;
//		while (getline(readFile, data)) {
//			cout << data << "\n";
//		}
//	}
//	readFile.close();
//}
//
//int main() {
//	int a, b, res, choice;
//
//	cout << "Choose the action:\n1. +\n2. -\n3. *\n4. /" << endl;
//	cin >> choice;
//	cout << "Enter two digits:" << endl;
//	cin >> a >> b;
//	switch (choice) {
//	case 1:
//	{
//		res = a + b;
//		break;
//	}
//	case 2:
//	{
//		res = a - b;
//		break;
//	}
//	case 3:
//	{
//		res = a * b;
//		break;
//	}
//	case 4:
//	{
//		res = a / b;
//		break;
//	}
//	}
//	
//	WriteToFile(res);
//	ReadFromFile();
//
//	system("pause");
//	return 0;
//}                 