// labor4.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	const int MAX = 6;
	const int n = 10;
	unsigned short us1;
	unsigned short *pus2;

	int i1;
	int *pi2;

	float f1;
	float *pf2;

	double d1;
	double *pd2;

	pus2 = &us1;
	pi2 = &i1;
	pf2 = &f1;
	pd2 = &d1;
	
	*pus2 = 4567;
	*pi2 = 167;
	*pf2 = -3.9412;
	*pd2 = -6.8e-6;


	void *not_type = &us1;
	not_type = &i1;
	not_type = &f1;
	not_type = &d1;
	not_type = pus2;
	not_type = pi2;
	not_type = pf2;
	not_type = pd2;

	int iSize1 = sizeof(us1);
	int iSize2 = sizeof(i1);
	int iSize3 = sizeof(f1);
	int iSize4 = sizeof(d1);
	int iSize5 = sizeof(pus2);
	int iSize6 = sizeof(pi2);
	int iSize7 = sizeof(pf2);
	int iSize8 = sizeof(pd2);
	int iSize9 = sizeof(not_type);


	//////////////
	int *piElem = new int[MAX];
	int res = 1;
	for (int i = 0; i < MAX; i++) {
		if (i % 2 == 0) {
			*(piElem + i) = 23 + i;
		}
		else {
			*(piElem + i) = 25 - i;
		}
	}
	for (int a = 0; a < MAX; a++) {
		if (*(piElem + a) < 24) {
			res *= *(piElem + a);
		}
	}


	///////

	char *sequence_1 = new char[n];

	char *sequence_2 = new char[n];

	char *sequence_3 = new char[n];

	for (int i = 0; i < n; i++) {
		*(sequence_1 + i) = 62 + (3 * i);
		*(sequence_2 + i) = 74 - i;
	}
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (*(sequence_1 + i) == *(sequence_2 + j))
			{
				*(sequence_3 + k) = *(sequence_1 + i);
				k++;
			}
		}
	}

	delete[] sequence_1;
	delete[] sequence_2;

	int sum_max = 0;
	int sum_min = *(sequence_3);
	for (int i = 0; i < k; i++) {
		if (*(sequence_3 + i) > sum_max) {
			sum_max = *(sequence_3 + i);
		}
		if (*(sequence_3 + i) < sum_min) {
			sum_min = *(sequence_3 + i);
		}
	}
	delete[] sequence_3;

	int result = sum_min + sum_max;

	return 0;
}

