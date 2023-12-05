// Given an array Arr of positive integers of size N where every element appears even times except for one. Find that number occuring odd number of times.

#include <iostream>
using namespace std;

int singleNumber(int arr[], int n)
{

    // using xor(^) oprator
    // a^a = 0;
    // a^0 = a;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}
int main()
{
    int arr[] = {1, 1, 5, 3, 5, 3, 3};
    int N = sizeof(arr) / sizeof(arr[0]);

    singleNumber(arr, N);

    return 0;
}