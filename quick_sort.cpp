using namespace std;
#include <iostream>
void swap(int *num, int *num2)
{

    int temp = *num;
    *num = *num2;
    *num2 = temp;
}

int party(int arr[], int low, int high)
{

    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {

        if (arr[j] < pivot)
        {
            i = i + 1;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quick(int arr[], int low, int high)
{

    if (low < high){
        int pir = party(arr, low, high);
         quick(arr, low, pir - 1);
        quick(arr, pir + 1, high);
    }
    }
void array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
    cout << endl;
}

int main()
{
    int arr[] = {12, 1, 33, 3433, 32};

    int n = sizeof(arr) / sizeof(arr[0]);
    quick(arr, 0, n - 1);
    array(arr, n);
    return 0;
}
