// Rearrange an array in maximum and minimum form using two pointer technique

//this solution is taking O(n) auxiliary space but we should try solving it with O(1) extra space

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans[size];

    int s = 0;
    int e = size - 1;

    bool flag = true;

    for (int i = 0; i < size; i++)
    {

        if (flag)
        {
            ans[i] = arr[e--];
        }
        else
        {
            ans[i] = arr[s++];
        }

        flag = !flag;
    }

    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}