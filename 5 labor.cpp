// lab5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char mas1[10];
	char mas2[10];
	char mas3[10];
	int res = 1;

	for(int i = 0; i < 10; i++)
	{
		mas1[i] = 100 + i;
		mas2[i] = 100 - (i * i);
		mas3[i] = mas1[i] + mas2[i];
		res *= (int)mas3[i];
	}
    return 0;
}

