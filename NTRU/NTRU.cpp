// NTRU.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[4] = { 6,7,8,9 };
	int c[5];

	printf("teste");
	sumPoly(a, b, c, sizeof(a) / sizeof(int), sizeof(b) / sizeof(int));

	system("PAUSE");
    return 0;
}

