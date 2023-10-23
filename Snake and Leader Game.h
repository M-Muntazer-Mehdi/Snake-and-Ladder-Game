#pragma once
#ifndef _Snake and Leader Game_H
#define _Snake and Leader Game_H
#include<iostream>
#include<windows.h>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<ctime>
#include<fstream>
using namespace std;
class Main
{
public:
	void header(int variable, char character);
	void menu(int& M);
	void playernames(string& name1, string& name2, string& name3, string& name4);
	void toss(string& name1, string& name2, string& name3, string& name4);
};
class Board_Function : public Main
{
public:
	void random(int& number);
	void board(int& number, string& win, int& turns, string& name1, string& name2, string& name3, string& name4
		, int& player1, int& player2, int& player3, int& player4);
	void functions(string& win, int& turns, string& name1, string& name2, string& name3, string& name4
		, int& player1, int& player2, int& player3, int& player4);
};
class OtherFunction : public Board_Function, Main
{
public:
	void credits();
	void instructions();
	void record();
	void record2(string name1, string& name2, string& name3, string& name4, int& player1,
		int& player2, int& player3, int& player4);
	void exist(int& E);
};
#endif
