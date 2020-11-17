//#include<iostream>
//#include<math.h>
//#include "ctime"
//using namespace std;
//
//void main()
//{
//	int TotalScore = 0, MyScore = 0, OppScore = 0, MyFirstCube = 0, MySecondCube = 0,
//		OppFirstCube = 0, OppSecondCube = 0, MySum = 0, OppSum = 0, DoubleCube = 3, j = 0, Timer = 2000000;
//
//	srand(unsigned(time(NULL)));
//	cout << "\n\t\t\t      ------- Welcome to the game \"Dice\"  -------" << endl;
//	cout << "\n\t\t\t\t   ------- Enter total score -------" << endl;                //Початкове меню
//	cin >> TotalScore;
//	cout << "\n\t\t\t\t     -------- Good luck!!! --------\n\n" << endl;
//
//	while (MyScore < TotalScore && OppScore < TotalScore)
//	{
//		cout << "  *  *  *  *  *\t\t  *  *  *  *  * \t\t\t*  *  *  *  *  \t\t*  *  *  *  *  " << endl;
//		cout << "  *           *\t\t  *           *\t\t\t\t*           *\t\t*           *" << endl;
//		cout << "  *     ";
//		while (j < Timer)
//		{
//			cout << "";                                                        // Затримка виведення кубіка
//			j++;
//		}j = 0;
//		MyFirstCube = rand() % 6 + 1;                                        //Генерація кубика
//		cout << MyFirstCube << "     *\t\t  *     ";                         //Виведення випавшої цифри
//		while (j < Timer)
//		{
//			cout << "";
//			j++;
//		}j = 0;
//		MySecondCube = rand() % 6 + 1;
//		cout << MySecondCube << "     *\t\t\t\t*     ";
//		while (j < Timer * 2)
//		{
//			cout << "";
//			j++;
//		}j = 0;
//		OppFirstCube = rand() % 6 + 1;
//		cout << OppFirstCube << "     *\t\t*     ";
//		while (j < Timer)
//		{
//			cout << "";
//			j++;
//		}j = 0;
//		OppSecondCube = rand() % 6 + 1;
//		cout << OppSecondCube << "     *" << endl;
//		while (j < Timer)
//		{
//			cout << "";
//			j++;
//		}j = 0;
//		cout << "  *           *\t\t  *           *\t\t\t\t*           *\t\t*           *" << endl;
//		cout << "  *  *  *  *  *\t\t  *  *  *  *  *\t\t\t\t*  *  *  *  *  \t\t*  *  *  *  *\n" << endl;
//
//		MySum = MyFirstCube + MySecondCube;
//		OppSum = OppFirstCube + OppSecondCube;
//
//		if (MyFirstCube == MySecondCube && MySum > OppSum)
//		{
//			MyScore += DoubleCube;
//			cout << "\t\t\t\t    ------- You get 1 point -------\n\t\t       ------- God's blessing, :) you get 2 extra points -------" << endl;
//		}
//		else if (OppFirstCube == OppSecondCube && OppSum > MySum)
//		{
//			OppScore += DoubleCube;
//			cout << "\t\t\t\t ------- Opponent gets 1 point -------\n\t\t   ------- Luck has left you, :( opponent gets 2 extra points -------" << endl;
//		}
//		else if (MyFirstCube == MySecondCube && MySum == OppSum && MyFirstCube != OppFirstCube && OppSecondCube != MySecondCube)
//		{
//			MyScore += DoubleCube - 1;
//			cout << "\t\t       ------- You get 2 points as you have double dice -------" << endl;
//		}
//		else if (OppFirstCube == OppSecondCube && OppSum == MySum && MyFirstCube != OppFirstCube && OppSecondCube != MySecondCube)
//		{
//			OppScore += DoubleCube - 1;
//			cout << "\t\t   ------- Your opponent gets 2 points as he has double dice -------" << endl;
//		}
//		else if (MySum == OppSum || MyFirstCube == OppFirstCube && MySecondCube == OppSecondCube)
//		{
//			MyScore += 0;
//			OppScore += 0;
//			cout << "\t\t    ------- Ouch! You and your opponent have the same dice...-------\n\t\t\t\t      ------- Try again! -------" << endl;
//		}
//		else if (MySum == OppSum && MyFirstCube == MySecondCube == OppFirstCube == OppSecondCube)
//		{
//			MyScore += 0;
//			OppScore += 0;
//			cout << "\t\t    ------- Ouch! You and your opponent have the same dice...-------\n\t\t\t\t      ------- Try again! -------" << endl;
//		}
//		else if (MySum > OppSum)
//		{
//			MyScore++;
//			cout << "\t\t\t\t    ------- You get 1 point -------" << endl;
//		}
//		else
//		{
//			OppScore++;
//			cout << "\t\t\t\t ------- Opponent gets 1 point -------" << endl;
//		}
//		cout << "   ...............\t\t\t\t\t\t\t\t      ...............\n  : Your score " << MyScore << "  :";
//		cout << "\t\t\t\t\t\t\t\t     : Comp score " << OppScore << "  :" << " \n   ...............";
//		cout << "\t\t\t\t\t\t\t\t      ..............." << endl;
//
//		if (MyScore >= TotalScore)
//		{
//			cout << "\n\n\t    ***   ***     ***      ***   ***        ***     ***     ***    ***      ***   ***" << endl;
//			cout << "\t     *** ***    *** ***    ***   ***         ***   *****   ***   *** ***    ****  ***" << endl;
//			cout << "\t       ***     ***   ***   ***   ***          *** *** *** ***   ***   ***   *** * ***" << endl;
//			cout << "\t       ***      *** ***    ***   ***           *****   *****     *** ***    ***  ****" << endl;
//			cout << "\t       ***        ***       *******             ***     ***        ***      ***   ***" << endl;
//
//		}
//		else if (OppScore >= TotalScore)
//		{
//			cout << "\n\n\t    ***   ***     ***      ***   ***         ***         ***      ******    *********" << endl;
//			cout << "\t     *** ***    *** ***    ***   ***         ***       *** ***   ***           ***" << endl;
//			cout << "\t       ***     ***   ***   ***   ***         ***      ***   ***   ******       ***" << endl;
//			cout << "\t       ***      *** ***    ***   ***         ***       *** ***        ***      ***" << endl;
//			cout << "\t       ***        ***       *******          *********   ***      ******       ***" << endl;
//		}
//		cout << endl;
//		system("pause");
//		cout << endl;
//	}
//}
//         