#include <stdio.h>
#include "SlimyLib.h"

#define LowestNumber 5
#define HighestNumber 10

int main() {

    int test = s_sum(LowestNumber, HighestNumber);

    //float:printf("result: %f", test);
    //integer:
    printf("result: %d", test);

    return 0;
}

