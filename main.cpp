#include "lib.h"
using namespace std;

int main()
{
    int arr[] = {3, 1, 6, 4, 9};
    insertion_sort(arr, 5);

    
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
