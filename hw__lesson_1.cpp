//#include<iostream>    //!!!!!!!!!!!!!!!!!!Для запуску кожної програми, слід розкоментувати її!!!!!!!!!!!!!!!!!!!
//#include<math.h>
//using namespace std;

//******** TASK #1 --- Напишіть програму, яка переводить кілометри в метри.Кілометри вводяться з клавіатури.********

/*
int main()
{
	float distance_in_km = 0;               // може бути не ціле число
	int distance_in_meter = 0;

	cout << "Enter amount of kilometers you want converting to meters:" << endl;
	cin >> distance_in_km;
	distance_in_meter = distance_in_km * 1000;
	cout << "So, " << distance_in_km << " km = " << distance_in_meter << " meters."<< endl << endl << endl;

	system("pause");
	return 0;
}
*/

//******** TASK #2 --- Напишіть програму, яка обраховує квадрат довільно введеного числа ********

/*
int main()
{
	float number_of_user = 0;
	float square_of_number = 0;

	cout << "Enter the number you want to square:" << endl;
	cin >> number_of_user;
	square_of_number = number_of_user * number_of_user;
	cout << "So, square of number " << number_of_user << " is " << square_of_number << endl << endl << endl;

	system("pause");
	return 0;
}
*/

//******** TASK #3 --- Написати програму, яка переводить дні в хвилини. Дні вводяться з клавіатури.********

/*
int main()
{
	float days_from_user = 0;
	int amount_of_minutes = 0;
	int minutes_in_one_day = 24 * 60;

	cout << "Enter amount of days you want converting to minutes:" << endl;
	cin >> days_from_user;
	amount_of_minutes = days_from_user * minutes_in_one_day;
	cout << "So, " << days_from_user << " days contain " << amount_of_minutes << " minutes." << endl << endl << endl;

	system("pause");
	return 0;
}
*/

//******** TASK #4 --- Разробити програму, яка організовує діалог з користувачем і дозволяє обчислити********
//                     по вказаній сумі і курсу (євро, долара та російського рубля) суму в гривнях.



    // Для цього ТЗ можна використати switch, щоб юзер міг вибрати потрібну валюту, масиви,
