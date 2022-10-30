#include <iostream>
using namespace std;

int search(int arr[], int n, int x)
{

    for (int i = 0; i < n; i++)

        if (arr[i] == x)

            return i;

    return -1;
}   

int main()
{
    int arr[] = {10, 3, 7, 8, 2, 89};
    int x = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = search(arr, n, x);
   
    if (result == -1)
        cout << "Not available";
    else
        cout << "Available at " << result << endl;

    return 0;
}
