#include "SlimyLib.h"

array* s_push(array* arr, int number)
{
    if (arr->len >= arr->capacity)
    {
        int new_capacity = arr->capacity * 2;

        array *tmp = realloc(
            arr,
            sizeof(array) + new_capacity * sizeof(int)
        );

        if (tmp == NULL)
            return NULL;

        arr = tmp;
        arr->capacity = new_capacity;
    }

    arr->arr[arr->len] = number;
    arr->len++;

    return arr;
}

array* s_vector(int capacity)
{
    array* arr = malloc(sizeof(array) + capacity * sizeof(int));

    if (arr == NULL)
        return NULL;

    arr->len = 0;
    arr->capacity = capacity;

    return arr;
}

void s_erase(array* arr, int index)
{
    if (index < 0 || index >= arr->len)
        return;

    for (int i = index; i < arr->len - 1; i++)
    {
        arr->arr[i] = arr->arr[i + 1];
    }

    arr->len--;
}