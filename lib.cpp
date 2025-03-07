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


void bubbleSort(int arr[] , int n)
{
    for(int i = 0; i<n-1 ; i++)
    {
        for(int j = 0 ; j<n-i-1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void selectionSort(int arr[] , int n)
{
    int temp;
    for(int i = 0 ; i<n-1 ; i++)
    {
        int minIndex=i;
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
        }

        if(minIndex != i){
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
