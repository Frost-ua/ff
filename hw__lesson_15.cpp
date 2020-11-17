//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//
////���� ��� ������: �[n] � B[m]. �������� ����� ����� ���������� ��������� ������, � ����� ������:
////�������� ���� ������;
////����� �������� ���� ������i�;
////�������� ������ A, �� �� ������������ � B;
////�������� ������ �, �� �� ������������ � �;
////�������� ������ A � B, �� �� � �������� ��� ���(����� �ᒺ������ ���������� ���� �������� ����������).
//
//void printArr(int* arrC, int size);
//
//void main() {
//	srand(unsigned int(time(NULL)));
//
//	const int SIZEA = 5, SIZEB = 7;
//	int arrA[SIZEA]{}, arrB[SIZEB]{};
//
//	// Task #1 �������� ���� ������;
//
//	for (int i = 0; i < SIZEA; i++) {
//		*(arrA + i) = rand() % 20;
//	}
//
//	for (int i = 0; i < SIZEB; i++) {
//		*(arrB + i) = rand() % 20;
//	}
//
//	for (int i = 0; i < SIZEA; i++) {
//		cout << "Array A [" << i << "] = " << *(arrA + i) << endl;
//	}
//	cout << "----------------------------------" << endl;
//
//	for (int i = 0; i < SIZEB; i++) {
//		cout << "Array B [" << i << "] = " << *(arrB + i) << endl;
//	}
//	cout << "----------------------------------" << endl;
//
//	int* arrC = new int[SIZEA + SIZEB];
//
//	for (int i = 0; i < (SIZEA + SIZEB); i++) {
//
//		if (i < SIZEA) {
//			*(arrC + i) = *(arrA + i);
//		}
//
//		if (i >= SIZEA && i < (SIZEA + SIZEB)) {
//			*(arrC + i) = *(arrB + (i - SIZEA));
//		}
//	}
//	for (int i = 0; i < (SIZEA + SIZEB); i++) {
//		cout << "Array C [" << i << "] = " << *(arrC + i) << endl;
//	}
//
//	cout << "----------------------------------" << endl;
//	delete[] arrC;
//	system("Pause");
//
//	// Task #2 ����� �������� ���� ������i�;
//
//	int k = 0;
//	for (int i = 0; i < SIZEA; i++) {
//
//		for (int j = 0; j < SIZEB; j++) {
//
//			if (*(arrA + i) == *(arrB + j)) {
//				k++;
//			}
//		}
//	}
//	cout << "\nArrays have " << k << " equal values" << endl;
//	arrC = new int[k];
//
//	for (int i = 0, n = 0; i < SIZEA; i++) {
//
//		for (int j = 0; j < SIZEB; j++) {
//
//			if (*(arrA + i) == *(arrB + j)) {
//				*(arrC + n) = *(arrA + i);
//				n++;
//			}
//		}
//	}
//	cout << "The same values of array A and array B are:\n\n";
//	printArr(arrC, k);
//	cout << "------------------------------------" << endl;
//	delete[] arrC;
//	system("Pause");
//
//	// Task # 3 �������� ������ A, �� �� ������������ � B;
//
//	k = 0;
//	for (int i = 0; i < SIZEA; i++) {
//		bool flag = false;
//
//		for (int j = 0; j < SIZEB; j++) {
//
//			if (*(arrA + i) == *(arrB + j)) {
//				flag = true;
//			}
//		}
//
//		if (!flag) {
//			k++;
//		}
//	}
//	cout << "\nThe array A has " << k << " different values from array B." << endl;
//	arrC = new int[k];
//
//	for (int i = 0, n = 0; i < SIZEA; i++) {
//		bool flag = false;
//
//		for (int j = 0; j < SIZEB; j++) {
//
//			if (*(arrA + i) == *(arrB + j)) {
//				flag = true;
//			}
//		}
//
//		if (!flag) {
//			*(arrC + n) = *(arrA + i);
//			n++;
//		}
//	}
//	cout << "The values of array A which aren't in array B are:\n\n";
//	printArr(arrC, k);
//	cout << "------------------------------------" << endl;
//	delete[] arrC;
//	system("Pause");
//
//	// Task # 4 �������� ������ �, �� �� ������������ � �;
//
//	int l = 0;
//	for (int i = 0; i < SIZEB; i++) {
//		bool flag = false;
//
//		for (int j = 0; j < SIZEA; j++) {
//
//			if (*(arrB + i) == *(arrA + j)) {
//				flag = true;
//			}
//		}
//
//		if (!flag) {
//			l++;
//		}
//	}
//	cout << "\nThe array B has " << l << " different values from array A." << endl;
//	arrC = new int[l];
//
//	for (int i = 0, n = 0; i < SIZEB; i++) {
//		bool flag = false;
//
//		for (int j = 0; j < SIZEA; j++) {
//
//			if (*(arrB + i) == *(arrA + j)) {
//				flag = true;
//			}
//		}
//
//		if (!flag) {
//			*(arrC + n) = *(arrB + i);
//			n++;
//		}
//	}
//	cout << "The values of array B which aren't in array A are:\n\n";
//	printArr(arrC, l);
//	cout << "------------------------------------" << endl;
//	delete[] arrC;
//	system("Pause");
//
//	// Task #5 �������� ������ A � B, �� �� � �������� ��� ���(����� �ᒺ������ ���������� ���� �������� ����������).
//
//	arrC = new int[k + l];
//	cout << "\nThe count of elements of arrays A and array B that aren't common to them are: " << k + l << endl;
//
//	for (int i = 0, n = 0; i < SIZEA; i++) {
//		bool flagA = false;
//		for (int j = 0; j < SIZEB; j++) {
//			if (*(arrA + i) == *(arrB + j)) {
//				flagA = true;
//			}
//			if (flagA) {
//				break;
//			}
//		}
//		if (!flagA) {
//			*(arrC + n) = *(arrA + i);
//			n++;
//		}
//	}
//
//	for (int i = 0, n = k; i < SIZEB; i++) {
//		bool flagB = false;
//		for (int j = 0; j < SIZEA; j++) {
//			if (*(arrB + i) == *(arrA + j)) {
//				flagB = true;
//			}
//			if (flagB) {
//				break;
//			}
//		}
//		if (!flagB) {
//			*(arrC + n) = *(arrB + i);
//			n++;
//		}
//	}
//
//	cout << "The values of array A and array B that aren't common to them are:\n\n";
//	printArr(arrC, (k + l));
//	cout << "------------------------------------" << endl;
//
//	delete[] arrC;
//	arrC = nullptr;
//	system("Pause");
//}
//
//
//void printArr(int* arrC , int size) {
//	for (int i = 0; i < size; i++) {
//		cout << *(arrC + i) << "\t" << arrC + i << endl;
//	}
//}