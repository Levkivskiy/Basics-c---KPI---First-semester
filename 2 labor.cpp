// lab3for5.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	int a_1 = 0;
	int y_1 = 1;
	while (y_1 != 0)
	{
		int z_1 = (~a_1) & y_1;
		a_1 = a_1 ^ y_1;
		y_1 = z_1 << 1;
	}

	int a = -15;
	int y = 1;
	while (y != 0)
	{
		int z = (~a)& y;
		a = a ^y;
		y = z << 1;
	}

	int a_2 = 138;
	int y_2 = 1;
	while (y_2 != 0)
	{
		int z_2 = (~a_2) & y_2;
		a_2 = a_2^y_2;
		y_2 = z_2 << 1;
	}
	
	int in_1 = -1;
	int in_2 = -12;
	bool res;
	bool res2;

		res = in_1 > in_2;
		res2 = in_2 > in_1;


		int in_1a = 94;
		int in_2a = 305;
		bool resa;
		bool res2a;

		resa = in_1a > in_2a;
		res2a = in_2a > in_1a;

		int in_1b = 537;
		int in_2b = 537;
		bool resb;
		bool res2b;

	resb = in_1b > in_2b;
	res2b = in_2b > in_1b;
	return 0;
}