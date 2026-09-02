# Functions

Short overview of every (working) function added

## Math

```c
s_sum(10, 20) //30 - summarize
s_min(5, 10) //5 - find lowest value
s_max(5, 10) //10 - find highest value
s_factorial(3) //6 - calculate the factorial of n
s_round(5.5) //6 - round a number up or down

```

## Dynamic array

```c
#include "SlimyLib.h"

int main() {

    array* player_coordinates = s_vector(5); //create an array with the capacity of 5

    for (int i = 0; i < player_coordinates->capacity; i++)
    {
        s_push(player_coordinates, i + 1); //add values to the array
    }

    for (int k = 0; k < player_coordinates->capacity; k++)
    {
        printf("%d, ", player_coordinates->arr[k]); //output values of the array
    }

    printf("\n");
    printf("erasing at index 2\n");
    s_erase(player_coordinates, 2); //erase the value at index 2

    for (int k = 0; k < player_coordinates->capacity; k++)
    {
        printf("%d, ", player_coordinates->arr[k]);
    }

    free(player_coordinates);

    return 0;
}
```