#include<iostream>
#include<math.h>
#include "ctime"
#include "iomanip"
#include <conio.h>
#include <windows.h>



// key "h" - cheats - show comp map.   

// There are some bugs:
//1. - Some user's ships cannot be placed near the field boundary
//2. - If the user's ship is near the border and it is destroyed, the aureole is not displayed correctly

//1. Write a check for each ship when it is near the border
//2. Write a check, if the ship is destroyed near the border it does not display the all aureole

//I have an idea to improve the game.
//Randomly, gold and wood appear on the map.
//If the user has collected a certain amount of resources, he can improve the ship :
//-shot at several cells;
//-armor for the ship;
//-make a window to purchase improvements;

using namespace std;

const int N = 10;
int first_x = 0;
int first_y = 0;
bool hit = false;
bool is_vertical_ship = false;
bool is_horizontal_ship = false;
bool aureole_four_deck_ship = false;
bool aureole_three_deck_ship = false;
bool aureole_double_deck_ship = false;
bool game_over = false;
char o = 0, p = 0, o1 = 0, p1 = 0, o2 = 0, p2 = 0, o3 = 0, p3 = 0;
char m = 0, n = 0, m1 = 0, n1 = 0, m2 = 0, n2 = 0, m3 = 0, n3 = 0, m4 = 0, n4 = 0, m5 = 0, n5 = 0;
char c = 0, d = 0, c1 = 0, d1 = 0, c2 = 0, d2 = 0, c3 = 0, d3 = 0, c4 = 0, d4 = 0, c5 = 0, d5 = 0;
char default_symbol = ' ', comp_symbol = 254, user_symbol = 254, sight_symbol = '+', destroyed_symbol = 'X', miss_symbol = '.', temp_miss_symbol = 'o';    // Settings interface

char single_deck_ship_comp[4][2]{}, double_deck_ship_comp[6][2]{}, three_deck_ship_comp[6][2]{},four_deck_ship_comp[4][2]{};
char single_deck_ship_user[4][2]{}, double_deck_ship_user[6][2]{}, three_deck_ship_user[6][2]{}, four_deck_ship_user[4][2]{};
char user_map[N][N]{}, comp_map[N][N]{}, letters[N]{}, mask_user_map[N][N]{}, mask_comp_map[N][N]{}, copy_mask_comp_map[N][N]{};;

bool empty_map = true;
int counter_comp = 0;					// for comp matrix to write coordinates
int counter_user = 0;					// for user matrix to write coordinates

bool single_deck_ship_comp_dead = false;
bool second_single_deck_ship_comp_dead = false;
bool third_single_deck_ship_comp_dead = false;
bool fouth_single_deck_ship_comp_dead = false;
bool double_deck_ship_comp_dead = false;
bool second_double_deck_ship_comp_dead = false;
bool third_double_deck_ship_comp_dead = false;
bool three_deck_ship_comp_dead = false;
bool second_three_deck_ship_comp_dead = false;
bool four_deck_ship_comp_dead = false;

bool single_deck_ship_user_dead = false;
bool second_single_deck_ship_user_dead = false;
bool third_single_deck_ship_user_dead = false;
bool fouth_single_deck_ship_user_dead = false;
bool double_deck_ship_user_dead = false;
bool second_double_deck_ship_user_dead = false;
bool third_double_deck_ship_user_dead = false;
bool three_deck_ship_user_dead = false;
bool second_three_deck_ship_user_dead = false;
bool four_deck_ship_user_dead = false;

bool is_single_deck_ship_user = false;
bool is_double_deck_ship_user = false;
bool is_three_deck_ship_user = false;
bool is_four_deck_ship_user = false;

bool is_single_deck_ship_comp = false;
bool is_double_deck_ship_comp = false;
bool is_three_deck_ship_comp = false;
bool is_four_deck_ship_comp = false;

void loader();
void print_letters();
void print_map(char user_map[N][N], char comp_map[N][N]);
void fill_default_map(char map[N][N]);
void make_comp_ship(int size_ship, int count_ship);
void make_user_ship(int size_ship, int count_ship);
void user_shoot(int size_ship, int count_ship);
void comp_shoot(int size_ship, int count_ship);

void main() {
	srand(unsigned int(time(NULL)));

	fill_default_map(user_map);
	fill_default_map(comp_map);
	fill_default_map(mask_user_map);
	fill_default_map(mask_comp_map);
	loader();

	for (int i = 4, j = 1; (i > 0 && j <= 4); i--, j++) {			 //create comp ships  ---  i - size of a ship; j - count of ships 
		make_comp_ship(i, j);
	}

	print_map(user_map, mask_comp_map);
	cout << "Place your ships! Use the keys \"w\", \"s\", \"a\", \"d\" to move the ship.\nUse key \"r\" to rotate your ship.\nTo put the ship, press \"Enter\"\n\n\n" << endl;
	system("Pause");
	system("cls");

	for (int i = 4, j = 1; (i > 0 && j <= 4); i--, j++){			 //create user ships  ---  i - size of a ship; j - count of ships 
		make_user_ship(i, j);
	}

	fill_default_map(mask_comp_map);
	fill_default_map(copy_mask_comp_map);
	mask_comp_map[0][0] = sight_symbol;
	print_map(user_map, mask_comp_map);
	cout << "\nYou can move the sight \"+\" with keys \"w\", \"s\", \"a\", \"d\".\ntWhen the sight is in place, press \"Enter\" to shoot.\n\n\n";
	system("Pause");
	system("cls");

	while (!game_over)
	{
		user_shoot(4, 1);                                // User soot
		
		if (game_over)                                  // Check game over
		{
			break;
		}

		comp_shoot(4, 1);                                // Comp soot

		system("cls");
	}
}

void print_letters() {
	for (int i = 0, j = 65; i < N; i++, j++)
	{
		cout << "  " << letters[i];
	}
}

void print_map(char user_map[N][N], char comp_map[N][N]) {
	int k = 0;

	for (int i = 0, j = 65; i < N; i++, j++) {
		letters[i] = j;
	}

	cout << "\n\n\n\t      ";
	print_letters();
	cout << "\t\t\t\t  ";
	print_letters();
	cout << "\t\n\t      --------------------------------\t\t\t\t  --------------------------------\n";

	for (int i = 0; i < N; i++, k++)
	{
		cout << "\t    " << k << "|";
		for (int j = 0; j < N; j++)
		{
			cout << "  " << user_map[i][j];

		}
		cout << "  |" << k;
		cout << "\t\t\t";
		cout << k << "|";

		for (int j = 0; j < N; j++)
		{
			cout << "  " << comp_map[i][j];
		}

		cout << "  |" << k;
		cout << endl;
	}
	cout << "\t      --------------------------------\t\t\t\t  --------------------------------\n\t      ";
	print_letters();
	cout << "\t\t\t\t  ";
	print_letters();
	cout << "\n\n\n";
}

void fill_default_map(char map[N][N]) {

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			map[i][j] = default_symbol;
		}
	}
}

void make_comp_ship(int size_ship, int count_ship) {

	int x = 0, y = 0, tmp_x = 0, tmp_y = 0, direction = 0, counter = 0;
	bool place_is_possible = true;

	while (counter < count_ship)
	{
		direction = rand() % 4;
		x = rand() % N;
		y = rand() % N;
		tmp_x = x;
		tmp_y = y;

		for (int i = 0; i < size_ship; i++)
		{
			place_is_possible = true;
			if (x < 0 || x >= N || y < 0 || y >= N)
			{
				place_is_possible = false;
				break;
			}
			if (comp_map[x][y] == comp_symbol ||
				comp_map[x][y + 1] == comp_symbol ||
				comp_map[x][y - 1] == comp_symbol ||
				comp_map[x + 1][y] == comp_symbol ||
				comp_map[x + 1][y + 1] == comp_symbol ||
				comp_map[x + 1][y - 1] == comp_symbol ||
				comp_map[x - 1][y] == comp_symbol ||
				comp_map[x - 1][y + 1] == comp_symbol ||
				comp_map[x - 1][y - 1] == comp_symbol)
			{
				place_is_possible = false;
				break;
			}

			switch (direction)
			{
			case 0: {
				x++;
				break;
			}
			case 1: {
				y++;
				break;
			}
			case 2: {
				x--;
				break;
			}
			case 3: {
				y--;
				break;
			}
			}
		}

		x = tmp_x;
		y = tmp_y;

		if (place_is_possible)
		{
			for (int i = 0, j = 0; i < size_ship; i++)
			{
				comp_map[x][y] = comp_symbol;

				if (size_ship == 4)
				{
					four_deck_ship_comp[counter_comp][j] = x;             // Created a new matrix, where wrote all coordinates of the four deck ship, to check the complete destruction of the ship
					four_deck_ship_comp[counter_comp][j + 1] = y;
					j = 0;
					(counter_comp)++;
					if (counter_comp == 4)
					{
						counter_comp = 0;
					}
				}
				if (size_ship == 3)
				{
					three_deck_ship_comp[counter_comp][j] = x;            // All coordinates of three deck ships
					three_deck_ship_comp[counter_comp][j + 1] = y;
					j = 0;
					(counter_comp)++;
					if (counter_comp == 6)
					{
						counter_comp = 0;
					}
				}
				if (size_ship == 2)
				{
					double_deck_ship_comp[counter_comp][j] = x;                      // All coordinates of double deck ships
					double_deck_ship_comp[counter_comp][j + 1] = y;
					j = 0;
					(counter_comp)++;
					if (counter_comp == 6)
					{
						counter_comp = 0;
					}
				}
				if (size_ship == 1)
				{
					single_deck_ship_comp[counter_comp][j] = x;                      // All coordinates of single deck ships
					single_deck_ship_comp[counter_comp][j + 1] = y;
					j = 0;
					(counter_comp)++;
					if (counter_comp == 4)
					{
						counter_comp = 0;
					}
				}

				switch (direction)
				{
				case 0: {
					x++;
					break;
				}
				case 1: {
					y++;
					break;
				}
				case 2: {
					x--;
					break;
				}
				case 3: {
					y--;
					break;
				}
				}
			}

			counter++;
		}
	}
}

