//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//
////Дано два масива: А[n] и B[m]. Утворити третій масив мінімального можливого розміру, у якому зібрати:
////Елементи обох масивів;
////Спільні элементи обох массивiв;
////Елементи масиву A, які не зустрічаються у B;
////Елементи масиву В, які не зустрічаються у А;
////Елементи масивів A і B, які не є спільними для них(тобто об’єднання результатів двох попереднії результатів).
//
//void main() {
//	srand(unsigned int(time(NULL)));
//
//	const int SIZEA = 5, SIZEB = 7;
//	int arrA[SIZEA]{}, arrB[SIZEB]{};
//	
//	// Task #1 Елементи обох масивів;
//
//	for (int i = 0; i < SIZEA; i++){
//		*(arrA + i) = rand() % 20;
//	}
//
//	for (int i = 0; i < SIZEB; i++){
//		*(arrB + i) = rand() % 20;
//	}
//
//	for (int i = 0; i < SIZEA; i++){
//		cout << "Array A [" << i << "] = " << *(arrA + i) << endl;
//	}
//	cout << "----------------------------------" << endl;
//
//	for (int i = 0; i < SIZEB; i++){
//		cout << "Array B [" << i << "] = " << *(arrB + i) << endl;
//	}
//	cout << "----------------------------------" << endl;
//
//	int* arrC = new int[SIZEA + SIZEB];
//
//	for (int i = 0; i < (SIZEA + SIZEB); i++){
//		
//		if (i < SIZEA){
//			*(arrC + i) = *(arrA + i);
//		}
//
//		if (i >= SIZEA && i < (SIZEA + SIZEB)){
//			*(arrC + i) = *(arrB + (i - SIZEA));
//		}
//	}
//
//	for (int i = 0; i < (SIZEA + SIZEB); i++){
//		cout << "Array C [" << i << "] = " << *(arrC + i) << endl;
//	}
//	cout << "----------------------------------" << endl;
//	delete[] arrC;
//	system("Pause");
//	// Task #2 Спільні элементи обох массивiв;
//
//	int k = 0;
//	for (int i = 0; i < SIZEA; i++){
//
//		for (int j = 0; j < SIZEB; j++){
//
//			if (*(arrA + i) == *(arrB + j)){
//				k++;
//			}
//		}
//	}
//	cout << "\nArrays have " << k << " equal values" << endl;
//	arrC = new int[k];
//
//	for (int i = 0, n = 0; i < SIZEA; i++){
//		
//		for (int j = 0; j < SIZEB; j++){
//
//			if (*(arrA + i) == *(arrB + j)){
//				*(arrC + n) = *(arrA + i);
//				n++;
//			}
//		}
//	}
//	cout << "The same values of array A and array B are:\n\n";
//
//	for (int i = 0; i < k; i++){
//		cout << *(arrC + i) << "\t" << arrC + i << endl;
//	}
//	cout << "------------------------------------" << endl;
//	delete[] arrC;
//	system("Pause");
//	// Task # 3 Елементи масиву A, які не зустрічаються у B;
//
//	k = 0;
//	for (int i = 0; i < SIZEA; i++){
//		bool flag = false;
//
//		for (int j = 0; j < SIZEB; j++){
//
//			if (*(arrA + i) == *(arrB + j)){
//				flag = true;
//			}
//		}
//
//		if (!flag){
//			k++;
//		}
//	}
//	cout << "\nThe array A has " << k << " different values from array B." << endl;
//	arrC = new int[k];
//
//	for (int i = 0, n = 0; i < SIZEA; i++){
//		bool flag = false;
//
//		for (int j = 0; j < SIZEB; j++){
//
//			if (*(arrA + i) == *(arrB + j)){
//				flag = true;
//			}
//		}
//
//		if (!flag){
//			*(arrC + n) = *(arrA + i);
//			n++;
//		}
//	}
//	cout << "The values of array A which aren't in array B are:\n\n";
//
//	for (int i = 0; i < k; i++){
//		cout << *(arrC + i) << "\t" << arrC + i << endl;
//	}
//	cout << "------------------------------------" << endl;
//	system("Pause");
//	// Task # 4 Елементи масиву В, які не зустрічаються у А;
//
//	int l = 0;
//	for (int i = 0; i < SIZEB; i++){
//		bool flag = false;
//
//		for (int j = 0; j < SIZEA; j++){
//
//			if (*(arrB + i) == *(arrA + j)){
//				flag = true;
//			}
//		}
//
//		if (!flag){
//			l++;
//		}
//	}
//	cout << "\nThe array B has " << l << " different values from array A." << endl;
//	int* arrD = new int[l];
//
//	for (int i = 0, n = 0; i < SIZEB; i++){
//		bool flag = false;
//
//		for (int j = 0; j < SIZEA; j++){
//
//			if (*(arrB + i) == *(arrA + j)){
//				flag = true;
//			}
//		}
//
//		if (!flag){
//			*(arrD + n) = *(arrB + i);
//			n++;
//		}
//	}
//	cout << "The values of array B which aren't in array A are:\n\n";
//
//	for (int i = 0; i < l; i++){
//		cout << *(arrD + i) << "\t" << arrD + i << endl;
//	}
//	cout << "------------------------------------" << endl;
//	system("Pause");
//	// Task #5 Елементи масивів A і B, які не є спільними для них(тобто об’єднання результатів двох попереднії результатів).
//
//	int* arrF = new int[k + l];
//	cout << "\nThe count of elements of arrays A and array B that aren't common to them are: " << k + l << endl;
//
//	for (int i = 0, n = 0; i < (k + l); i++){
//	
//		if (i < k){
//			*(arrF + i) = *(arrC + i);
//		}
//		if (i >= k && i <= (k + l)){
//			*(arrF + i) = *(arrD + n);
//			n++;
//		}
//	}
//	
//	cout << "The values of array A and array B that aren't common to them are:\n\n";
//
//	for (int i = 0; i < (k + l); i++){
//		cout << *(arrF + i) << "\t" << arrF + i << endl;
//	}
//	cout << "------------------------------------" << endl;
//
//	delete[] arrC;
//	delete[] arrD;
//	delete[] arrF;
//	arrC = nullptr;
//	arrD = nullptr;
//	arrF = nullptr;
//	system("Pause");
//	}
//	