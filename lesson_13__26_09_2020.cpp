//#include <iostream>
//#include <ctime>
//#include<iomanip>
//using namespace std;
////=================================================   POINTER   ==============================================================
//
//
////Дано три числа. 
////Оголосити вказівники на ці числа. Отримати добуток трьох заданих чисел, середє арифметичне, 
////найменше з них, користуючись непрямим доступом до чисел (через вказівники).
//
//void MultFun(double* pa, double* pb, double* pc, double* pMult) {
//	*pMult = *pa * *pb * *pc;
//}
//void AvgFun(double* pa, double* pb, double* pc, double* pAvg) {
//	*pAvg = (*pa + *pb + *pc) / 3;
//}
//void MinFun(double* pa, double* pb, double* pc, double* pMin) {
//	if (*pa < *pb && *pa < *pc)
//	{
//		*pMin = *pa;
//	}
//	else if (*pb < *pa && *pb < *pc)
//	{
//		*pMin = *pb;
//	}
//	else if (*pc < *pa && *pc < *pb)
//	{
//		*pMin = *pc;
//	}
//}
//
//void main(){                  
//	double a = 0, b = 0, c = 0;
//	cout << "Enter three digits: " << endl;
//	cin >> a >> b >> c;
//
//	double* pa = &a, * pb = &b, * pc = &c;
//
//	double Mult = *pa * *pb * *pc;
//	cout << "Multiplication - " << Mult << endl;
//	double Avg = (*pa + *pb + *pc) / 3;
//	cout << "Avg - " << Avg << endl;
//
//	double Min = 0;
//	if (*pa < *pb && *pa < *pc)
//	{
//		Min = *pa;
//	}
//	else if (*pb < *pa && *pb < *pc)
//	{
//		Min = *pb;
//	}
//	else if (*pc < *pa && *pc < *pb)
//	{
//		Min = *pc;
//	}
//	cout << "Min digit - " << Min << endl;
//	cout << "============================\nFunctions with pointers:\n" << endl;
//	double* pMult = &Mult, *pAvg = &Avg, *pMin = &Min;
//	MultFun(pa, pb, pc, pMult);
//	cout << "Multiplication - " << Mult << endl;
//	AvgFun(pa, pb, pc, pMin);
//	cout << "Avg - " << Avg << endl;
//	MinFun(pa, pb, pc, pMin);
//	cout << "Min digit - " << Min << endl;
//	
//
//	int d = 100, k = 25, n = 16;
//	
//	cout << &d << endl;
//	cout << *&d << endl;
//	int h = *&k;
//
//	system("pause");
//}
//
//
