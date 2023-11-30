// Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.Return true if exits otherwise fale.

#include <iostream>
#include <algorithm>
using namespace std;

int tripletSum(int arr[], int n, int sum)
{
    // first we need to sort the arrray;
    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1;
        int r = n - 1;

        while (l < r)
        {
            if (arr[i] + arr[l] + arr[r] == sum)
            {
                return true;
            }
            else if (arr[i] + arr[l] + arr[r] < sum)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }

    return false;
}
int main()
{
    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 13;

    cout<<tripletSum(arr, n, X);

}