void make_user_ship(int size_ship, int count_ship) {

	int x = 0, y = 0, existing_ships = 0;
	int tmp_x = 0, tmp_y = 0;
	bool direction = true, is_ship = false;
	bool location = true;

	while (existing_ships != count_ship)
	{
		x = tmp_x;
		y = tmp_y;

		for (int i = 0; i < size_ship; i++)
		{
			user_map[x][y] = user_symbol;
			switch (direction) {
			case 0: {
				x++;
				break;
			}
			case 1: {
				y++;
				break;
			}
			}
		}
		print_map(user_map, mask_comp_map);

		switch (_getch())
		{
		case 'w': {
			tmp_x--;

			if (direction && size_ship != 1)
			{
				if ((tmp_x < 0) ||
					(user_map[tmp_x][tmp_y] == user_symbol) ||
					(user_map[tmp_x][tmp_y + (size_ship - 1)] == user_symbol) ||
					(user_map[tmp_x][tmp_y + (size_ship - (size_ship - 1))] == user_symbol))
				{
					tmp_x = tmp_x + 1;
				}
			}
			else
			{
				if ((tmp_x < 0) ||
					(user_map[tmp_x][tmp_y] == user_symbol))
				{
					tmp_x = tmp_x + 1;
				}
			}
			break;
		}

		case 's': {
			tmp_x++;

			if (direction && size_ship != 1)
			{
				if ((tmp_x + size_ship) >= (N + size_ship) ||
					(user_map[tmp_x][tmp_y] == user_symbol) ||
					(user_map[tmp_x][tmp_y + (size_ship - 1)] == user_symbol) ||
					(user_map[tmp_x][tmp_y + 1] == user_symbol))
				{
					tmp_x = tmp_x - 1;
				}
			}
			else
			{
				if ((tmp_x + size_ship) >= (N + 1) ||
					(user_map[tmp_x + (size_ship - 1)][tmp_y] == user_symbol))
				{
					tmp_x = tmp_x - 1;

				}
			}

			break;
		}
		case 'a': {
			tmp_y--;

			if (!direction)
			{

				if (tmp_y < 0 || user_map[tmp_x][tmp_y] == user_symbol ||
					user_map[tmp_x + (size_ship - 2)][tmp_y] == user_symbol ||
					user_map[tmp_x + (size_ship - 1)][tmp_y] == user_symbol)
				{
					tmp_y = tmp_y + 1;
				}
			}
			else
			{
				if (tmp_y < 0 || user_map[tmp_x][tmp_y] == user_symbol)
				{
					tmp_y = tmp_y + 1;

				}
			}
			break;
		}
		case 'd': {
			tmp_y++;

			if (direction)
			{
				if ((tmp_y + size_ship) >= (N + 1) || user_map[tmp_x][tmp_y + (size_ship - 1)] == user_symbol)
				{
					tmp_y = tmp_y - 1;

				}
			}
			if (!direction)
			{
				if ((tmp_y + size_ship) >= (N + size_ship) ||
					user_map[tmp_x][tmp_y] == user_symbol ||
					user_map[tmp_x + (size_ship - 2)][tmp_y] == user_symbol ||
					user_map[tmp_x + (size_ship - 1)][tmp_y] == user_symbol)
				{
					tmp_y = tmp_y - 1;
				}
			}

			break;
		}
		case 'r': {

			if ((tmp_y + size_ship > N) || (tmp_x + size_ship > N))
			{
				cout << " ";
			}
			else {
				direction = !direction;
			}
			break;
		}
		case 13: {

			if (empty_map)
			{
				fill_default_map(mask_user_map);
			}

			if ((direction && user_map[tmp_x][tmp_y - 1] == user_symbol) ||
				(direction && user_map[tmp_x][tmp_y + size_ship] == user_symbol) ||
				(direction && user_map[tmp_x - 1][tmp_y] == user_symbol) ||
				(direction && user_map[tmp_x - 1][tmp_y + (size_ship - 2)] == user_symbol) ||
				(direction && user_map[tmp_x - 1][tmp_y + (size_ship - 1)] == user_symbol) ||
				(direction && user_map[tmp_x + 1][tmp_y] == user_symbol) ||
				(direction && user_map[tmp_x + 1][tmp_y - (size_ship - 2)] == user_symbol) ||
				(direction && user_map[tmp_x + 1][tmp_y + (size_ship - 1)] == user_symbol) ||
				(direction && user_map[tmp_x - 1][tmp_y - 1] == user_symbol) ||
				(direction && user_map[tmp_x - 1][tmp_y + size_ship] == user_symbol) ||
				(direction && user_map[tmp_x + 1][tmp_y - 1] == user_symbol) ||
				(direction && user_map[tmp_x + 1][tmp_y + size_ship] == user_symbol))
			{
				//cout << "You can't place the ship here";
				//system("Pause");
			}

			else if ((!direction && user_map[tmp_x - 1][tmp_y] == user_symbol) ||
				(!direction && user_map[tmp_x + size_ship][tmp_y] == user_symbol) ||
				(!direction && user_map[tmp_x + (size_ship - 2)][tmp_y + 1] == user_symbol) ||
				(!direction && user_map[tmp_x + (size_ship - 2)][tmp_y - 1] == user_symbol) ||
				(!direction && user_map[tmp_x][tmp_y + 1] == user_symbol) ||
				(!direction && user_map[tmp_x][tmp_y - 1] == user_symbol) ||
				(!direction && user_map[tmp_x + (size_ship - 1)][tmp_y + 1] == user_symbol) ||
				(!direction && user_map[tmp_x + (size_ship - 1)][tmp_y - 1] == user_symbol) ||
				(!direction && user_map[tmp_x - 1][tmp_y - 1] == user_symbol) ||
				(!direction && user_map[tmp_x - 1][tmp_y + 1] == user_symbol) ||
				(!direction && user_map[tmp_x + size_ship][tmp_y - 1] == user_symbol) ||
				(!direction && user_map[tmp_x + size_ship][tmp_y + 1] == user_symbol))
			{
				//cout << "You can't place the ship here";
				//system("Pause");
			}
			else
			{
				for (int i = 0, j = 0; i < size_ship; i++)
				{
					mask_user_map[tmp_x][tmp_y] = user_symbol;

					if (size_ship == 4)
					{
						four_deck_ship_user[counter_user][j] = tmp_x;             // Created a new matrix, where wrote all coordinates of the four deck ship, to check the complete destruction of the ship
						four_deck_ship_user[counter_user][j + 1] = tmp_y;
						j = 0;
						(counter_user)++;
						if (counter_user == 4)
						{
							counter_user = 0;
						}
					}

					if (size_ship == 3)
					{
						three_deck_ship_user[counter_user][j] = tmp_x;             // All coordinates of three deck ships
						three_deck_ship_user[counter_user][j + 1] = tmp_y;
						j = 0;
						(counter_user)++;
						if (counter_user == 6)
						{
							counter_user = 0;
						}
					}

					if (size_ship == 2)
					{
						double_deck_ship_user[counter_user][j] = tmp_x;             // All coordinates of double deck ships
						double_deck_ship_user[counter_user][j + 1] = tmp_y;
						j = 0;
						(counter_user)++;
						if (counter_user == 6)
						{
							counter_user = 0;
						}
					}

					if (size_ship == 1)
					{
						single_deck_ship_user[counter_user][j] = tmp_x;             // All coordinates of single deck ships
						single_deck_ship_user[counter_user][j + 1] = tmp_y;
						j = 0;
						(counter_user)++;
						if (counter_user == 4)
						{
							counter_user = 0;
						}
					}


					switch (direction) {
					case 0: {
						tmp_x++;
						break;
					}
					case 1: {
						tmp_y++;
						break;
					}
					}
				}

				is_ship = true;
				empty_map = false;
				existing_ships++;
				tmp_x = 0;
				tmp_y = 0;
			}
			break;
		}
		}

		if (empty_map)
		{
			fill_default_map(user_map);
		}
		else
		{
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					user_map[i][j] = mask_user_map[i][j];
				}
			}
		}

		system("cls");

		if (existing_ships == count_ship && size_ship == 1)
		{
			print_map(user_map, mask_comp_map);
			cout << "\nThe opponent has placed his ships very close and is ready at any moment to strike.\nAre you ready to battle? Only one will survive!!!\n\n\n";
			system("Pause");
			system("cls");
		}
	}
}

