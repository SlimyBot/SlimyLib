#include <stdio.h>
#include "SlimyLib.h"

#define LowestNumber 5
#define HighestNumber 10

int main() {

    int int_to_4bits(int a)
    {
        return (a == 0 ? 0000 : (a == 1 ? 0001 : ((a % 2) + 10 * int_to_4bits(a/2)))); //1023 into HEX test
    }

    int wow = int_to_4bits(1);

    printf("%d", wow);

    //int test = power(2, 32);

    //float:printf("result: %f", test);
    //integer:printf("result: %d", test);

    return 0;
}