//               оскільки ми ще не вивчали ці теми, роблю такий варіант: (виглядає страшно;))
/*
int main()
{
	float amount_of_money_usd = 0;
	float amount_of_money_euro = 0;
	float amount_of_money_rub = 0;

	float currency_usd_uan_buy = 26.7693;
	float currency_usd_uan_sell = 26.9996;                           // Курc uan
	float currency_euro_uan_buy = 29.4427;
	float currency_euro_uan_sell = 29.9113;
	float currency_rub_uan_buy = 0.3409;
	float currency_rub_uan_sell = 0.3837;

	float currency_uan_usd_buy = 0.0400;
	float currency_uan_usd_sell = 0.0430;                           // Курс usd
	float currency_euro_usd_buy = 1.1001;
	float currency_euro_usd_sell = 1.1050;
	float currency_rub_usd_buy = 0.0131;
	float currency_rub_usd_sell = 0.0149;

	float currency_uan_euro_buy = 0.0299;
	float currency_uan_euro_sell = 0.0300;                           // Курс euro
	float currency_usd_euro_buy = 0.9100;
	float currency_usd_euro_sell = 0.9200;
	float currency_rub_euro_buy = 0.0110;
	float currency_rub_euro_sell = 0.0113;

	float currency_uan_rub_buy = 2.6500;
	float currency_uan_rub_sell = 2.6505;                           // Курс rub
	float currency_usd_rub_buy = 70.7400;
	float currency_usd_rub_sell = 80.8000;
	float currency_euro_rub_buy = 77.8800;
	float currency_euro_rub_sell = 77.9200;

	cout << "Enter amount of money in USD you want converting:" << endl;
	cin >> amount_of_money_usd;
	cout << endl;

	float usd_uan_buy = amount_of_money_usd * currency_usd_uan_buy;
	float usd_uan_sell = amount_of_money_usd * currency_usd_uan_sell;
	float usd_euro_buy = amount_of_money_usd * currency_usd_euro_buy;                           // Розрахунок курсу валют відносно USD
	float usd_euro_sell = amount_of_money_usd * currency_usd_euro_sell;
	float usd_rub_buy = amount_of_money_usd * currency_usd_rub_buy;
	float usd_rub_sell = amount_of_money_usd * currency_usd_rub_sell;

	cout << "So, " << amount_of_money_usd << " USD are equal to:" << endl << endl;
	cout << "\tUAN\t\t\t\tEURO\t\t\t\tRUB" << endl;
	cout << "  - BUY-- " << usd_uan_buy << "\t\t  - BUY-- " << usd_euro_buy << "\t\t\t  - BUY-- " << usd_rub_buy << endl;
	cout << "  - SELL-- " << usd_uan_sell << "\t\t  - SELL-- " << usd_euro_sell << "\t\t\t  - SELL-- " << usd_rub_sell << endl <<endl;

	cout << "Enter amount of money in EURO you want converting:" << endl;
	cin >> amount_of_money_euro;
	cout << endl;

	float euro_uan_buy = amount_of_money_euro * currency_euro_uan_buy;
	float euro_uan_sell = amount_of_money_euro * currency_euro_uan_sell;
	float euro_usd_buy = amount_of_money_euro * currency_euro_usd_buy;                     // Розрахунок курсу валют відносно EURO
	float euro_usd_sell = amount_of_money_euro * currency_euro_usd_sell;
	float euro_rub_buy = amount_of_money_euro * currency_euro_rub_buy;
	float euro_rub_sell = amount_of_money_euro * currency_euro_rub_sell;

	cout << "So, " << amount_of_money_usd << " EURO are equal to:" << endl << endl;
	cout << "\tUAN\t\t\t\tUSD\t\t\t\tRUB" << endl;
	cout << "  - BUY-- " << euro_uan_buy << "\t\t  - BUY-- " << euro_usd_buy << "\t\t  - BUY-- " << euro_rub_buy << endl;
	cout << "  - SELL-- " << euro_uan_sell << "\t\t  - SELL-- " << euro_usd_sell << "\t\t  - SELL-- " << euro_rub_sell << endl << endl;

	cout << "Enter amount of money in RUB you want converting:" << endl;
	cin >> amount_of_money_rub;
	cout << endl;

	float rub_uan_buy = amount_of_money_rub * currency_rub_uan_buy;
	float rub_uan_sell = amount_of_money_rub * currency_rub_uan_sell;
	float rub_usd_buy = amount_of_money_rub * currency_rub_usd_buy;                       // Розрахунок курсу валют відносно RUB
	float rub_usd_sell = amount_of_money_rub * currency_rub_usd_sell;
	float rub_euro_buy = amount_of_money_rub * currency_rub_euro_buy;
	float rub_euro_sell = amount_of_money_rub * currency_rub_euro_sell;

	cout << "So, " << amount_of_money_usd << " RUB are equal to:" << endl << endl;
	cout << "\tUAN\t\t\t\tUSD\t\t\t\tEURO" << endl;
	cout << "  - BUY-- " << rub_uan_buy << "\t\t\t  - BUY-- " << rub_usd_buy << "\t\t\t  - BUY-- " << rub_euro_buy << endl;
	cout << "  - SELL-- " << rub_uan_sell << "\t\t  - SELL-- " << rub_usd_sell << "\t\t\t  - SELL-- " << rub_euro_sell << endl;


	system("pause");
	return 0;
}
*/

//******** TASK #5 --- Дано витрати машиною пального на 100 км, ціну 1 л пального, а також шлях, який потрібно проїхати водію.********
//                     Обчислити та вивести на екран скільки потрібно витратити грошей водію, щоб проїхати вказаний шлях.

/*
int main()
{
	float distance_km = 0;
	float fuel_consumption = 0;
	float cost_of_fuel = 0;

	cout << "For calculation amount of money you need for drive some distance you have to enter some values:" << endl << endl;

	cout << "Distance of a trip (km):" << endl;
	cin >> distance_km;
	cout << endl;
	cout << "Fuel consumption per 100 km:" << endl;
	cin >> fuel_consumption;
	cout << endl;
	cout << "The cost of one liter of fuel in UAN:" << endl;
	cin >> cost_of_fuel;
	cout << endl;

	float required_amount_of_money = distance_km / 100 * fuel_consumption * cost_of_fuel;
	float required_amount_of_fuel = distance_km / 100 * fuel_consumption;

	cout << "If you want to drive " << distance_km << " km you need " << required_amount_of_fuel << " liters of fuel. It cost " << required_amount_of_money << " UAN." << endl << endl;

	system("pause");
	return 0;
}
*/