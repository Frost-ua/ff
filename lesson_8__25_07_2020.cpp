//#include<iostream>
//#include<math.h>
//#include "ctime"
//#include "iomanip"
//using namespace std;
//                                                 ==================== ������������ ������ ======================






//void main()
//{
//	srand(unsigned(time(NULL)));

	//const int ROW = 5;
	//const int COLUMN = 10;
	//int arr[ROW][COLUMN];

	//for (int i = 0; i < ROW; i++)
	//{
	//	for (int j = 0; j < COLUMN; j++)           // ���������� ����������� ������� ���������� �������
	//	{                                          //����. 1-� - �������� � ������� ������� ROW 
	//		arr[i][j] = rand() % 10;               //��������� ���� - �������� j ������� ������� COLUMN 
	//	}
	//}


	//for (int i = 0; i < ROW; i++)                  //���������� ������� �������� ������� ����� �������
	//{
	//	for (int j = 0; j < COLUMN; j++)
	//	{
	//		cout << setw(5) << arr[i][j];
	//	}
	//	cout << endl;
	//}

	//int max, pos_i, pos_j;

	//for (int i = 0; i < ROW; i++)
	//{
	//		max = arr[i][0];
	//		pos_i = 0;
	//		pos_j = 0;

	//	for (int j = 0; j < COLUMN; j++)
	//	{
	//		if (arr[i][j] > max)
	//		{
	//			max = arr[i][j];
	//			pos_i = i;
	//			pos_j = j;
	//		}
	//	}
	//	cout << i + 1 << " " << max << " Position (" << pos_i << ":" << pos_j << ")" << endl;
	//}

	//�������� ������� �������:



	/*1    2    ...    10
		11    12    ...    20
		...    ...    ...    ...
		91    92    ...    100*/

		//	const int ROW = 10;
		//	const int COLUMN = 10;
		//	int arr[ROW][COLUMN];
		//	int a = 1;
		//
		//	for (int i = 0; i < ROW; i++)
		//	{
		//		for (int j = 0; j < COLUMN; j++)           
		//		{                                          
		//			arr[i][j] = a;
		//			a++;
		//		}
		//	}
		//
		//	for (int i = 0; i < ROW; i++)                  
		//	{
		//		for (int j = 0; j < COLUMN; j++)
		//		{
		//			cout << setw(5) << arr[i][j];
		//		}
		//		cout << endl;
		//	}
		//
		//	system("pause");
		//
		//}


			////����� ����������� ����� ��������� 5X4. �������� ���� ����������� ������� �� ��������� -20.. 20:
			//������� ����� �� ����� �� ������� ������� ��������, �������� ���� ���� ����.
			//	������� ������ ����������� �������� ������� �����.
			//	������� ����������� �� �������� �������� �������.
			//	������� �� ����� �������� ��������� ������������ ����� � ��������� ������������ �������.



//	const int ROW = 5;
//	const int COLUMN = 4;
//	int arr[ROW][COLUMN];
//	int count = 0, avg1 = 0, sum = 0;
//	double avg[ROW]{};
//
//	for (int i = 0; i < ROW; i++)
//	{
//		sum = 0;
//		for (int j = 0; j < COLUMN; j++)           
//		{                                          
//			arr[i][j] = rand() % 40 - 20;  
//		}
//
//	}
//	
//	for (int i = 0; i < ROW; i++)                  
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			cout << setw(5) << arr[i][j];
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < ROW; i++)
//	{
//		sum = 0;
//		for (int j = 0; j < COLUMN; j++)
//		{
//			
//			if (arr[i][j] == 0)
//			{
//				count++;
//			}
//			sum += arr[i][j];
//			
//		}
//		avg[i] = (double)sum/ (double)COLUMN;
//
//		cout << "AVG " << i << "= " << avg[i] << endl;
//	}
//
//	cout << "\n" << "Amount of zero is " << count << endl << endl;
//
//	int max, min, pos_i, pos_j;
//
//	for (int i = 0; i < ROW; i++)
//	{
//		max = arr[i][0];
//		pos_i = 0;
//		pos_j = 0;
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				pos_i = i;
//				pos_j = j;
//			}
//		}
//		cout << i + 1 << " " << max << " Position (" << pos_i << ":" << pos_j << ")" << endl;
//	}
//	cout << endl;
//
//	for (int i = 0; i < ROW; i++)
//	{
//		min = arr[i][0];
//		pos_i = 0;
//		pos_j = 0;
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			if (arr[i][j] < min)
//			{
//				min = arr[i][j];
//				pos_i = i;
//				pos_j = j;
//			}
//		}
//		cout << i + 1 << " " << min << " Position (" << pos_i << ":" << pos_j << ")" << endl;
//	}
//	int user_row, user_col;
//	cin >> user_row;
//	cout << endl;
//	
//	for (int i = 0; i < COLUMN; i++)
//	{
//		if (user_row < 0 || user_row > ROW)
//		{
//			cout << "Error";
//			break;
//		}
//		cout << setw(5) << arr[user_row - 1][i];
//	}
//	
//	cout << endl;
//	cin >> user_col;
//	cout << endl;
//	for (int i = 0; i < ROW; i++)
//	{
//		if (user_col < 0 || user_col > COLUMN)
//		{
//			cout << "Error";
//			break;
//		}
//		cout << setw(5) << arr[i][user_col-1];
//	}
//}




