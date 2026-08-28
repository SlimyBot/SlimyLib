#include "SlimyLib.h"

int min(int a, int b)
{
    return (a > b) ? b : a;
};

int max(int a, int b) 
{
    return (a > b) ? a : b;
};

int sum(int a, int b)
{
    return a + b;
};

int power(int basis, int exponent)
{
    if (exponent == 0) {
        return 1;
    } else {
        int result = 1;

        for (int i = 0; i < exponent; i++)
        {
            result *= basis;
        }

        return result;
    }
};

float log_2(float a) 
{
    return a * 0.5f;
};

int e()
{
    int FOURbytes = power(2, 16);

    return (power((1 + 1/FOURbytes), FOURbytes));
};