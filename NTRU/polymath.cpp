#include "stdafx.h"

#define PI 3.14159265358979323


/*decription failuere probability*/
double pdec(int N, int q, int p, int dr, int df)
{
	double c = (((double)q) - 2.) / (2.*(double)p);
	double sigma = sqrt(4.*((double)dr+(double)df)/(3.*(double)N));
	double x = c / (sigma*sqrt(2.*((double)N)));
	double pa = ((double)N)*erfc(x);
	return pa;
}

double funMean(double D, double sigma)
{
	double result;
	double value1, value2,value3;
	value1 = D / (sigma*sqrt(2));
	value2 = (sigma*sqrt(2)) / (D*sqrt(PI));
	value3 = (-1)*(pow(D, 2) / (2 * pow(sigma, 2)));
	result = erfc(value1) - (value2)*(exp(value3) - 1);
	return result;
}

double latticeRunningTime(int y2, int N, double alfa)
{
	double w, exp;
	exp = (1 - alfa);
	w = (2 * 0.2*(y2 - N) / pow(exp, 2)) + (3 * log10(2 * (y2 - N) / exp)) - 50;
	return w;
}

double MITMRunningTime(int y2, int N, int c, int q, int df, double alfa, double sigma)
{
	double result;
	result = time(y2)*Eng(y2, N, c,q, alfa, sigma) / psplit(y2,N,df,c);
	return result;
}

double time(int y2)
{
	double result;
	result = ((double)y2) / pow(2, 1.06);
	return result;
}

double Eng(int y2, int N, int c, int q, double alfa, double sigma)
{
	double eng0e, eng0d, ps,result,compare,base,expoente;
	eng0e = pascal(2 * N - y2,c/2)*pascal(2 * N - y2 - (c / 2),c/2);
	eng0d = pascal(c,c/2);
	base = 1. - (2. / (3. * (double)q));
	expoente = (2 * N - (double)y2*(1 + alfa)) / (1 - alfa);
	ps = 1;
	compare = 2 * (y2 - N) / (1 - alfa);
	for (int i = 0; i <= compare; i++)
	{
		ps = ps*(1 - funMean(pow(q, ((2 * alfa*(y2 - N) + i*pow(1 - alfa, 2)) / (2 * (y2 - N)))), sigma));	
	}
	ps = ps*pow(base , expoente);
	result = (eng0e / eng0d)/ps;
	return result;
}

double psplit(int y2, int N, int df, int c)
{
	double result;
	result = pascal(y2 - N, df - c)*pascal(y2 - N - df + c, df - c)*pascal(2 * N - y2, c)*pascal(2 * N - y2 - c, c);
	result = result / (pascal(N, df)*pascal(N - df, df));
	result = 1 - pow(1 - result, N);
	return result;
}

double binomial(double value)
{
	double result = 1;
	for (int i = 1; i  <= ceil(value); i++)
	{
		result = result*i;
	}
	return result;
}

double pascal(double N, double k)
{
	double result=1;
	for (int i = N; i >= ceil(N-k+1); i--)
	{
		result = result*i;
	}
	for (int j = 1; j <= ceil(k); j++)
	{
		result = result/j;
	}
	return result;
}

void sumPoly(int vector1[], int *vector2, int *result, int size1, int size2)
{
	if (size1 == size2)
	{
		for (int i = 0; i < size1; i++)
		{
			result[i] = vector1[i] + vector2[i];
		}
	}
	else
		printf("\nVetores de diferentes tamanhos\n");
}

void multPoly(int* vector1, int* vector2, int* result, int size1, int size2)
{
	int j;
	if (size1 == size2)
	{
		for (int i = 0; i < size1; i++)
		{
			result[i] = 0;
		}
		for (int k = 0; k < size1; k++)
		{
			for (int i = 0; i <= k; i++)
			{
				result[k] += vector1[i]*vector2[k - i];
			}
			for (int i = k+1; i < size1; i++)
			{
				j = (size1 + (k + 1) - i)-1;
				result[k] += vector1[i] * vector2[j];
			}
		}
	}
	else
		printf("\nVetores de diferentes tamanhos\n");
}

void genPoly(int k, char *name)
{
	int N, df, dg, dr;

}
