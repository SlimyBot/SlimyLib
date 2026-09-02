#include "SlimyLib.h"

int main() {

    array* player_coordinates = s_vector(5);

    for (int i = 0; i < player_coordinates->capacity; i++)
    {
        s_push(player_coordinates, i + 1);
    }

    for (int k = 0; k < player_coordinates->capacity; k++)
    {
        printf("%d, ", player_coordinates->arr[k]);
    }

    printf("\n");
    printf("erasing at index 2\n");
    s_erase(player_coordinates, 2);

    for (int k = 0; k < player_coordinates->capacity; k++)
    {
        printf("%d, ", player_coordinates->arr[k]);
    }

    free(player_coordinates);

    return 0;
}

