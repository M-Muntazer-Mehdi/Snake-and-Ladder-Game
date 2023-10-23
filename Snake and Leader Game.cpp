#include<iostream>
#include "Snake and Leader Game.h"
#include<string>
void Main::header(int variable, char character)
{
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < variable; i++)
	{
		cout << "\t\t\t\t";
		for (int j = 0; j < 50; j++)
		{s
			Sleep(70);
			cout << character;
		}
		cout << endl;
	}
	SetConsoleTextAttribute(colors, 10);
	Sleep(70);
	cout << "\t\t\t\t\t     | Snake and ladder game | " << endl;
	SetConsoleTextAttribute(colors, 7);
	for (int i = 0; i < variable; i++)
	{
		cout << "\t\t\t\t";
		for (int j = 0; j < 50; j++)
		{
			Sleep(70);
			cout << character;
		}
		cout << endl;
	}
	cout << endl;
}
// in the function there is the start of my program at console.
// in which i use '#' to enhance the experience.
void Main::menu(int& M)
{
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(colors, 13);
	cout << "\t\t\t\t\t __________________________________" << endl;
	cout << "\t\t\t\t\t| ";
	SetConsoleTextAttribute(colors, 7);
	Sleep(500);
	cout << "Press '1' to Play game.";
	SetConsoleTextAttribute(colors, 13);
	cout << "\t   | " << endl;
	cout << "\t\t\t\t\t|__________________________________|" << endl;
	cout << "\t\t\t\t\t| ";
	SetConsoleTextAttribute(colors, 7);
	Sleep(500);
	cout << "Press '2' to Credits.";
	SetConsoleTextAttribute(colors, 13);
	cout << "\t\t   | " << endl;
	cout << "\t\t\t\t\t|__________________________________|" << endl;
	cout << "\t\t\t\t\t| ";
	SetConsoleTextAttribute(colors, 7);
	Sleep(500);
	cout << "Press '3' to Instructions/Rules.";
	SetConsoleTextAttribute(colors, 13);
	cout << " | " << endl;
	cout << "\t\t\t\t\t|__________________________________|" << endl;
	cout << "\t\t\t\t\t| ";
	SetConsoleTextAttribute(colors, 7);
	Sleep(500);
	cout << "Press '4' to Record.";
	SetConsoleTextAttribute(colors, 13);
	cout << "\t\t   | " << endl;
	cout << "\t\t\t\t\t|__________________________________|" << endl;
	cout << "\t\t\t\t\t| ";
	SetConsoleTextAttribute(colors, 7);
	Sleep(500);
	cout << "Press '5' to Exit.";
	SetConsoleTextAttribute(colors, 13);
	cout << "\t\t   | " << endl;
	cout << "\t\t\t\t\t|__________________________________|" << endl;
	cout << endl;
	SetConsoleTextAttribute(colors, 10);
	Sleep(500);
	cout << "\t\t\t\t\t __________________________________" << endl;
	SetConsoleTextAttribute(colors, 7);
	Sleep(500);
	cout << "\t\t\t\t\t Your choice is : ";
	cin >> M;
	cout << endl;
}
// in these function i made a menu option from 1 to 5 in which different option contains play game option and 
// other such that option. for become easy for the user.
void Main::playernames(string& name1, string& name2, string& name3, string& name4)
{
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(colors, 12);
	Sleep(500);
	cout << "\t\t\t\t\t __________________________________" << endl;
	cout << "\t\t\t\t\t   " << endl;
	SetConsoleTextAttribute(colors, 7);
	Sleep(500);
	cout << "\t\t\t\t\t   what is player1 name : ";
	cin >> name1;
	Sleep(500);
	cout << "\t\t\t\t\t   what is player2 name : ";
	cin >> name2;
	Sleep(500);
	cout << "\t\t\t\t\t   what is player3 name : ";
	cin >> name3;
	Sleep(500);
	cout << "\t\t\t\t\t   what is player4 name : ";
	cin >> name4;
	SetConsoleTextAttribute(colors, 12);
	Sleep(500);
	cout << "\t\t\t\t\t __________________________________" << endl;
	SetConsoleTextAttribute(colors, 7);
}
// in these function we get player names from the user.
// in the form of string.
void Main::toss(string& name1, string& name2, string& name3, string& name4)
{
	srand((unsigned)time(0));
	int toss = (rand() % 2);
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << endl;
	SetConsoleTextAttribute(colors, 12);
	Sleep(500);
	cout << "\t\t\t\t\t __________________________________" << endl;
	cout << "\t\t\t\t\t    " << endl;
	SetConsoleTextAttribute(colors, 7);
	Sleep(500);
	cout << "\t\t\t\t\t\tToss : ";
	if (toss == 1)
	{
		Sleep(500);
		cout << "Head" << endl;
		Sleep(500);
		cout << "\t\t\t\t\t   The first turn is  : " << name1 << endl;
		Sleep(500);
		cout << "\t\t\t\t\t   The second turn is : " << name3 << endl;
		Sleep(500);
		cout << "\t\t\t\t\t   The third turn is  : " << name4 << endl;
		Sleep(500);
		cout << "\t\t\t\t\t   The fourth turn is : " << name2 << endl;
	}
	else
	{
		Sleep(500);
		cout << "Tail" << endl;
		Sleep(500);
		cout << "\t\t\t\t\t   The first turn is  : " << name2 << endl;
		Sleep(500);
		cout << "\t\t\t\t\t   The second turn is : " << name3 << endl;
		Sleep(500);
		cout << "\t\t\t\t\t   The third turn is  : " << name4 << endl;
		Sleep(500);
		cout << "\t\t\t\t\t   The fourth turn is : " << name1 << endl;
	}
	SetConsoleTextAttribute(colors, 12);
	Sleep(500);
	cout << "\t\t\t\t\t __________________________________" << endl;
	SetConsoleTextAttribute(colors, 7);
}
// know these part came in which the player get the toss and there number of turns.
// in these i use random function to get head/tail.
void  Board_Function::random(int& number)
{
	srand((unsigned)time(0));
	number = (rand() % 6 + 1);
}
// i did not face much problem for that.
// i made a unique or different function for these.
// for my easiness.
void Board_Function::board(int& number, string& win, int& turns, string& name1, string& name2, string& name3, string& name4
	, int& player1, int& player2, int& player3, int& player4)
{
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i <= 9; i++)
		cout << " ____";
	cout << endl;
	cout << "|" << 100 << " ";
	for (int a = 99; a >= 91; a--)
	{
		cout << "| ";
		if (a == player1)
		{
			SetConsoleTextAttribute(colors, 10);
			cout << "\b$";
		}
		else
			cout << "";
		if (a == player2)
		{
			SetConsoleTextAttribute(colors, 13);
			cout << "\b@";
		}
		else
			cout << "";
		if (a == player3)
		{
			SetConsoleTextAttribute(colors, 14);
			cout << "\b%";
		}
		else
			cout << "";
		if (a == player4)
		{
			SetConsoleTextAttribute(colors, 11);
			cout << "\b&";
		}
		else
			cout << "";
		if (a == 93)
		{
			SetConsoleTextAttribute(colors, 12);
		}
		cout << a << " ";
		SetConsoleTextAttribute(colors, 7);
	}
	cout << "|" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cout << "|____";
	}
	cout << "|" << endl;
	cout << "| " << 81 << " ";
	for (int a = 82; a <= 90; a++)
	{
		cout << "| ";
		if (a == player1)
		{
			SetConsoleTextAttribute(colors, 10);
			cout << "\b$";
		}
		else
			cout << "";
		if (a == player2)
		{
			SetConsoleTextAttribute(colors, 13);
			cout << "\b@";
		}
		else
			cout << "";
		if (a == player3)
		{
			SetConsoleTextAttribute(colors, 14);
			cout << "\b%";
		}
		else
			cout << "";
		if (a == player4)
		{
			SetConsoleTextAttribute(colors, 11);
			cout << "\b&";
		}
		else
			cout << "";
		cout << a << " ";
		SetConsoleTextAttribute(colors, 7);
	}
	cout << "|" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cout << "|____";
	}
	cout << "|" << endl;
	cout << "| " << 80 << " ";
	for (int a = 79; a >= 71; a--)
	{
		cout << "| ";
		if (a == player1)
		{
			SetConsoleTextAttribute(colors, 10);
			cout << "\b$";
		}
		else
			cout << "";
		if (a == player2)
		{
			SetConsoleTextAttribute(colors, 13);
			cout << "\b@";
		}
		else
			cout << "";
		if (a == player3)
		{
			SetConsoleTextAttribute(colors, 14);
			cout << "\b%";
		}
		else
			cout << "";
		if (a == player4)
		{
			SetConsoleTextAttribute(colors, 11);
			cout << "\b&";
		}
		else
			cout << "";
		if (a == 78)
		{
			SetConsoleTextAttribute(colors, 9);
		}
		cout << a << " ";
		SetConsoleTextAttribute(colors, 7);
	}
	cout << "|" << setw(42) << " __________ " << endl;
	for (int i = 0; i <= 9; i++)
	{
		cout << "|____";
	}
	cout << "|" << setw(30) << "Your number is :   " << "|    ";
	SetConsoleTextAttribute(colors, 12);
	cout << "__";
	SetConsoleTextAttribute(colors, 7);
	cout << "    | " << endl;
	cout << "| " << 61 << " ";
	for (int a = 62; a <= 70; a++)
	{
		cout << "| ";
		if (a == player1)
		{
			SetConsoleTextAttribute(colors, 10);
			cout << "\b$";
		}
		else
			cout << "";
		if (a == player2)
		{
			SetConsoleTextAttribute(colors, 13);
			cout << "\b@";
		}
		else
			cout << "";
		if (a == player3)
		{
			SetConsoleTextAttribute(colors, 14);
			cout << "\b%";
		}
		else
			cout << "";
		if (a == player4)
		{
			SetConsoleTextAttribute(colors, 11);
			cout << "\b&";
		}
		else
			cout << "";
		cout << a << " ";
		SetConsoleTextAttribute(colors, 7);
	}
	cout << "|" << setw(34) << "|   ";
	SetConsoleTextAttribute(colors, 12);
	cout << "|  |   ";
	SetConsoleTextAttribute(colors, 7);
	cout << "| " << endl;
	for (int i = 0; i <= 9; i++)
	{
		cout << "|____";
	}
	cout << "|" << setw(34) << "|   ";
	SetConsoleTextAttribute(colors, 12);
	cout << "| ";
	SetConsoleTextAttribute(colors, 14);
	cout << number;
	SetConsoleTextAttribute(colors, 12);
	cout << "|   ";
	SetConsoleTextAttribute(colors, 7);
	cout << "| " << endl;
	cout << "| " << 60 << " ";
	for (int a = 59; a >= 51; a--)
	{
		cout << "| ";
		if (a == player1)
		{
			SetConsoleTextAttribute(colors, 10);
			cout << "\b$";
		}
		else
			cout << "";
		if (a == player2)
		{
			SetConsoleTextAttribute(colors, 13);
			cout << "\b@";
		}
		else
			cout << "";
		if (a == player3)
		{
			SetConsoleTextAttribute(colors, 14);
			cout << "\b%";
		}
		else
			cout << "";
		if (a == player4)
		{
			SetConsoleTextAttribute(colors, 11);
			cout << "\b&";
		}
		else
			cout << "";
		if (a == 60)
		{
			SetConsoleTextAttribute(colors, 9);
		}
		cout << a << " ";
		SetConsoleTextAttribute(colors, 7);
	}
	cout << "|" << setw(30) << "Your number is :   " << "|   ";
	SetConsoleTextAttribute(colors, 12);
	cout << "|__|";
	SetConsoleTextAttribute(colors, 7);
	cout << "   | " << endl;
	for (int i = 0; i <= 9; i++)
	{
		cout << "|____";
	}
	cout << "|" << setw(42) << "|__________|" << endl;
	cout << "| " << 41 << " ";
	for (int a = 42; a <= 50; a++)
	{
		cout << "| ";
		if (a == player1)
		{
			SetConsoleTextAttribute(colors, 10);
			cout << "\b$";
		}
		else
			cout << "";
		if (a == player2)
		{
			SetConsoleTextAttribute(colors, 13);
			cout << "\b@";
		}
		else
			cout << "";
		if (a == player3)
		{
			SetConsoleTextAttribute(colors, 14);
			cout << "\b%";
		}
		else
			cout << "";
		if (a == player4)
		{
			SetConsoleTextAttribute(colors, 11);
			cout << "\b&";
		}
		else
			cout << "";
		if (a == 46)
		{
			SetConsoleTextAttribute(colors, 12);
		}
		cout << a << " ";
		SetConsoleTextAttribute(colors, 7);
	}
	cout << "|" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cout << "|____";
	}
	cout << "|" << endl;
	cout << "| " << 40 << " ";
	for (int a = 39; a >= 31; a--)
	{
		cout << "| ";
		if (a == player1)
		{
			SetConsoleTextAttribute(colors, 10);
			cout << "\b$";
		}
		else
			cout << "";
		if (a == player2)
		{
			SetConsoleTextAttribute(colors, 13);
			cout << "\b@";
		}
		else
			cout << "";
		if (a == player3)
		{
			SetConsoleTextAttribute(colors, 14);
			cout << "\b%";
		}
		else
			cout << "";
		if (a == player4)
		{
			SetConsoleTextAttribute(colors, 11);
			cout << "\b&";
		}
		else
			cout << "";
		if (a == 31)
		{
			SetConsoleTextAttribute(colors, 9);
		}
		cout << a << " ";
		SetConsoleTextAttribute(colors, 7);
	}
	cout << "|" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cout << "|____";
	}
	cout << "|" << endl;
	cout << "| " << 21 << " ";
	for (int a = 22; a <= 30; a++)
	{
		cout << "| ";
		if (a == player1)
		{
			SetConsoleTextAttribute(colors, 10);
			cout << "\b$";
		}
		else
			cout << "";
		if (a == player2)
		{
			SetConsoleTextAttribute(colors, 13);
			cout << "\b@";
		}
		else
			cout << "";
		if (a == player3)
		{
			SetConsoleTextAttribute(colors, 14);
			cout << "\b%";
		}
		else
			cout << "";
		if (a == player4)
		{
			SetConsoleTextAttribute(colors, 11);
			cout << "\b&";
		}
		else
			cout << "";
		if (a == 23)
		{
			SetConsoleTextAttribute(colors, 12);
		}
		cout << a << " ";
		SetConsoleTextAttribute(colors, 7);
	}
	cout << "|" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cout << "|____";
	}
	cout << "|" << endl;
	cout << "| " << 20 << " ";
	for (int a = 19; a >= 11; a--)
	{
		cout << "| ";
		if (a == player1)
		{
			SetConsoleTextAttribute(colors, 10);
			cout << "\b$";
		}
		else
			cout << "";
		if (a == player2)
		{
			SetConsoleTextAttribute(colors, 13);
			cout << "\b@";
		}
		else
			cout << "";
		if (a == player3)
		{
			SetConsoleTextAttribute(colors, 14);
			cout << "\b%";
		}
		else
			cout << "";
		if (a == player4)
		{
			SetConsoleTextAttribute(colors, 11);
			cout << "\b&";
		}
		else
			cout << "";
		cout << a << " ";
		SetConsoleTextAttribute(colors, 7);
	}
	cout << "|" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cout << "|____";
	}
	cout << "|" << endl;
	cout << "|  " << 1 << " ";
	for (int a = 2; a <= 9; a++)
	{
		cout << "|  ";
		if (a == player1)
		{
			SetConsoleTextAttribute(colors, 10);
			cout << "\b$";
		}
		else
			cout << "";
		if (a == player2)
		{
			SetConsoleTextAttribute(colors, 13);
			cout << "\b@";
		}
		else
			cout << "";
		if (a == player3)
		{
			SetConsoleTextAttribute(colors, 14);
			cout << "\b%";
		}
		else
			cout << "";
		if (a == player4)
		{
			SetConsoleTextAttribute(colors, 11);
			cout << "\b&";
		}
		else
			cout << "";
		if (a == 8)
		{
			SetConsoleTextAttribute(colors, 9);
		}
		cout << a << " ";
		SetConsoleTextAttribute(colors, 7);
	}
	cout << "|";
	cout << " " << 10 << " |" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cout << "|____";
	}
	cout << "|" << endl;
}
// that is the first most important part of over program.
// in these first of all we made board of 10\10 by the help
// of for loop. after these we change color of some part.
// to made leader and snake coloring can be chane with the
// help of 'HANDLE' / 'window.h' and 'color(12)'.
// after these we use palyer's symbol and show on
// the board for different color and by the use of if/else statment.
// in the right side of board i made a small board in which 
// the random number is generate by the help of srand funaction.
int main()
{
	char OTHERCHOICE;
	do
	{
		Main M1;
		Board_Function B1;
		OtherFunction F1;
		int variable = 3;
		char character = '#';
		M1.header(variable, character);
		int M;
		M1.menu(M);
		string name1, name2, name3, name4;
		int player1, player2, player3, player4;
		int number;
		int turns;
		string win;
		HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
		int E;
		switch (M)
		{
		case 1:
		{
			M1.playernames(name1, name2, name3, name4);
			M1.toss(name1, name2, name3, name4);
			B1.random(number);
			B1.functions(win, turns, name1, name2, name3, name4, player1, player2, player3, player4);
			break;
		}
		case 2:
		{
			F1.credits();
			break;
		}
		case 3:
		{
			F1.instructions();
			break;
		}
		case 4:
		{
			F1.record();
			break;
		}
		case 5:
		{
			F1.exist(E);
			cout << endl;
			SetConsoleTextAttribute(colors, 10);
			cout << "\t\t\t\t\t __________________________________" << endl;
			SetConsoleTextAttribute(colors, 7);
			cout << "\t\t\t\t\t Your choice is : ";
			cin >> E;
			if (E == 1)
			{
				return 0;
			}
			break;
		}
		}
		F1.record2(name1, name2, name3, name4, player1, player2, player3, player4);
		cout << endl << endl;
		SetConsoleTextAttribute(colors, 13);
		Sleep(500);
		cout << " \t\t\t\t ___________________________________________________ " << endl;
		Sleep(500);
		cout << "\t\t\t\t";
		SetConsoleTextAttribute(colors, 7);
		cout << "\t Press 'N' || Press 'n' to Exit." << endl;
		Sleep(500);
		cout << "\t\t\t\t";
		SetConsoleTextAttribute(colors, 7);
		Sleep(500);
		cout << "\t Else Press 'Y' || Press 'y'." << endl;
		Sleep(500);
		cout << "\t\t\t\t";
		SetConsoleTextAttribute(colors, 11);
		cout << "\t\t Enter choice : ";
		SetConsoleTextAttribute(colors, 7);
		cin >> OTHERCHOICE;
		if (OTHERCHOICE == 'Y' || OTHERCHOICE == 'y')
		{
			system("cls");
		}
		else
		{
			OTHERCHOICE = 'n';
			exit(0);
		}
	} while (OTHERCHOICE != 'N' || OTHERCHOICE != 'n');
}
// know the last part in which i stored all functions.
// and get them the links.
// and used switched statment for the menu bar.