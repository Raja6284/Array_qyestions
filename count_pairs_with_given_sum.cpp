// count pairs with given sum

#include <iostream>
using namespace std;

int sumPair(int arr[], int n, int k)
{

    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                count++;
            }
        }
    }

    return count;
}
int main()
{
    // int arr[] = {1,5,7,1};
    int arr[] = {1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    cout << sumPair(arr, n, k);

    return 0;
}