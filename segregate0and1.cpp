//Segregate 0s and 1s
//First solution

#include <iostream>
using namespace std;

void segregate0and1(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        if (arr[s] == 0)
        {
            s++;
        }
        else if (arr[e] == 1)
        {
            e--;
        }
        else if (arr[s] == 1 && arr[e] == 0)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
}

int main()
{
    int arr[] = {0, 0, 1, 1, 0, 1, 0, 0, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    segregate0and1(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

//2nd solution