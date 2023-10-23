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