//�������� ���������, ������� ������� ���������� ������ � ��������� ��� �� ���������� ��������:
//������������ ������ �����(��������, 3) ������ �������
//������� ��������� �������� ����� �����, ����������� ������� ������� ��������� �������� ����� �����
//����������� �� 2 (�.�. 6 ��� ������ �������), ������
//������� ������� ���������� ������� ���������� ��
//2 (�.�. 6 * 2 = 12 ��� ������ �������).��������� ������
//������� �� �����.

//void main()
//{
//	srand(unsigned(time(NULL)));
//
//	const int ROW = 5;
//	const int COLUMN = 4;
//	int arr[ROW][COLUMN]{};
//	int user_num = 0, tmp = 0;
//
//	cin >> user_num;
//	arr[0][0] = user_num;
//	tmp = user_num;
//	for (int i = 0; i < ROW; i++)
//	{
//		
//		for (int j = 1; j < COLUMN; j++)
//		{
//			arr[i][j] = tmp*2;
//			tmp = arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//		cout << setw(10) << arr[i][j];
//		}
//	cout << endl;
//	}
//}





//��������� ����� M �� N.���������� ���������� ����������.������� k.�� �������� � ��������� k ������ ���������� � 10 ����



//void main()
//{
//	srand(unsigned(time(NULL)));
//
//	const int ROW = 5;
//	const int COLUMN = 4;
//	int arr[ROW][COLUMN]{};
//	int user_col = 0;
//
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			arr[i][j] = rand() % 50;
//		}
//	}
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			cout << setw(10) << arr[i][j];
//		}
//		cout << endl;
//	}
//
//	cout << endl;
//	cin >> user_col;
//	cout << endl;
//	for (int i = 0; i < ROW; i++)
//	{
//		if (user_col < 0 || user_col > COLUMN)
//		{
//			cout << "Error";
//			break;
//		}
//		cout << setw(5) << (arr[i][user_col - 1])*10;
//	}
//
//}



//��������� ����� M �� N.���������� ���������� ���������� � �������.������� �� �������� � ������ �����.If �� ���������������



//void main()
//{
//	srand(unsigned(time(NULL)));
//
//	const int ROW = 10;
//	const int COLUMN = 4;
//	int arr[ROW][COLUMN]{};
//	int user_col = 0;
//
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			arr[i][j] = rand() % 50;
//		}
//	}
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			cout << setw(10) << arr[i][j];
//		}
//		cout << endl;
//	}
//
//	cout << "=========================================" << endl;
//
//	for (int i = 2; i < ROW; i += 2)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			cout << setw(10) << arr[i][j];
//		}
//		cout << endl;
//	}
//}


//�������� ���������� ����� ��������� ������. ��������� ���������� ����������. 
//������� ������ ����, �� ������ ��������� � ������������ ��������


