#include<iostream>
#include "Snake and Leader Game.h"
#include<string>
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