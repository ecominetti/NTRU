#pragma once

void sumPoly(int vector1[], int *vector2, int *result, int size1, int size2);

void multPoly(int* vector1, int* vector2, int* result, int size1, int size2);

double latticeRunningTime(int y2, int N, double alfa);

double MITMRunningTime(int y2, int N, int c, int q, int df, double alfa, double sigma);

double time(int y2);

double Eng(int y2, int N, int c, int q, double alfa, double sigma);

double psplit(int y2, int N, int df, int c);

double binomial(double value);

double pascal(double N, double k);

double funMean(double D, double sigma);

/*Generates polynomials public key, private key and parameters N, p, q for security level k*/
/*and outputs them on file "name"                                                          */
/*INPUT: int security level k, string "name"                                               */
/*OUTPUT: public key, private key, N, p, q on file "name"*/
void genPoly(int k, char *name);

double pdec(int N, int q, int p, int dr, int df);
