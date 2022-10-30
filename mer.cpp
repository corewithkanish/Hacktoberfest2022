using namespace std;
#include <iostream>

void merges(int arr[], int const left, int const mid, int const right)
{

    auto const subone = mid - left + 1;
    auto const subtwo = right - mid;

    auto *leftarr = new int[subone];
    auto *rightarr = new int[subtwo];

    for (int i = 0; i < subone; i++)
    {

        leftarr[i] = arr[left + 1];
    }
    for (int j = 0; j < subtwo; j++)
    {

        rightarr[j] = arr[mid + 1 + j];
    }
    auto indexone = 0, indextwo = 0;
    auto indexmid = left;
    while (indexone < subone && indextwo < subtwo)
    {
        if (leftarr[indexone] <= rightarr[indextwo])
        {
            arr[indexmid] = leftarr[indexone];
            indexone++;
        }
        else
        {

            arr[indexmid] = rightarr[indextwo];
            indextwo++;
        }
        indexmid++;
    }
    while (indexone < subone)
    {
        arr[indexmid] = leftarr[subone];
        indexone++;
        indexmid++;
    }
    while (indextwo < subtwo)
    {
        arr[indexmid] = leftarr[subtwo];
        indexmid++;
        indextwo++;
    }
    delete[] leftarr;
    delete[] rightarr;
}

void nerge(int arr[], int const begin, int const end)
{
    auto mid = begin + (end - begin) / 2;
    if (begin >= end)
        return;
    nerge(arr, begin, mid + 1);
    nerge(arr, mid + 1, end);
    merges(arr, begin, mid, end);
}

void printArray(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        cout << A[i] << " ";
}
int main()
{

    int arr[] = {12, 11, 13, 5, 6, 7};
    auto arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, arr_size);

    nerge(arr, 0, arr_size - 1);

    cout << "\nSorted array is \n";
    printArray(arr, arr_size);

    return 0;
}
