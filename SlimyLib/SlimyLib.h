#ifndef SlimyLib
#define SlimyLib

#include <stdint.h>

//#define e = 2.71828 //Eulersche Zahl / Euler's Number

//natual constants

int e();

//basic operators

int s_min(int a, int b);
int s_max(int a, int b);
int s_sum(int a, int b);
int s_factorial(int a); //les https://de.wikipedia.org/wiki/Fakultät_(Mathematik) , wenn du noch Dezimalzahlen hinzufügen willst


int s_round(float a);
int s_power(int basis, int exponent);
float s_sqrt(float a);
float s_log_2(float a);


#endif