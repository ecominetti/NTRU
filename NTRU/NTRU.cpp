// NTRU.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 2,0,0,0,0 };
	int c=15;
	double dr = 49;
	double df = 49;
	double N = 541;
	double sigma = sqrt(2*floor(N/3)+2*(df-c));
	double result, r;
	printf("Testando novamente funcionamento da chave oath\n\n");
	result = MITMRunningTime(800, N, c, 2048, df, 0.347, sigma);
	r=latticeRunningTime(800, N, 0.347);
	//result = log2(result);
		printf("RESULT = %e %e\n\n",r,log2(result));
	system("PAUSE");
    return 0;
}