void user_shoot(int size_ship, int count_ship)
{
	int x = 0, y = 0;
	int tmp_x = 0, tmp_y = 0;
	bool miss = false;
	system("cls");

	while (true)
	{
		mask_comp_map[x][y] = sight_symbol;
		print_map(user_map, mask_comp_map);
		switch (_getch()) {
		case 'w': {
			x--;

			if (x < 0)
			{
				x = x + 1;
			}

			break;
		}
		case 's': {
			x++;

			if (x >= N)
			{
				x = x - 1;
			}

			break;
		}
		case 'a': {
			y--;

			if (y < 0)
			{
				y = y + 1;
			}

			break;
		}
		case 'd': {
			y++;

			if (y >= N)
			{
				y = y - 1;
			}

			break;
		}
		case 'h': {                                     // Cheats - show comp map)
			
			system("cls");
			print_map(user_map, comp_map);
			cout << "YOU ARE CHEATER!!!\n\n\n";
			system("Pause");

			break;
		}
		case 13: {

			if (comp_map[x][y] == comp_symbol || comp_map[x][y] == destroyed_symbol)
			{


				if (copy_mask_comp_map[x][y] == comp_symbol)
				{
					cout << "You have already crashed this deck!!!\n\n\n";
					system("Pause");
					break;
				}
				else
				{
					system("cls");
				}

				mask_comp_map[x][y] = comp_symbol;
				comp_map[x][y] = destroyed_symbol;

				for (int i = 0; i < N; i++)
				{
					for (int j = 0; j < N; j++)
					{
						copy_mask_comp_map[i][j] = mask_comp_map[i][j];
					}
				}
				print_map(user_map, mask_comp_map);
				cout << "Hit!!!We hit the deck of an enemy ship\n\n\n";

				bool is_four_deck_ship_comp = false;
				bool is_three_deck_ship_comp = false;
				bool is_double_deck_ship_comp = false;
				bool is_single_deck_ship_comp = false;

				while (!four_deck_ship_comp_dead)													// Check dead four deck ship
				{
					int count_dead_deck = 0;
					
					for (int i = 0, j = 0; i < 4; i++)
					{
						if (four_deck_ship_comp[i][j] == x && four_deck_ship_comp[i][j + 1] == y)
						{
							is_four_deck_ship_comp = true;
						}

						if (is_four_deck_ship_comp)
						{
							four_deck_ship_comp[i][j] = '-';
							four_deck_ship_comp[i][j + 1] = '-';
							break;
						}
					}

					if (!is_four_deck_ship_comp)
					{
						break;
					}

					for (int i = 0, j = 0; i < 4; i++)
					{
						if (four_deck_ship_comp[i][j] == '-' && four_deck_ship_comp[i][j + 1 == '-'])
						{
							count_dead_deck++;
						}
						if (count_dead_deck == 4)
						{
							four_deck_ship_comp_dead = true;
						}
					}

					if (four_deck_ship_comp_dead)
					{
						system("cls");
						print_map(user_map, mask_comp_map);
						cout << "The four-deck enemy ship is destroyed!\n\n\n";
						break;
					}
					else
					{
						break;
					}
				}

				if (!is_four_deck_ship_comp)
				{
					while (!three_deck_ship_comp_dead || !second_three_deck_ship_comp_dead)								// Check dead three deck ship
					{
						int count_dead_deck_first_ship = 0;
						int count_dead_deck_second_ship = 0;

						for (int i = 0, j = 0; i < 6; i++)
						{
							if (three_deck_ship_comp[i][j] == x && three_deck_ship_comp[i][j + 1] == y)
							{
								is_three_deck_ship_comp = true;
							}

							if (is_three_deck_ship_comp)
							{
								three_deck_ship_comp[i][j] = '-';
								three_deck_ship_comp[i][j + 1] = '-';
								break;
							}
						}

						if (!is_three_deck_ship_comp)
						{
							break;
						}

						if (!three_deck_ship_comp_dead)
						{
							for (int i = 0, j = 0; i < 3; i++)
							{
								if (three_deck_ship_comp[i][j] == '-' && three_deck_ship_comp[i][j + 1] == '-')
								{
									count_dead_deck_first_ship++;
								}
							}
						}

						if (!second_three_deck_ship_comp_dead)
						{
							for (int i = 3, j = 0; i < 6; i++)
							{
								if (three_deck_ship_comp[i][j] == '-' && three_deck_ship_comp[i][j + 1] == '-')
								{
									count_dead_deck_second_ship++;
								}
							}
						}

						if (count_dead_deck_first_ship == 3 && !three_deck_ship_comp_dead)
						{
							three_deck_ship_comp_dead = true;
							cout << "The three-deck enemy ship is destroyed!\n\n\n";
						}

						if (count_dead_deck_second_ship == 3 && !second_three_deck_ship_comp_dead)
						{
							second_three_deck_ship_comp_dead = true;
							cout << "The three-deck enemy ship is destroyed!\n\n\n";
						}
						if (three_deck_ship_comp_dead && second_three_deck_ship_comp_dead)
						{
							cout << "All three-deck enemy ships are destroyed!\n\n\n";
							break;
						}
						else
						{
							break;
						}
					}
				}

				if (!is_three_deck_ship_comp && !is_four_deck_ship_comp)
				{
					while (!double_deck_ship_comp_dead || !second_double_deck_ship_comp_dead || !third_double_deck_ship_comp_dead)			// Check dead double deck ship
					{
						int count_dead_deck_first_ship = 0;
						int count_dead_deck_second_ship = 0;
						int count_dead_deck_third_ship = 0;

						for (int i = 0, j = 0; i < 6; i++)
						{
							if (double_deck_ship_comp[i][j] == x && double_deck_ship_comp[i][j + 1] == y)
							{
								is_double_deck_ship_comp = true;
							}

							if (is_double_deck_ship_comp)
							{
								double_deck_ship_comp[i][j] = '-';
								double_deck_ship_comp[i][j + 1] = '-';
								break;
							}
						}

						if (!is_double_deck_ship_comp)
						{
							break;
						}

						if (!double_deck_ship_comp_dead)
						{
							for (int i = 0, j = 0; i < 2; i++)
							{
								if (double_deck_ship_comp[i][j] == '-' && double_deck_ship_comp[i][j + 1] == '-')
								{
									count_dead_deck_first_ship++;
								}
							}
						}

						if (!second_double_deck_ship_comp_dead)
						{
							for (int i = 2, j = 0; i < 4; i++)
							{
								if (double_deck_ship_comp[i][j] == '-' && double_deck_ship_comp[i][j + 1] == '-')
								{
									count_dead_deck_second_ship++;
								}
							}
						}

						if (!third_double_deck_ship_comp_dead)
						{
							for (int i = 4, j = 0; i < 6; i++)
							{
								if (double_deck_ship_comp[i][j] == '-' && double_deck_ship_comp[i][j + 1] == '-')
								{
									count_dead_deck_third_ship++;
								}
							}
						}

						if (count_dead_deck_first_ship == 2 && !double_deck_ship_comp_dead)
						{
							double_deck_ship_comp_dead = true;
							cout << "The double-deck enemy ship is destroyed!\n\n\n";
						}

						if (count_dead_deck_second_ship == 2 && !second_double_deck_ship_comp_dead)
						{
							second_double_deck_ship_comp_dead = true;
							cout << "The double-deck enemy ship is destroyed!\n\n\n";
						}

						if (count_dead_deck_third_ship == 2 && !third_double_deck_ship_comp_dead)
						{
							third_double_deck_ship_comp_dead = true;
							cout << "The double-deck enemy ship is destroyed!\n\n\n";
						}
						
						if (double_deck_ship_comp_dead && second_double_deck_ship_comp_dead && third_double_deck_ship_comp_dead)
						{
							cout << "All double-deck enemy ships are destroyed!\n\n\n";
							break;
						}
						else
						{
							break;
						}
					}
				}


				if (!is_four_deck_ship_comp && !is_three_deck_ship_comp && !is_double_deck_ship_comp)
				{
					if (!single_deck_ship_comp_dead || !second_single_deck_ship_comp_dead || !third_single_deck_ship_comp_dead || !fouth_single_deck_ship_comp_dead)
					{																													// Check dead single deck ship
						for (int i = 0, j = 0; i < 4; i++)
						{
							if (single_deck_ship_comp[i][j] == x && single_deck_ship_comp[i][j + 1] == y)
							{
								is_single_deck_ship_comp = true;
							}

							if (is_single_deck_ship_comp)
							{
								single_deck_ship_comp[i][j] = '-';
								single_deck_ship_comp[i][j + 1] = '-';
								break;
							}
						}

						if (!single_deck_ship_comp_dead)
						{
							int i = 0, j = 0;

							if (single_deck_ship_comp[i][j] == '-' && single_deck_ship_comp[i][j + 1] == '-')
							{
								single_deck_ship_comp_dead = true;
								cout << "We destroyed a single-deck enemy ship!\n\n\n";
							}
						}

						if (!second_single_deck_ship_comp_dead)
						{
							int i = 1, j = 0;

							if (single_deck_ship_comp[i][j] == '-' && single_deck_ship_comp[i][j + 1] == '-')
							{
								second_single_deck_ship_comp_dead = true;
								cout << "We destroyed a single-deck enemy ship!\n\n\n";
							}
						}

						if (!third_single_deck_ship_comp_dead)
						{
							int i = 2, j = 0;

							if (single_deck_ship_comp[i][j] == '-' && single_deck_ship_comp[i][j + 1] == '-')
							{
								third_single_deck_ship_comp_dead = true;
								cout << "We destroyed a single-deck enemy ship!\n\n\n";
							}
						}

						if (!fouth_single_deck_ship_comp_dead)
						{
							int i = 3, j = 0;

							if (single_deck_ship_comp[i][j] == '-' && single_deck_ship_comp[i][j + 1] == '-')
							{
								fouth_single_deck_ship_comp_dead = true;
								cout << "We destroyed a single-deck enemy ship!\n\n\n";
							}
						}

						if (single_deck_ship_comp_dead && second_single_deck_ship_comp_dead && third_single_deck_ship_comp_dead && fouth_single_deck_ship_comp_dead)
						{
							cout << "All single-deck enemy ships are destroyed!\n\n\n";
							system("Pause");
							break;
						}
					}
				}

				system("Pause");
			}
			else
			{
				system("cls");
				mask_comp_map[x][y] = temp_miss_symbol;
				miss = true;
				print_map(user_map, mask_comp_map);
				cout << "You miss!!!\n\n";
				mask_comp_map[x][y] = miss_symbol;

				for (int i = 0; i < N; i++)
				{
					for (int j = 0; j < N; j++)
					{
						copy_mask_comp_map[i][j] = mask_comp_map[i][j];
					}
				}
				system("Pause");
			}
		}
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				mask_comp_map[i][j] = copy_mask_comp_map[i][j];
			}
		}

		system("cls");

		if (four_deck_ship_comp_dead && three_deck_ship_comp_dead && second_three_deck_ship_comp_dead && double_deck_ship_comp_dead && second_double_deck_ship_comp_dead && third_double_deck_ship_comp_dead && single_deck_ship_comp_dead && second_single_deck_ship_comp_dead && third_single_deck_ship_comp_dead && fouth_single_deck_ship_comp_dead)
		{
			/*for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					comp_map[i][j] = mask_comp_map[i][j];
				}
			}*/

			game_over = true;
			print_map(user_map, comp_map);
			cout << "GAME OVER!!!\nIt was a difficult battle. But we won. Cheers!!!!\n";
			cout << "Thanks for game. It's just a game!\n\n\n";
			system("Pause");
			break;
		}

		if (miss)
		{
			break;
		}
	}

}

