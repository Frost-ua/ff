//#include <iostream>
//#include <string>
//
//using namespace std;
//
////Описати структуру «Людина». Передбачити:
//
////Заповнення масиву людей
////Вивід інформації з сортуванням по прізвищу та імені
////Вивід списку іменників місяця з вказанням дати народження
////Зміна розміру масиву при додаванні та видаленнні записів
////Пошук по прізвищу та імені
////Редагування запису
//
//struct Person
//{
//	string Name;
//	string Surname;
//	string MiddleName;
//	
//	int DayOfBirth;
//	int MonthOfBirth;
//	int YearOfBirth;
//	
//	void ShowPersoneInfo() {
//		cout << "----------------------------------------------\nName  . . . . . . . . . . " << Name << "\nSurname . . . . . . . . . " << Surname << "\nMiddle name . . . . . . . " << MiddleName << "\nDate of birth . . . . . . " << DayOfBirth << "." << MonthOfBirth << "." << YearOfBirth << "\n----------------------------------------------\n";
//	}
//
//	void GetMemory(int Size) {
//		People = new Person[Size];
//	}
//
//	Person* People = nullptr;
//
//};
//
//
//
//void FillPersone(Person* People, int size) {
//	for (int i = 0; i < size; i++) {
//		cout << "\nPerson name: ";
//		cin >> People[i].Name;
//		cout << "Person surname: ";
//		cin >> People[i].Surname;
//		cout << "Person middle name: ";
//		cin >> People[i].MiddleName;
//		cout << "Person date of birth: ";
//		cin >> People[i].DayOfBirth >> People[i].MonthOfBirth >> People[i].YearOfBirth;
//	}
//}
//void ShowPersons(Person* People, int size) {
//	for (int i = 0; i < size; i++) {
//		People[i].ShowPersoneInfo();
//	}
//}
//void ShowParticularPerson(Person* People, int size, string name, string surname) {
//	
//	
//	for (int i = 0; i < size; i++) {
//		
//		if (People[i].Name == name && People[i].Surname == surname)
//		{
//			cout << "----------------------------------------------\nName  . . . . . . . . . . " << People[i].Name << "\nSurname . . . . . . . . . " << People[i].Surname << "\nMiddle name . . . . . . . " << People[i].MiddleName << "\nDate of birth . . . . . . " << People[i].DayOfBirth << "." << People[i].MonthOfBirth << "." << People[i].YearOfBirth << "\n----------------------------------------------\n";
//		};
//	}
//}
//void SortByName(Person* People, int counter, int temp) {
//
//	for (int i = temp; i < (counter + temp); i++)
//	{
//		for (int j = temp; j < (counter + temp); j++)
//		{
//			if (People[j].Name > People[j + 1].Name)
//			{
//				swap(People[j], People[j + 1]);
//			}
//		}
//	}
//
//}
//void SortBySurname(Person* People, int size) {
//
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size - i - 1; j++)
//		{
//			if (People[j].Surname > People[j + 1].Surname)
//			{
//				swap(People[j], People[j + 1]);
//			}
//		}
//	}
//	int counter = 0, temp = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (People[i].Surname == People[i + 1].Surname)
//		{
//			counter++;
//			if (counter == 1)
//			{
//				temp = i;
//			}
//		}
//	}
//
//	SortByName(People, counter, temp);
//	
//}
//void BirthDay(Person* People, int size, int month, int* count_birthdays) {
//	int size_birthdays = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (People[i].MonthOfBirth == month)
//		{
//			size_birthdays++;
//		}
//	}
//
//	Person* birthdays = new Person[size_birthdays];
//	
//	for (int i = 0, j = 0; i < size; i++)
//	{
//		if (People[i].MonthOfBirth == month)
//		{
//			birthdays[j].Name = People[i].Name;
//			birthdays[j].Surname = People[i].Surname;
//			birthdays[j].MiddleName = People[i].MiddleName;
//			birthdays[j].MonthOfBirth = People[i].MonthOfBirth;
//			birthdays[j].DayOfBirth = People[i].DayOfBirth;
//			birthdays[j].YearOfBirth = People[i].YearOfBirth;
//			j++;
//		}
//	}
//
//	ShowPersons(birthdays, size_birthdays);
//	
//		delete[] birthdays;
//}
//void AddNewPerson(Person* &People, int* p_size, string new_name, string new_surname, string new_middle_name, int new_day_of_birth, int new_month_of_birth, int new_year_of_birth) {
//
//	Person* new_people = new Person[*p_size + 1];
//
//	for (int i = 0; i < *p_size; i++)
//	{
//		new_people[i].Name = People[i].Name;
//		new_people[i].Surname = People[i].Surname;
//		new_people[i].MiddleName = People[i].MiddleName;
//		new_people[i].DayOfBirth = People[i].DayOfBirth;
//		new_people[i].MonthOfBirth = People[i].MonthOfBirth;
//		new_people[i].YearOfBirth = People[i].YearOfBirth;
//	}
//
//	new_people[*p_size].Name = new_name;
//	new_people[*p_size].Surname = new_surname;
//	new_people[*p_size].MiddleName = new_middle_name;
//	new_people[*p_size].DayOfBirth = new_day_of_birth;
//	new_people[*p_size].MonthOfBirth = new_month_of_birth;
//	new_people[*p_size].YearOfBirth = new_year_of_birth;
//
//	delete[] People;
//	People = new_people;
//	/*People = new Person[*p_size + 1];
//	
//	for (int i = 0; i < (*p_size + 1); i++)
//	{
//		People[i].Name = new_people[i].Name;
//		People[i].Surname = new_people[i].Surname;
//		People[i].MiddleName = new_people[i].MiddleName;
//		People[i].DayOfBirth = new_people[i].DayOfBirth;
//		People[i].MonthOfBirth = new_people[i].MonthOfBirth;
//		People[i].YearOfBirth = new_people[i].YearOfBirth;
//	}*/
//
//	/*delete[] new_people;*/
//
//
//
//
//
//	(*p_size)++;
//
//	
//
//}
//void DeletePerson(Person* &People, int* p_size, string del_name, string del_surname, string del_middle_name, int del_day_of_birth, int del_month_of_birth, int del_year_of_birth) {
//	
//	int temp_i = 0;
//	bool flag = false;
//
//	for (int i = 0; i < *p_size; i++)
//	{
//		if (People[i].Name == del_name && People[i].Surname == del_surname && People[i].MiddleName == del_middle_name)
//		{
//			temp_i = i;
//			flag = true;
//		}
//	}
//
//	if (flag)
//	{
//		Person* new_people = new Person[*p_size - 1];
//
//		for (int i = 0; i < (*p_size - 1); i++)
//		{
//			if (i < temp_i)
//			{
//				new_people[i].Name = People[i].Name;
//				new_people[i].Surname = People[i].Surname;
//				new_people[i].MiddleName = People[i].MiddleName;
//				new_people[i].DayOfBirth = People[i].DayOfBirth;
//				new_people[i].MonthOfBirth = People[i].MonthOfBirth;
//				new_people[i].YearOfBirth = People[i].YearOfBirth;
//			}
//			if (i >= temp_i)
//			{
//				new_people[i].Name = People[i + 1].Name;
//				new_people[i].Surname = People[i + 1].Surname;
//				new_people[i].MiddleName = People[i + 1].MiddleName;
//				new_people[i].DayOfBirth = People[i + 1].DayOfBirth;
//				new_people[i].MonthOfBirth = People[i + 1].MonthOfBirth;
//				new_people[i].YearOfBirth = People[i + 1].YearOfBirth;
//			}
//		}
//
//		delete[] People;
//		People = new_people;
//
//		(*p_size)--;
//	}
//	else
//	{
//		cout << "\nEntered person doesn't exist!" << endl;
//	}
//
//	/*People = new Person[*p_size + 1];
//
//	for (int i = 0; i < (*p_size + 1); i++)
//	{
//		People[i].Name = new_people[i].Name;
//		People[i].Surname = new_people[i].Surname;
//		People[i].MiddleName = new_people[i].MiddleName;
//		People[i].DayOfBirth = new_people[i].DayOfBirth;
//		People[i].MonthOfBirth = new_people[i].MonthOfBirth;
//		People[i].YearOfBirth = new_people[i].YearOfBirth;
//	}*/
//
//	/*delete[] new_people;*/
//}
//int SearchPerson(Person*& People, int* p_size, string search_name, string search_surname) {
//
//	int size_searching = 0, temp_i;
//	bool flag = false;
//	for (int i = 0; i < *p_size; i++)
//	{
//		if (People[i].Name == search_name && People[i].Surname == search_surname)
//		{
//			size_searching++;
//			flag = true;
//			temp_i = i;
//		}
//	}
//
//	if (flag)
//	{
//		Person* search = new Person[size_searching];
//
//		for (int i = 0, j = 0; i < *p_size; i++)
//		{
//			if (People[i].Name == search_name && People[i].Surname == search_surname)
//			{
//				search[j].Name = People[i].Name;
//				search[j].Surname = People[i].Surname;
//				search[j].MiddleName = People[i].MiddleName;
//				search[j].MonthOfBirth = People[i].MonthOfBirth;
//				search[j].DayOfBirth = People[i].DayOfBirth;
//				search[j].YearOfBirth = People[i].YearOfBirth;
//				j++;
//			}
//		}
//
//		ShowPersons(search, size_searching);
//
//		delete[] search;
//		return temp_i;
//	}
//	else
//	{
//		cout << "\nEntered person doesn't exist!" << endl;
//		return 0;
//	}
//}
//void EditPerson(Person*& People, int* p_size, string search_name, string search_surname, string new_name, string new_surname, string new_middle_name, int new_day_of_birth, int new_month_of_birth, int new_year_of_birth) {
//
//	int j = SearchPerson(People, p_size, search_name, search_surname);
//
//		People[j].Name = new_name;
//		People[j].Surname = new_surname;
//		People[j].MiddleName = new_middle_name;
//		People[j].MonthOfBirth = new_day_of_birth;
//		People[j].DayOfBirth = new_month_of_birth;
//		People[j].YearOfBirth = new_year_of_birth;
//	
//}
//void DelArr(Person* People) {
//
//	delete[] People;
//}
//
//
//int main() {
//	int size = 0, choice = 0, count_birthdays;
//	bool menu = true;
//	int* p_count_birthdays = &count_birthdays;
//	int* p_size = &size;
//
//	Person unit = Person();
//	
//	cout << "\t\tWelcome to database. Here you can adding new persons and edit informations about them.\n\nEnter count of people you want to add:" << endl;
//	cin >> size;
//
//	unit.GetMemory(size);
//	FillPersone(unit.People, size);
//	ShowPersons(unit.People, size);
//
//	while (menu)
//	{
//		cout << "\nEnter the action you want to do.\n\n";
//		cout << "1. Show all persons\n2. Sort by surname.\n3. Display birthdays of the month.\n4. Add a new person.\n5. Delete a person by name, surname and middle name.\n6. Search by name and surname.\n7. Edit information about a person.\n0. Exit.\n";
//			
//		cin >> choice;
//
//		switch (choice) {
//
//		case 1: {
//			ShowPersons(unit.People, size);
//			break;
//		}
//		case 2: {
//
//			SortBySurname(unit.People, size);
//			ShowPersons(unit.People, size);
//			system("pause");
//			break;
//		}
//		case 3: {
//			int month = 0;
//			cout << "Enter the month in which you want to display birthdays\n";
//			cin >> month;
//
//			cout << "Birthdays of " << month << " are: " << endl;
//			BirthDay(unit.People, size, month, p_count_birthdays);
//			system("pause");
//			break;
//		}
//		case 4: {
//			
//			string new_name, new_surname, new_middle_name;
//			int new_day_of_birth, new_month_of_birth, new_year_of_birth;
//
//			cout << "Enter the name of a new person:" << endl;
//			cin >> new_name;
//			cout << "Enter the surname of a new person:" << endl;
//			cin >> new_surname;
//			cout << "Enter the middle name of a new person:" << endl;
//			cin >> new_middle_name;
//			cout << "Enter the date of birthday of a new person:" << endl;
//			cin >> new_day_of_birth >> new_month_of_birth >> new_year_of_birth;
//
//			AddNewPerson(unit.People, p_size, new_name, new_surname, new_middle_name, new_day_of_birth, new_month_of_birth, new_year_of_birth);
//			ShowPersons(unit.People, size);
//			system("pause");
//			break;
//		}
//		case 5: {
//
//			string del_name, del_surname, del_middle_name;
//			int del_day_of_birth, del_month_of_birth, del_year_of_birth;
//
//			cout << "Enter the name of a person you want to delete:" << endl;
//			cin >> del_name;
//			cout << "Enter the surname of a person you want to delete:" << endl;
//			cin >> del_surname;
//			cout << "Enter the middle name of a person you want to delete:" << endl;
//			cin >> del_middle_name;
//			cout << "Enter the date of birthday of a person you want to delete:" << endl;
//			cin >> del_day_of_birth >> del_month_of_birth >> del_year_of_birth;
//
//			DeletePerson(unit.People, p_size, del_name, del_surname, del_middle_name, del_day_of_birth, del_month_of_birth, del_year_of_birth);
//			ShowPersons(unit.People, size);
//			system("pause");
//			break;
//		}
//		case 6: {
//
//			string search_name, search_surname;
//			cout << "Enter the name of a person you want to search:" << endl;
//			cin >> search_name;
//			cout << "Enter the surname of a person you want to search:" << endl;
//			cin >> search_surname;
//
//			SearchPerson(unit.People, p_size, search_name, search_surname);
//			system("pause");
//			break;
//		}
//		case 7: {
//
//			string search_name, search_surname, new_name, new_surname, new_middle_name;
//			int new_day_of_birth, new_month_of_birth, new_year_of_birth;
//			cout << "Enter the name of a person you want to edit:" << endl;
//			cin >> search_name;
//			cout << "Enter the surname of a person you want to edit:" << endl;
//			cin >> search_surname;
//
//			cout << "Enter a new name of a person:" << endl;
//			cin >> new_name;
//			cout << "Enter a new surname of a person:" << endl;
//			cin >> new_surname;
//			cout << "Enter a new middle name of a person:" << endl;
//			cin >> new_middle_name;
//			cout << "Enter a new date of birthday of a person:" << endl;
//			cin >> new_day_of_birth >> new_month_of_birth >> new_year_of_birth;
//
//			EditPerson(unit.People, p_size, search_name, search_surname, new_name, new_surname, new_middle_name, new_day_of_birth, new_month_of_birth, new_year_of_birth);
//			cout << "\nThe information was edited:" << endl;
//			ShowParticularPerson(unit.People, size, new_name, new_surname);
//			system("pause");
//			break;
//		}
//		case 0: {
//			cout << "\nThank for using!)";
//			menu = false;
//			break;
//		}
//		default: {
//			cout << "Incorrect value. Please, enter a value from 0 to 7.";
//			system("pause");
//			break;
//		}
//		}
//	}
//	
//	cout << endl;
//	DelArr(unit.People);
//	system("pause");
//	return 0;
//}