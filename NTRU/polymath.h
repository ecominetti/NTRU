#pragma once

void sumPoly(int vector1[], int *vector2, int *result, int size1, int size2);

void multPoly(int* vector1, int* vector2, int* result, int size1, int size2);

/*Generates polynomials public key and private key for parameters N, p, q*/
void genPoly(int N, int p, int q);

double pdec(int N, int q, int p, int dr, int df);