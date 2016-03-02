#include "stdafx.h"

void sumPoly(int vector1[], int *vector2, int *result, int size1, int size2)
{
	if (size1 == size2)
	{
		for (int i = 0; i <= sizeof(vector1); i++)
		{
			result[i] = vector1[i] + vector2[i];
		}
	}
	else
		printf("\nVetores de diferentes tamanhos\n");
}

void multPoly(int* vector1, int* vector2, int* result, int size1, int size2)
{

}