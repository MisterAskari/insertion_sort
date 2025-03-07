#include "lib.h"
using namespace std;

int main()
{
    int arr[] = {3, 1, 6, 4, 9};
    printf("please selected sort type: \n");
    printf(" 1)Insertion sort\n 2)Bubble sort\n 3)Selection sort");
    printf("\n");
    printf("please enter the number of the Menu: ");

    int ans;
    cin>>ans;

    switch(ans)
    {
        case 1:
            cout<<"insertion sorting: ";
            insertion_sort(arr, 5);
            for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 2:
            cout<<"bubble sorting: ";
            bubbleSort(arr , 5);
            for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
            }
            cout << endl;
            break;
        case 3:
            cout<<"selection sorting: ";
            selectionSort(arr , 5);
            for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
            }
            cout << endl;
            break;
    }

    return 0;
}