void comp_shoot(int size_ship, int count_ship)
{
	srand(unsigned int(time(NULL)));
	int x = 0, y = 0;
	int tmp_x = 0, tmp_y = 0;
	bool flag_hit = false;
	int shot_direction = 0;
	x = first_x;
	y = first_y;

	while (true)
	{
		if (!hit)
		{
			x = rand() % N;
			y = rand() % N;

			if (user_map[x][y] == user_symbol)
			{
				hit = true;
				user_map[x][y] = destroyed_symbol;
				first_x = x;
				first_y = y;

				bool is_four_deck_ship_user = false;
				bool is_three_deck_ship_user = false;
				bool is_double_deck_ship_user = false;
				bool is_single_deck_ship_user = false;

				is_vertical_ship = false;
				is_horizontal_ship = false;

				while (!four_deck_ship_user_dead)													// Check dead four deck ship
				{
					int count_dead_deck = 0;

					for (int i = 0, j = 0; i < 4; i++)
					{
						if (four_deck_ship_user[i][j] == x && four_deck_ship_user[i][j + 1] == y)
						{
							is_four_deck_ship_user = true;
						}

						if (is_four_deck_ship_user)
						{
							if (!aureole_four_deck_ship)                                   // show aureole
							{
								o = four_deck_ship_user[0][0];
								p = four_deck_ship_user[0][1];
								o1 = four_deck_ship_user[1][0];
								p1 = four_deck_ship_user[1][1];
								o2 = four_deck_ship_user[2][0];
								p2 = four_deck_ship_user[2][1];
								o3 = four_deck_ship_user[3][0];
								p3 = four_deck_ship_user[3][1];

								aureole_four_deck_ship = true;
							}

							four_deck_ship_user[i][j] = '-';
							four_deck_ship_user[i][j + 1] = '-';
							flag_hit = false;
							break;
						}
					}

					if (!is_four_deck_ship_user)
					{
						break;
					}

					if (four_deck_ship_user_dead)
					{
						system("cls");
						print_map(user_map, mask_comp_map);
						cout << "Captain, our four deck ship is sunk.\n\n\n";
						x = 0;
						y = 0;
						//break;
					}
					else
					{
						break;
					}
				}

				if (!is_four_deck_ship_user)
				{
					while (!three_deck_ship_user_dead || !second_three_deck_ship_user_dead)								// Check dead three deck ship
					{
						int count_dead_deck_first_ship = 0;
						int count_dead_deck_second_ship = 0;

						for (int i = 0, j = 0; i < 6; i++)
						{
							if (three_deck_ship_user[i][j] == x && three_deck_ship_user[i][j + 1] == y)
							{
								is_three_deck_ship_user = true;
							}

							if (is_three_deck_ship_user)
							{
								if (!aureole_three_deck_ship)                                  // show aureole
								{
									m = three_deck_ship_user[0][0];
									n = three_deck_ship_user[0][1];
									m1 = three_deck_ship_user[1][0];
									n1 = three_deck_ship_user[1][1];
									m2 = three_deck_ship_user[2][0];
									n2 = three_deck_ship_user[2][1];
									m3 = three_deck_ship_user[3][0];
									n3 = three_deck_ship_user[3][1];
									m4 = three_deck_ship_user[4][0];
									n4 = three_deck_ship_user[4][1];
									m5 = three_deck_ship_user[5][0];
									n5 = three_deck_ship_user[5][1];

									aureole_three_deck_ship = true;
								}

								three_deck_ship_user[i][j] = '-';
								three_deck_ship_user[i][j + 1] = '-';
								flag_hit = false;
								break;
							}
						}

						if (!is_three_deck_ship_user)
						{
							break;
						}

						if (!three_deck_ship_user_dead)
						{
							for (int i = 0, j = 0; i < 3; i++)
							{
								if (three_deck_ship_user[i][j] == '-' && three_deck_ship_user[i][j + 1] == '-')
								{
									count_dead_deck_first_ship++;
								}
							}
						}

						if (!second_three_deck_ship_user_dead)
						{
							for (int i = 3, j = 0; i < 6; i++)
							{
								if (three_deck_ship_user[i][j] == '-' && three_deck_ship_user[i][j + 1] == '-')
								{
									count_dead_deck_second_ship++;
								}
							}
						}

						if (count_dead_deck_first_ship == 3 && !three_deck_ship_user_dead)
						{
							three_deck_ship_user_dead = true;
							hit = false;
							first_x = 0;
							first_y = 0;
						}

						if (count_dead_deck_second_ship == 3 && !second_three_deck_ship_user_dead)
						{
							second_three_deck_ship_user_dead = true;
							hit = false;
							first_x = 0;
							first_y = 0;
						}

						if (three_deck_ship_user_dead && second_three_deck_ship_user_dead)
						{
							cout << "Captain, all our three-deck ships are sunk. Luck isn't on our side.\n\n\n";
							//break;
						}
						else
						{
							break;
						}
					}
				}


				if (!is_three_deck_ship_user && !is_four_deck_ship_user)
				{
					while (!double_deck_ship_user_dead || !second_double_deck_ship_user_dead || !third_double_deck_ship_user_dead)			// Check dead double deck ship
					{
						int count_dead_deck_first_ship = 0;
						int count_dead_deck_second_ship = 0;
						int count_dead_deck_third_ship = 0;

						for (int i = 0, j = 0; i < 6; i++)
						{
							if (double_deck_ship_user[i][j] == x && double_deck_ship_user[i][j + 1] == y)
							{
								is_double_deck_ship_user = true;
							}

							if (is_double_deck_ship_user)
							{
								if (!aureole_double_deck_ship)                                             // show aureole
								{
									c = double_deck_ship_user[0][0];
									d = double_deck_ship_user[0][1];
									c1 = double_deck_ship_user[1][0];
									d1 = double_deck_ship_user[1][1];
									c2 = double_deck_ship_user[2][0];
									d2 = double_deck_ship_user[2][1];
									c3 = double_deck_ship_user[3][0];
									d3 = double_deck_ship_user[3][1];
									c4 = double_deck_ship_user[4][0];
									d4 = double_deck_ship_user[4][1];
									c5 = double_deck_ship_user[5][0];
									d5 = double_deck_ship_user[5][1];

									aureole_double_deck_ship = true;
								}

								double_deck_ship_user[i][j] = '-';
								double_deck_ship_user[i][j + 1] = '-';
								flag_hit = false;
								break;
							}
						}

						if (!is_double_deck_ship_user)
						{
							break;
						}

						if (!double_deck_ship_user_dead)
						{
							for (int i = 0, j = 0; i < 2; i++)
							{
								if (double_deck_ship_user[i][j] == '-' && double_deck_ship_user[i][j + 1] == '-')
								{
									count_dead_deck_first_ship++;
								}
							}
						}

						if (!second_double_deck_ship_user_dead)
						{
							for (int i = 2, j = 0; i < 4; i++)
							{
								if (double_deck_ship_user[i][j] == '-' && double_deck_ship_user[i][j + 1] == '-')
								{
									count_dead_deck_second_ship++;
								}
							}
						}

						if (!third_double_deck_ship_user_dead)
						{
							for (int i = 4, j = 0; i < 6; i++)
							{
								if (double_deck_ship_user[i][j] == '-' && double_deck_ship_user[i][j + 1] == '-')
								{
									count_dead_deck_third_ship++;
								}
							}
						}

						if (count_dead_deck_first_ship == 2 && !double_deck_ship_user_dead)
						{
							double_deck_ship_user_dead = true;
							hit = false;
							first_x = 0;
							first_y = 0;
						}

						if (count_dead_deck_second_ship == 2 && !second_double_deck_ship_user_dead)
						{
							second_double_deck_ship_user_dead = true;
							hit = false;
							first_x = 0;
							first_y = 0;
						}

						if (count_dead_deck_third_ship == 2 && !third_double_deck_ship_user_dead)
						{
							third_double_deck_ship_user_dead = true;
							hit = false;
							first_x = 0;
							first_y = 0;
						}
						
						if (double_deck_ship_user_dead && second_double_deck_ship_user_dead && third_double_deck_ship_user_dead)
						{
							cout << "Captain, all our double-deck ships are sunk. Luck isn't on our side.\n\n\n";
							//break;
						}
						else
						{
							break;
						}
					}
				}


				if (!is_four_deck_ship_user && !is_three_deck_ship_user && !is_double_deck_ship_user)
				{
					if (!single_deck_ship_user_dead || !second_single_deck_ship_user_dead || !third_single_deck_ship_user_dead || !fouth_single_deck_ship_user_dead)
					{																					// Check dead single deck ship
						char a = 0, b = 0, a1 = 0, b1 = 0, a2 = 0, b2 = 0, a3 = 0, b3 = 0;
						int count_dead_deck_first_ship = 0;
						int count_dead_deck_second_ship = 0;
						int count_dead_deck_third_ship = 0;

						for (int i = 0, j = 0; i < 4; i++)
						{
							if (single_deck_ship_user[i][j] == x && single_deck_ship_user[i][j + 1] == y)
							{
								is_single_deck_ship_user = true;
							}

							if (is_single_deck_ship_user)                                                   // show aureole
							{
								a = single_deck_ship_user[0][0];
								b = single_deck_ship_user[0][1];
								a1 = single_deck_ship_user[1][0];
								b1 = single_deck_ship_user[1][1];
								a2 = single_deck_ship_user[2][0];
								b2 = single_deck_ship_user[2][1];
								a3 = single_deck_ship_user[3][0];
								b3 = single_deck_ship_user[3][1];

								single_deck_ship_user[i][j] = '-';
								single_deck_ship_user[i][j + 1] = '-';
								break;
							}
						}

						if (!single_deck_ship_user_dead)
						{
							int i = 0, j = 0;

							if (single_deck_ship_user[i][j] == '-' && single_deck_ship_user[i][j + 1] == '-')
							{
								single_deck_ship_user_dead = true;

								user_map[a - 1][b] = miss_symbol;                                         // show aureole
								user_map[a + 1][b] = miss_symbol;
								user_map[a][b - 1] = miss_symbol;
								user_map[a][b + 1] = miss_symbol;
								user_map[a - 1][b - 1] = miss_symbol;
								user_map[a - 1][b + 1] = miss_symbol;
								user_map[a + 1][b - 1] = miss_symbol;
								user_map[a + 1][b + 1] = miss_symbol;

								print_map(user_map, mask_comp_map);
								cout << "Captain, our single-deck ship is sunk.\n\n\n";
								system("Pause");
								system("cls");
								hit = false;
								flag_hit = true;
								first_x = 0;
								first_y = 0;
							}
						}

						if (!second_single_deck_ship_user_dead)
						{
							int i = 1, j = 0;

							if (single_deck_ship_user[i][j] == '-' && single_deck_ship_user[i][j + 1] == '-')
							{
								second_single_deck_ship_user_dead = true;

								user_map[a1 - 1][b1] = miss_symbol;                                                // show aureole
								user_map[a1 + 1][b1] = miss_symbol;
								user_map[a1][b1 - 1] = miss_symbol;
								user_map[a1][b1 + 1] = miss_symbol;
								user_map[a1 - 1][b1 - 1] = miss_symbol;
								user_map[a1 - 1][b1 + 1] = miss_symbol;
								user_map[a1 + 1][b1 - 1] = miss_symbol;
								user_map[a1 + 1][b1 + 1] = miss_symbol;

								print_map(user_map, mask_comp_map);
								cout << "Captain, our single-deck ship is sunk.\n\n\n";
								system("Pause");
								system("cls");
								flag_hit = true;
								hit = false;
								first_x = 0;
								first_y = 0;
							}
						}

						if (!third_single_deck_ship_user_dead)
						{
							int i = 2, j = 0;

							if (single_deck_ship_user[i][j] == '-' && single_deck_ship_user[i][j + 1] == '-')
							{
								third_single_deck_ship_user_dead = true;

								user_map[a2 - 1][b2] = miss_symbol;                                             // show aureole
								user_map[a2 + 1][b2] = miss_symbol;
								user_map[a2][b2 - 1] = miss_symbol;
								user_map[a2][b2 + 1] = miss_symbol;
								user_map[a2 - 1][b2 - 1] = miss_symbol;
								user_map[a2 - 1][b2 + 1] = miss_symbol;
								user_map[a2 + 1][b2 - 1] = miss_symbol;
								user_map[a2 + 1][b2 + 1] = miss_symbol;

								print_map(user_map, mask_comp_map);
								cout << "Captain, our single-deck ship is sunk.\n\n\n";
								system("Pause");
								system("cls");
								flag_hit = true;
								hit = false;
								first_x = 0;
								first_y = 0;
							}
						}

						if (!fouth_single_deck_ship_user_dead)
						{
							int i = 3, j = 0;

							if (single_deck_ship_user[i][j] == '-' && single_deck_ship_user[i][j + 1] == '-')
							{
								fouth_single_deck_ship_user_dead = true;

								user_map[a3 - 1][b3] = miss_symbol;                                            // show aureole
								user_map[a3 + 1][b3] = miss_symbol;
								user_map[a3][b3 - 1] = miss_symbol;
								user_map[a3][b3 + 1] = miss_symbol;
								user_map[a3 - 1][b3 - 1] = miss_symbol;
								user_map[a3 - 1][b3 + 1] = miss_symbol;
								user_map[a3 + 1][b3 - 1] = miss_symbol;
								user_map[a3 + 1][b3 + 1] = miss_symbol;

								print_map(user_map, mask_comp_map);
								cout << "Captain, our single-deck ship is sunk.\n\n\n";
								system("Pause");
								system("cls");
								hit = false;
								flag_hit = true;
								first_x = 0;
								first_y = 0;
							}
						}
						if (single_deck_ship_user_dead && second_single_deck_ship_user_dead && third_single_deck_ship_user_dead && fouth_single_deck_ship_user_dead)
						{
							print_map(user_map, mask_comp_map);
							cout << "Captain, all our single-deck ships are sunk. Luck isn't on our side.\n\n\n";
							system("Pause");
							system("cls");
							//break;
						}
					}
				}

				if (user_map[x][y] == destroyed_symbol && !flag_hit)
				{
					system("cls");
					print_map(user_map, mask_comp_map);
					cout << "Opponent hit!\n\n";
					system("Pause");
					system("cls");
					flag_hit = false;
				}
			}

			if (user_map[x][y] == default_symbol)
			{
				user_map[x][y] = temp_miss_symbol;
				system("cls");
				print_map(user_map, mask_comp_map);
				user_map[x][y] = miss_symbol;
				cout << "Opponent miss!!!\n\n";
				system("Pause");
				system("cls");
				break;
			}
		}

		if (four_deck_ship_user_dead && three_deck_ship_user_dead && second_three_deck_ship_user_dead && double_deck_ship_user_dead && second_double_deck_ship_user_dead && third_double_deck_ship_user_dead && single_deck_ship_user_dead && second_single_deck_ship_user_dead && third_single_deck_ship_user_dead && fouth_single_deck_ship_user_dead)
		{
			game_over = true;
			print_map(user_map, comp_map);
			cout << "GAME OVER!!!\nLuck wasn't on our side. We lost.\n";
			cout << "Thanks for game. It's just a game!\n\n\n";
			system("Pause");
			break;
		}

		else if (hit)
		{
			shot_direction = rand() % 4;

			if (is_vertical_ship)
			{
				shot_direction = rand() % 2;
			}
			if (is_horizontal_ship)
			{
				shot_direction = rand() % 2 + 2;
			}

			if (shot_direction == 0)
			{
				if (x > 0)
				{
					x--;
				}
				else
				{
					x = first_x + 1;
				}
				if ((user_map[x][y] == miss_symbol) || (user_map[x][y] == destroyed_symbol))
				{
					x = first_x;
					shot_direction = rand() % 2;

					if (user_map[x][y] == destroyed_symbol && user_map[x + 2][y] == destroyed_symbol)
					{
						x = first_x + 2;
					}
					if (user_map[x][y] == destroyed_symbol && user_map[x + 1][y] == destroyed_symbol)
					{
						x = first_x + 1;
					}
					continue;
				}
			}

			if (shot_direction == 1)
			{
				if (x < (N - 1))
				{
					x++;
				}
				else
				{
					x = first_x - 1;
				}

				if ((user_map[x][y] == miss_symbol) || (user_map[x][y] == destroyed_symbol))
				{
					x = first_x;
					shot_direction = rand() % 2;

					if (user_map[x][y] == destroyed_symbol && user_map[x - 2][y] == destroyed_symbol)
					{
						x = first_x - 2;
					}
					if (user_map[x][y] == destroyed_symbol && user_map[x - 1][y] == destroyed_symbol)
					{
						x = first_x - 1;
					}
					continue;
				}
			}

			if (shot_direction == 2)
			{
				if (y > 0)
				{
					y--;
				}
				else
				{
					y = first_y + 1;
				}
				if ((user_map[x][y] == miss_symbol) || (user_map[x][y] == destroyed_symbol))
				{
					y = first_y;
					shot_direction = rand() % 2 + 2;

					if (user_map[x][y] == destroyed_symbol && user_map[x][y + 2] == destroyed_symbol)
					{
						y = first_y + 2;
					}
					if (user_map[x][y] == destroyed_symbol && user_map[x][y + 1] == destroyed_symbol)
					{
						y = first_y + 1;
					}
					continue;
				}
			}

			if (shot_direction == 3)
			{
				if (y < (N - 1))
				{
					y++;
				}
				else
				{
					y = first_y - 1;
				}
				if ((user_map[x][y] == miss_symbol) || (user_map[x][y] == destroyed_symbol))
				{
					y = first_y;
					shot_direction = rand() % 2 + 2;

					if (user_map[x][y] == destroyed_symbol && user_map[x][y - 2] == destroyed_symbol)
					{
						y = first_y - 2;
					}
					if (user_map[x][y] == destroyed_symbol && user_map[x][y - 1] == destroyed_symbol)
					{
						y = first_y - 1;
					}
					continue;
				}
			}


			if (user_map[x][y] == user_symbol && shot_direction == 0 || user_map[x][y] == user_symbol && shot_direction == 1)
			{
				is_vertical_ship = true;

			}
			if (user_map[x][y] == user_symbol && shot_direction == 2 || user_map[x][y] == user_symbol && shot_direction == 3)
			{
				is_horizontal_ship = true;

			}

			if (user_map[x][y] == user_symbol)
			{
				user_map[x][y] = destroyed_symbol;

				bool is_four_deck_ship_user = false;
				bool is_three_deck_ship_user = false;
				bool is_double_deck_ship_user = false;
				bool is_single_deck_ship_user = false;

				while (!four_deck_ship_user_dead)													// Check dead four deck ship
				{
					int count_dead_deck = 0;
					for (int i = 0, j = 0; i < 4; i++)
					{
						if (four_deck_ship_user[i][j] == x && four_deck_ship_user[i][j + 1] == y)
						{
							is_four_deck_ship_user = true;
						}

						if (is_four_deck_ship_user)
						{
							four_deck_ship_user[i][j] = '-';
							four_deck_ship_user[i][j + 1] = '-';
							break;
						}
					}

					if (!is_four_deck_ship_user)
					{
						break;
					}

					for (int i = 0, j = 0; i < 4; i++)
					{
						if (four_deck_ship_user[i][j] == '-' && four_deck_ship_user[i][j + 1 == '-'])
						{
							count_dead_deck++;
						}
						if (count_dead_deck == 4)
						{
							four_deck_ship_user_dead = true;
						}
					}

					if (four_deck_ship_user_dead)
					{
						system("cls");

						if (is_horizontal_ship)
						{
							user_map[o - 1][p - 1] = miss_symbol;                                            // show aureole
							user_map[o - 1][p] = miss_symbol;
							user_map[o1 - 1][p1] = miss_symbol;
							user_map[o2 - 1][p2] = miss_symbol;
							user_map[o3 - 1][p3] = miss_symbol;
							user_map[o3 - 1][p3 + 1] = miss_symbol;
							user_map[o3][p3 + 1] = miss_symbol;
							user_map[o3 + 1][p3 + 1] = miss_symbol;
							user_map[o3 + 1][p3] = miss_symbol;
							user_map[o2 + 1][p2] = miss_symbol;
							user_map[o1 + 1][p1] = miss_symbol;
							user_map[o + 1][p] = miss_symbol;
							user_map[o + 1][p - 1] = miss_symbol;
							user_map[o][p - 1] = miss_symbol;
						}

						if (is_vertical_ship)
						{
							user_map[o - 1][p] = miss_symbol;                                        
							user_map[o - 1][p + 1] = miss_symbol;
							user_map[o][p + 1] = miss_symbol;
							user_map[o1][p1 + 1] = miss_symbol;
							user_map[o2][p2 + 1] = miss_symbol;
							user_map[o3][p3 + 1] = miss_symbol;
							user_map[o3 + 1][p3 + 1] = miss_symbol;
							user_map[o3 + 1][p3] = miss_symbol;
							user_map[o3 + 1][p3 - 1] = miss_symbol;
							user_map[o3][p3 - 1] = miss_symbol;
							user_map[o2][p2 - 1] = miss_symbol;
							user_map[o1][p1 - 1] = miss_symbol;
							user_map[o][p - 1] = miss_symbol;
							user_map[o - 1][p - 1] = miss_symbol;
						}

						print_map(user_map, mask_comp_map);
						cout << "Captain, our four deck ship is sunk. Luck isn't on our side.\n\n\n";
						flag_hit = true;
						system("Pause");
						system("cls");
						hit = false;
						first_x = 0;
						first_y = 0;
						//break;
					}
					else
					{
						break;
					}
				}

				if (!is_four_deck_ship_user)
				{
					while (!three_deck_ship_user_dead || !second_three_deck_ship_user_dead)								// Check dead three deck ship
					{
						int count_dead_deck_first_ship = 0;
						int count_dead_deck_second_ship = 0;

						for (int i = 0, j = 0; i < 6; i++)
						{
							if (three_deck_ship_user[i][j] == x && three_deck_ship_user[i][j + 1] == y)
							{
								is_three_deck_ship_user = true;
							}

							if (is_three_deck_ship_user)
							{
								three_deck_ship_user[i][j] = '-';
								three_deck_ship_user[i][j + 1] = '-';
								break;
							}
						}

						if (!is_three_deck_ship_user)
						{
							break;
						}

						if (!three_deck_ship_user_dead)
						{
							for (int i = 0, j = 0; i < 3; i++)
							{
								if (three_deck_ship_user[i][j] == '-' && three_deck_ship_user[i][j + 1] == '-')
								{
									count_dead_deck_first_ship++;
								}
							}
						}

						if (!second_three_deck_ship_user_dead)
						{
							for (int i = 3, j = 0; i < 6; i++)
							{
								if (three_deck_ship_user[i][j] == '-' && three_deck_ship_user[i][j + 1] == '-')
								{
									count_dead_deck_second_ship++;
								}
							}
						}

						if (count_dead_deck_first_ship == 3 && !three_deck_ship_user_dead)
						{
							three_deck_ship_user_dead = true;
							hit = false;
							flag_hit = true;

							if (is_horizontal_ship)
							{
								user_map[m - 1][n] = miss_symbol;                                           // show aureole
								user_map[m1 - 1][n1] = miss_symbol;
								user_map[m2 - 1][n2] = miss_symbol;
								user_map[m2 - 1][n2 + 1] = miss_symbol;
								user_map[m2][n2 + 1] = miss_symbol;
								user_map[m2 + 1][n2 + 1] = miss_symbol;
								user_map[m2 + 1][n2] = miss_symbol;
								user_map[m1 + 1][n1] = miss_symbol;
								user_map[m + 1][n] = miss_symbol;
								user_map[m + 1][n - 1] = miss_symbol;
								user_map[m][n - 1] = miss_symbol;
								user_map[m - 1][n - 1] = miss_symbol;
							}
							if (is_vertical_ship)
							{
								user_map[m][n + 1] = miss_symbol;
								user_map[m1][n1 + 1] = miss_symbol;
								user_map[m2][n2 + 1] = miss_symbol;
								user_map[m2 + 1][n2 + 1] = miss_symbol;
								user_map[m2 + 1][n2] = miss_symbol;
								user_map[m2 + 1][n2 - 1] = miss_symbol;
								user_map[m2][n2 - 1] = miss_symbol;
								user_map[m1][n1 - 1] = miss_symbol;
								user_map[m][n - 1] = miss_symbol;
								user_map[m - 1][n - 1] = miss_symbol;
								user_map[m - 1][n] = miss_symbol;
								user_map[m - 1][n + 1] = miss_symbol;
							}

							print_map(user_map, mask_comp_map);
							cout << "Captain, our three-deck ship is sunk.\n\n\n";
							system("Pause");
							system("cls");
							first_x = 0;
							first_y = 0;
						}

						if (count_dead_deck_second_ship == 3 && !second_three_deck_ship_user_dead)
						{
							second_three_deck_ship_user_dead = true;
							hit = false;
							flag_hit = true;

							if (is_horizontal_ship)
							{
								user_map[m3 - 1][n3] = miss_symbol;                                       // show aureole
								user_map[m4 - 1][n4] = miss_symbol;
								user_map[m5 - 1][n5] = miss_symbol;
								user_map[m5 - 1][n5 + 1] = miss_symbol;
								user_map[m5][n5 + 1] = miss_symbol;
								user_map[m5][n5 + 1] = miss_symbol;
								user_map[m5 + 1][n5] = miss_symbol;
								user_map[m4 + 1][n4] = miss_symbol;
								user_map[m3 + 1][n3] = miss_symbol;
								user_map[m3 + 1][n3 - 1] = miss_symbol;
								user_map[m3][n3 - 1] = miss_symbol;
								user_map[m3 - 1][n3 - 1] = miss_symbol;
							}
							if (is_vertical_ship)
							{
								user_map[m3][n3 + 1] = miss_symbol;                                  
								user_map[m4][n4 + 1] = miss_symbol;
								user_map[m5][n5 + 1] = miss_symbol;
								user_map[m5 + 1][n5 + 1] = miss_symbol;
								user_map[m5 + 1][n5] = miss_symbol;
								user_map[m5 + 1][n5 - 1] = miss_symbol;
								user_map[m5][n5 - 1] = miss_symbol;
								user_map[m4][n4 - 1] = miss_symbol;
								user_map[m3][n3 - 1] = miss_symbol;
								user_map[m3 - 1][n3 - 1] = miss_symbol;
								user_map[m3 - 1][n3] = miss_symbol;
								user_map[m3 - 1][n3 + 1] = miss_symbol;
							}

							print_map(user_map, mask_comp_map);
							cout << "Captain, our three-deck ship is sunk.\n\n\n";
							system("Pause");
							system("cls");
							first_x = 0;
							first_y = 0;
						}

						if (three_deck_ship_user_dead && second_three_deck_ship_user_dead)
						{
							print_map(user_map, mask_comp_map);
							cout << "Captain, all our three-deck ships are sunk.Luck isn't on our side.\n\n\n";
							system("Pause");
							system("cls");
							//break;
						}
						else
						{
							break;
						}
					}
				}


				if (!is_three_deck_ship_user && !is_four_deck_ship_user)
				{
					while (!double_deck_ship_user_dead || !second_double_deck_ship_user_dead || !third_double_deck_ship_user_dead)			// Check dead double deck ship
					{
						int count_dead_deck_first_ship = 0;
						int count_dead_deck_second_ship = 0;
						int count_dead_deck_third_ship = 0;

						for (int i = 0, j = 0; i < 6; i++)
						{
							if (double_deck_ship_user[i][j] == x && double_deck_ship_user[i][j + 1] == y)
							{
								is_double_deck_ship_user = true;
							}

							if (is_double_deck_ship_user)
							{
								double_deck_ship_user[i][j] = '-';
								double_deck_ship_user[i][j + 1] = '-';
								break;
							}
						}

						if (!is_double_deck_ship_user)
						{
							break;
						}

						if (!double_deck_ship_user_dead)
						{
							for (int i = 0, j = 0; i < 2; i++)
							{
								if (double_deck_ship_user[i][j] == '-' && double_deck_ship_user[i][j + 1] == '-')
								{
									count_dead_deck_first_ship++;
								}
							}
						}

						if (!second_double_deck_ship_user_dead)
						{
							for (int i = 2, j = 0; i < 4; i++)
							{
								if (double_deck_ship_user[i][j] == '-' && double_deck_ship_user[i][j + 1] == '-')
								{
									count_dead_deck_second_ship++;
								}
							}
						}

						if (!third_double_deck_ship_user_dead)
						{
							for (int i = 4, j = 0; i < 6; i++)
							{
								if (double_deck_ship_user[i][j] == '-' && double_deck_ship_user[i][j + 1] == '-')
								{
									count_dead_deck_third_ship++;
								}
							}
						}

						if (count_dead_deck_first_ship == 2 && !double_deck_ship_user_dead)
						{
							double_deck_ship_user_dead = true;
							hit = false;
							flag_hit = true;

							if (is_horizontal_ship)
							{
								user_map[c - 1][d] = miss_symbol;
								user_map[c1 - 1][d1] = miss_symbol;
								user_map[c1 - 1][d1 + 1] = miss_symbol;
								user_map[c1][d1 + 1] = miss_symbol;
								user_map[c1 + 1][d1 + 1] = miss_symbol;
								user_map[c1 + 1][d1] = miss_symbol;
								user_map[c + 1][d] = miss_symbol;
								user_map[c + 1][d - 1] = miss_symbol;
								user_map[c][d - 1] = miss_symbol;
								user_map[c - 1][d - 1] = miss_symbol;
							}
							if (is_vertical_ship)
							{
								user_map[c][d + 1] = miss_symbol;
								user_map[c1][d1 + 1] = miss_symbol;
								user_map[c1 + 1][d1 + 1] = miss_symbol;
								user_map[c1 + 1][d1] = miss_symbol;
								user_map[c1 + 1][d1 - 1] = miss_symbol;
								user_map[c1][d1 - 1] = miss_symbol;
								user_map[c][d - 1] = miss_symbol;
								user_map[c - 1][d - 1] = miss_symbol;
								user_map[c - 1][d] = miss_symbol;
								user_map[c - 1][d + 1] = miss_symbol;
							}

							print_map(user_map, mask_comp_map);
							cout << "Captain, our double-deck ship is sunk.\n\n\n";
							system("Pause");
							system("cls");
							first_x = 0;
							first_y = 0;
						}

						if (count_dead_deck_second_ship == 2 && !second_double_deck_ship_user_dead)
						{
							second_double_deck_ship_user_dead = true;
							hit = false;
							flag_hit = true;

							if (is_horizontal_ship)
							{
								user_map[c2 - 1][d2] = miss_symbol;
								user_map[c3 - 1][d3] = miss_symbol;
								user_map[c3 - 1][d3 + 1] = miss_symbol;
								user_map[c3][d3 + 1] = miss_symbol;
								user_map[c3 + 1][d3 + 1] = miss_symbol;
								user_map[c3 + 1][d3] = miss_symbol;
								user_map[c2 + 1][d2] = miss_symbol;
								user_map[c2 + 1][d2 - 1] = miss_symbol;
								user_map[c2][d2 - 1] = miss_symbol;
								user_map[c2 - 1][d2 - 1] = miss_symbol;
							}
							if (is_vertical_ship)
							{
								user_map[c2][d2 + 1] = miss_symbol;
								user_map[c3][d3 + 1] = miss_symbol;
								user_map[c3 + 1][d3 + 1] = miss_symbol;
								user_map[c3 + 1][d3] = miss_symbol;
								user_map[c3 + 1][d3 - 1] = miss_symbol;
								user_map[c3][d3 - 1] = miss_symbol;
								user_map[c2][d2 - 1] = miss_symbol;
								user_map[c2 - 1][d2 - 1] = miss_symbol;
								user_map[c2 - 1][d2] = miss_symbol;
								user_map[c2 - 1][d2 + 1] = miss_symbol;
							}

							print_map(user_map, mask_comp_map);
							cout << "Captain, our double-deck ship is sunk.\n\n\n";
							system("Pause");
							system("cls");
							first_x = 0;
							first_y = 0;
						}

						if (count_dead_deck_third_ship == 2 && !third_double_deck_ship_user_dead)
						{
							third_double_deck_ship_user_dead = true;
							hit = false;
							flag_hit = true;

							if (is_horizontal_ship)
							{
								user_map[c4 - 1][d4] = miss_symbol;
								user_map[c5 - 1][d5] = miss_symbol;
								user_map[c5 - 1][d5 + 1] = miss_symbol;
								user_map[c5][d5 + 1] = miss_symbol;
								user_map[c5 + 1][d5 + 1] = miss_symbol;
								user_map[c5 + 1][d5] = miss_symbol;
								user_map[c4 + 1][d4] = miss_symbol;
								user_map[c4 + 1][d4 - 1] = miss_symbol;
								user_map[c4][d4 - 1] = miss_symbol;
								user_map[c4 - 1][d4 - 1] = miss_symbol;
							}
							if (is_vertical_ship)
							{
								user_map[c4][d4 + 1] = miss_symbol;
								user_map[c5][d5 + 1] = miss_symbol;
								user_map[c5 + 1][d5 + 1] = miss_symbol;
								user_map[c5 + 1][d5] = miss_symbol;
								user_map[c5 + 1][d5 - 1] = miss_symbol;
								user_map[c5][d5 - 1] = miss_symbol;
								user_map[c4][d4 - 1] = miss_symbol;
								user_map[c4 - 1][d4 - 1] = miss_symbol;
								user_map[c4 - 1][d4] = miss_symbol;
								user_map[c4 - 1][d4 + 1] = miss_symbol;
							}

							print_map(user_map, mask_comp_map);
							cout << "Captain, our double-deck ship is sunk.\n\n\n";
							system("Pause");
							system("cls");
							first_x = 0;
							first_y = 0;
						}
						
						if (double_deck_ship_user_dead && second_double_deck_ship_user_dead && third_double_deck_ship_user_dead)
						{
							print_map(user_map, mask_comp_map);
							cout << "Captain, all our double-deck ships are sunk.Luck isn't on our side.\n\n\n";
							system("Pause");
							system("cls");
							//break;
						}
						else
						{
							break;
						}
					}
				}


				if (!is_four_deck_ship_user && !is_three_deck_ship_user && !is_double_deck_ship_user)
				{
					if (!single_deck_ship_user_dead || !second_single_deck_ship_user_dead || !third_single_deck_ship_user_dead || !fouth_single_deck_ship_user_dead)
					{																					                       // Check dead single deck ship
						char a = 0, b = 0, a1 = 0, b1 = 0, a2 = 0, b2 = 0, a3 = 0, b3 = 0;
						int count_dead_deck_first_ship = 0;
						int count_dead_deck_second_ship = 0;
						int count_dead_deck_third_ship = 0;

						for (int i = 0, j = 0; i < 4; i++)
						{
							if (single_deck_ship_user[i][j] == x && single_deck_ship_user[i][j + 1] == y)
							{
								is_single_deck_ship_user = true;
							}

							if (is_single_deck_ship_user)
							{
								a = single_deck_ship_user[0][0];
								b = single_deck_ship_user[0][1];
								a1 = single_deck_ship_user[1][0];
								b1 = single_deck_ship_user[1][1];
								a2 = single_deck_ship_user[2][0];
								b2 = single_deck_ship_user[2][1];
								a3 = single_deck_ship_user[3][0];
								b3 = single_deck_ship_user[3][1];

								single_deck_ship_user[i][j] = '-';
								single_deck_ship_user[i][j + 1] = '-';
								break;
							}
						}

						if (!single_deck_ship_user_dead)
						{
							int i = 0, j = 0;

							if (single_deck_ship_user[i][j] == '-' && single_deck_ship_user[i][j + 1] == '-')
							{
								single_deck_ship_user_dead = true;
								hit = false;
								flag_hit = true;

								user_map[a - 1][b] = miss_symbol;
								user_map[a + 1][b] = miss_symbol;
								user_map[a][b - 1] = miss_symbol;
								user_map[a][b + 1] = miss_symbol;
								user_map[a - 1][b - 1] = miss_symbol;
								user_map[a - 1][b + 1] = miss_symbol;
								user_map[a + 1][b - 1] = miss_symbol;
								user_map[a + 1][b + 1] = miss_symbol;

								print_map(user_map, mask_comp_map);
								cout << "Captain, our single-deck ship is sunk.\n\n\n";
								system("Pause");
								system("cls");
								first_x = 0;
								first_y = 0;
							}
						}

						if (!second_single_deck_ship_user_dead)
						{
							int i = 1, j = 0;

							if (single_deck_ship_user[i][j] == '-' && single_deck_ship_user[i][j + 1] == '-')
							{
								second_single_deck_ship_user_dead = true;
								hit = false;
								flag_hit = true;

								user_map[a1 - 1][b1] = miss_symbol;
								user_map[a1 + 1][b1] = miss_symbol;
								user_map[a1][b1 - 1] = miss_symbol;
								user_map[a1][b1 + 1] = miss_symbol;
								user_map[a2 - 1][b2 - 1] = miss_symbol;
								user_map[a2 - 1][b2 + 1] = miss_symbol;
								user_map[a2 + 1][b2 - 1] = miss_symbol;
								user_map[a2 + 1][b2 + 1] = miss_symbol;

								print_map(user_map, mask_comp_map);
								cout << "Captain, our single-deck ship is sunk.\n\n\n";
								system("Pause");
								system("cls");
								first_x = 0;
								first_y = 0;
							}
						}

						if (!third_single_deck_ship_user_dead)
						{
							int i = 2, j = 0;

							if (single_deck_ship_user[i][j] == '-' && single_deck_ship_user[i][j + 1] == '-')
							{
								third_single_deck_ship_user_dead = true;
								hit = false;
								flag_hit = true;

								user_map[a2 - 1][b2] = miss_symbol;
								user_map[a2 + 1][b2] = miss_symbol;
								user_map[a2][b2 - 1] = miss_symbol;
								user_map[a2][b2 + 1] = miss_symbol;
								user_map[a2 - 1][b2 - 1] = miss_symbol;
								user_map[a2 - 1][b2 + 1] = miss_symbol;
								user_map[a2 + 1][b2 - 1] = miss_symbol;
								user_map[a2 + 1][b2 + 1] = miss_symbol;

								print_map(user_map, mask_comp_map);
								cout << "Captain, our single-deck ship is sunk.\n\n\n";
								system("Pause");
								system("cls");
								first_x = 0;
								first_y = 0;
							}
						}

						if (!fouth_single_deck_ship_user_dead)
						{
							int i = 3, j = 0;

							if (single_deck_ship_user[i][j] == '-' && single_deck_ship_user[i][j + 1] == '-')
							{
								fouth_single_deck_ship_user_dead = true;
								hit = false;
								flag_hit = true;

								user_map[a3 - 1][b3] = miss_symbol;
								user_map[a3 + 1][b3] = miss_symbol;
								user_map[a3][b3 - 1] = miss_symbol;
								user_map[a3][b3 + 1] = miss_symbol;
								user_map[a3 - 1][b3 - 1] = miss_symbol;
								user_map[a3 - 1][b3 + 1] = miss_symbol;
								user_map[a3 + 1][b3 - 1] = miss_symbol;
								user_map[a3 + 1][b3 + 1] = miss_symbol;

								print_map(user_map, mask_comp_map);
								cout << "Captain, our single-deck ship is sunk.\n\n\n";
								system("Pause");
								system("cls");
								first_x = 0;
								first_y = 0;
							}
						}
						
						if (single_deck_ship_user_dead && second_single_deck_ship_user_dead && third_single_deck_ship_user_dead && fouth_single_deck_ship_user_dead)
						{
							cout << "Captain, all our single-deck ships are sunk.Luck isn't on our side.\n\n\n";
							//break;
						}
					}
				}
			}
			
			if (user_map[x][y] == destroyed_symbol && !flag_hit)
			{
				system("cls");
				print_map(user_map, mask_comp_map);

				cout << "Opponent hit!\n\n";
				flag_hit = false;
				system("Pause");
				system("cls");
			}
		}


		if (four_deck_ship_user_dead && three_deck_ship_user_dead && second_three_deck_ship_user_dead && double_deck_ship_user_dead && second_double_deck_ship_user_dead && third_double_deck_ship_user_dead && single_deck_ship_user_dead && second_single_deck_ship_user_dead && third_single_deck_ship_user_dead && fouth_single_deck_ship_user_dead)
		{
			game_over = true;
			print_map(user_map, comp_map);
			cout << "GAME OVER!!!\nLuck wasn't on our side. We lost.\n";
			cout << "Thanks for game. It's just a game!\n\n\n";
			system("Pause");
			break;
		}

		if (user_map[x][y] == default_symbol)
		{
			user_map[x][y] = temp_miss_symbol;
			system("cls");
			print_map(user_map, mask_comp_map);
			cout << "Opponent miss!!!\n\n";
			system("Pause");
			system("cls");
			user_map[x][y] = miss_symbol;
			x = first_x;
			y = first_y;
			break;
		}
	}
}

