#ifndef SlimyLib
#define SlimyLib

#include <stdio.h>
#include <stdlib.h>

#include "SlimyMath.h"

typedef struct
{
    int len;
    int capacity;
    int arr[];
} array;

array* s_vector(int capacity);
array* s_push(array* arr, int number);
void s_erase(array* arr, int index);

#endif