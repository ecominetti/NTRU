#include "stdafx.h"

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
