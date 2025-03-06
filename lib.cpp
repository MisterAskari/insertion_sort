#include "lib.h"

void insertion_sort(int arry[], int size)
{
    int selected_item, j;
    for (int i = 1; i < size; i++)
    {
        selected_item = arry[i];
        j = i - 1;
        while (j >= 0 && (selected_item < arry[j]))
        {
            arry[j + 1] = arry[j];
            j--;
        }
        arry[j + 1] = selected_item;
    }
}
