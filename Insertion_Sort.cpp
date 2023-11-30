// Insert an element from an unsorted array to its correct position in sorted array

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
    }
}
int main()
{

    int n;
    cout << "Enter the length of the arrray:";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << endl;
    cout << "Following is the sorted array:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}