//void main()
//{
//	srand(unsigned(time(NULL)));
//
//	const int ROW = 5;
//	const int COLUMN = 4;
//	int arr[ROW][COLUMN]{};
//	int user_col = 0;
//	int max, min, pos_i = 0, pos_j=0, pos_i1=0, pos_j1=0;
//
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			arr[i][j] = rand() % 50;
//		}
//	}
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			cout << setw(10) << arr[i][j];
//		}
//		cout << endl;
//	}
//
//	max = arr[0][0];
//	for (int i = 0; i < ROW; i++)
//	{
//		for (int j = 0; j < COLUMN; j++)
//		{
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				pos_i = i;
//				pos_j = j;
//			}
//		}
//		
//	}
//	cout << " " << max << " Position (" << pos_i << ":" << pos_j << ")" << endl;
//
//
//min = arr[0][0];
//for (int i = 0; i < ROW; i++)
//{
//	for (int j = 0; j < COLUMN; j++)
//	{
//		if (arr[i][j] < min)
//		{
//			min = arr[i][j];
//			pos_i1 = i;
//			pos_j1 = j;
//		}
//	}
//
//}
//cout << " " << min << " Position (" << pos_i1 << ":" << pos_j1 << ")" << endl;
//
//cout << "===========================" << endl;
//
//for (int i = 0; i < COLUMN; i++)
//{
//	swap(arr[pos_i][i], arr[pos_i1][i]);
//}
//
//for (int i = 0; i < ROW; i++)
//{
//
//	for (int j = 0; j < COLUMN; j++)
//	{
//		cout << setw(10) << arr[i][j];
//	}
//	cout << endl;
//}
//
//
//}


//�������� ���������� �����. ��������� ���������� �������. ������ ������ ����������� ��������� �������




//
//i == j � ������� ���������;
//i > j � ������� ��� ������� ����������;
//i < j � ������� ��� ������� ����������;
//N � ���������� ����� ��� �������� i + j == N � 1 � �������� ���������;
//i + j > N � 1 � ������� ��� �������� ����������;
//i + j < N � 1 � ������� ��� �������� ����������;



//void main()
//{
//	srand(unsigned(time(NULL)));
//
//	const int ROW = 3;
//	const int COLUMN = 3;
//	int arr[ROW][COLUMN]{};
//	int user_col = 0;
//	int sum_main_diag = 0, sum_side_diag = 0, avg_main_diag = 0, avg_side_diag = 0;
//
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			arr[i][j] = rand() % 50;
//		}
//	}
//
//	for (int i = 0; i < ROW; i++)
//			{
//		
//				for (int j = 0; j < COLUMN; j++)
//				{
//					cout << setw(10) << arr[i][j];
//				}
//				cout << endl;
//			}
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			if (i == j) 
//			{
//				sum_main_diag += arr[i][j];
//			}
//		}
//	}
//	avg_main_diag = sum_main_diag / ROW;
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			if (i + j == ROW - 1)
//			{
//				sum_side_diag += arr[i][j];
//			}
//		}
//	}
//	avg_side_diag = (double)sum_side_diag / ROW;
//
//	cout << "AVG of main diagonal - " << avg_main_diag << endl;
//	cout << "AVG of side diagonal - " << avg_side_diag << endl;
//
//	
//
//
//}



//�������� ���������� ����� ��������� ������.��������� ���������� ����������.
//������� ����� ���������� �����, �� � ����� ���� ��������, ���� ������ ���� - �� ����.


//void main()
//{
//	srand(unsigned(time(NULL)));
//
//	const int ROW = 3;
//	const int COLUMN = 3;
//	int arr[ROW][COLUMN]{};
//	int pos_i = 0;
//	bool flag = false;
//	
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			arr[i][j] = rand() % 50;
//		}
//	}
//
//	for (int i = 0; i < ROW; i++)
//	{
//
//		for (int j = 0; j < COLUMN; j++)
//		{
//			cout << setw(10) << arr[i][j];
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < ROW; i++)
//	{
//		flag = false;
//		for (int j = 0; j < COLUMN; j++)
//		{
//			if (arr[i][j] % 2 == 0)
//			{
//				flag = true;
//				
//			}
//			else
//			{
//				flag = false;
//				break;
//			}
//		}
//
//		if (flag == true)
//		{
//			pos_i = i;
//		}
//	}
//		cout << pos_i;
//}
//                                                                         ������ ���������

//void main()
//{
//	srand(unsigned(time(NULL)));
//	int const m = 3, n = 3;
//	int arr[m][n] =
//	{
//		{1,2,3},
//		{2,2,2},
//		{3,2,2}
//	};
//	bool flag = false;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			//arr[i][j] = rand() % 10;
//			cout << setw(10) << arr[i][j];
//		}
//		cout << endl;
//	}
//	int pos = 0;
//	for (int i = 0; i < m; i++)
//	{
//		flag = false;
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[i][j] % 2 == 0)
//			{
//				flag = true;
//			}
//			else
//			{
//				flag = false;
//				break;
//
//			}
//		}
//		if (flag == true)
//		{
//			pos = i;
//		}
//
//	}
//	cout << pos << endl;
//}