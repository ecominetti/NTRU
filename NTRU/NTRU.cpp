// NTRU.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 2,0,0,0,0 };
	int c[5];

	printf("Testando novamente funcionamento da chave oath");
	sumPoly(a, b, c, sizeof(a) / sizeof(int), sizeof(b) / sizeof(int));
	multPoly(a, b, c, sizeof(a) / sizeof(int), sizeof(b) / sizeof(int));
	for (int i = 0; i < 5; i++)
		printf("%d ", c[i]);
	system("PAUSE");
    return 0;
}

