#include "SlimyLib.h"

int s_min(int a, int b)
{
    return (a > b) ? b : a;
};

int s_max(int a, int b) 
{
    return (a > b) ? a : b;
};

int s_sum(int a, int b)
{
    return a + b;
};

int s_factorial(int a)
{
    return (a == 1) ? 1 : a * s_factorial( a - 1 );
};

int s_round(float a)
{
    int int_a = (int) a;
    float float_a = (float) int_a;

    float rest = a - float_a;

    if (rest < 0.5f)
    {
        return int_a;
    } else {
        return int_a + 1;
    }
};

float s_power(int basis, int exponent)
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

float s_log_2(float a) 
{
    return a * 0.5f;
};

float s_sqrt(float a)
{
    //Heron Verfahren / Heron's Method

    float x = a;
    float old_x;
    float Vergleich = 0.000000000000001f;

    do {
        old_x = x;
        x = (x + a / x) / 2;
    } while (x - old_x > Vergleich || old_x - x > Vergleich);

    return x;
};

int e()
{
    int FOURbytes = s_power(2, 16);

    return (s_power((1 + 1/FOURbytes), FOURbytes));
};