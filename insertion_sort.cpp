using namespace std;
#include <iostream>

void insertionsorting(int arr[], int n)
{

    int right, left;
    for (int i = 1; i < n; i++)
    {

        right = arr[i];
        left = i - 1;

        while (left >= 0 && arr[left] > right)
        {
            arr[left + 1] = arr[left];
            left = left - 1;
        }
        arr[left + 1] = right;
    }
}

void arraylist(int arr[], int m)
{

    for (int i =0; i < m; i++)
    {

             cout << arr[i] << " ";
        cout << endl;
    }
}

int main()
{

    int arr[] = {12, 77, 212, 21, 121};
    int length = sizeof(arr) / sizeof(arr[0]);

    insertionsorting(arr, length);
    arraylist(arr, length);
    return 0;
}
