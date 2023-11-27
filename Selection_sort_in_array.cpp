// Use Selection sort algorithim to sort an array

#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }
        }
                swap(arr[minIndex], arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[] = {45, 7, 2, 94, 33, 52, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, n);

    return 0;
    return 0;
}