void loader() {

	//cout << "\n\t\t\t\t\t\t  0 0 0 0 0 0 0 0 0 0" << endl;
	cout << "\t\t\t\t\t\t00                   00" << endl;
	cout << "\t\t\t\t\t       0                       0" << endl;
	cout << "\t\t\t\t\t     00   0000           0000   00" << endl;
	cout << "\t\t\t\t\t    0   00000000       00000000   0" << endl;
	cout << "\t\t\t\t\t   0    00000000       00000000    0" << endl;
	cout << "\t\t\t\t\t  0     00000000       00000000     0" << endl;
	cout << "\t\t\t\t\t  0       0000           0000       0" << endl;
	cout << "\t\t\t\t\t  0                                 0" << endl;
	cout << "\t\t\t\t\t  0               0 0               0" << endl;
	cout << "\t\t\t\t\t   00             0 0             00" << endl;
	cout << "\t\t\t\t\t     00                         00" << endl;
	cout << "\t\t\t\t     0          0                     0          0" << endl;
	cout << "\t\t\t\t    000         0                     0         000" << endl;
	cout << "\t\t\t\t   00000          0  0  0  0  0  0  0         00000" << endl;
	cout << "\t\t\t\t     0  00000      0 0 0 0 0 0 0 0 0     00000  0" << endl;
	cout << "\t\t\t\t\t     00000                 00000" << endl;
	cout << "\t\t\t\t\t\t  00000       00000" << endl;
	cout << "\t\t\t\t\t\t       0000000" << endl;
	cout << "\t\t\t\t\t          00000       00000" << endl;
	cout << "\t\t\t\t\t     00000                  00000" << endl;
	cout << "\t\t\t\t     0  00000                            00000  0" << endl;
	cout << "\t\t\t\t   00000                                      00000" << endl;
	cout << "\t\t\t\t    000                                        000" << endl;
	cout << "\t\t\t\t     0                                          0" << endl;
	cout << "\t\t\t\t\t       ****  Pirate wars  ****\n\n\t\t\t\t\t       Only one will survive!!!\n\n" << endl;
	system("Pause");
	system("Cls");

}







