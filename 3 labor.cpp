// lab3OP.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	
	double x;
	double y1 = 0;
	double y2 = 0;
	for (x = 0.1; x <= 7; x += 0.2) {
		if (x > 3) {
			double  x_in2 = x * x;
			for (int i = 3; i <= 7; i++)
			{
				y1 += 2 * i / (x + i);
			}
			y1 *= x_in2;
		}
		else 
		{
			{
				y2 += (5 + x) / x + x;
			}
		}
	}
	auto sum = y2 + y1;








	/*
	double sum = 0;
	double x2 = 0;
		for (double x = -3; x <= 8; x += 0.4) {
			if (x < 2)
			{
				x2 = x*x;
				for (int i = 2; i <= 6; i++)
					sum += ((i * i) - x);
				sum *= x2;
			}
			else
			{
				sum += x + 2 * (x2 - x);
			}
		}
	*/
	return 0;
	
}