// lab6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	float ary[4][5];
	float sum_ary[4];

	for(int i = 0; i < 4; i++)
	{
		int sum_column = 1;
		for(int j = 0; j < 5; j++)
		{
			ary[i][j] = i;
			sum_column *= ary[i][j];
		}
		sum_ary[i] = sum_column;
	}

	int ary2[5][4];
	int sum_ary2[5];

	for (int i = 0; i < 5; i++)
	{
		int sum_column = 0;
		int less_than_zero = 0;
		for (int j = 0; j < 4; j++)
		{
			ary2[i][j] = i;
			if (ary2[i][j] < 0) 
			{
				less_than_zero++;
				sum_column += ary2[i][j];
			}
		}
		sum_ary2[i] = sum_column / less_than_zero;
	}
    return 0;
}