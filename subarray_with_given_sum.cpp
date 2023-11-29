// Given an unsorted array A of size N that contains only positive integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.

// In case of multiple subarrays, return the subarray indexes which come first on moving from left to right.

// Note:- You have to return an ArrayList consisting of two elements left and right. In case no such subarray exists return an array consisting of element -1.

#include <iostream>
#include <vector>
using namespace std;

vector<int> subarraySum(int arr[], int n, int sum)
{

    vector<int> v;

    if (sum == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                v.push_back(++i);
                v.push_back(i);
            }
        }
        v.push_back(-1);
        return v;
    }

    int oursum = 0;
    int l = 0;
    int r = 0;

    while (l <= r)
    {
        if (oursum < sum)
        {
            oursum += arr[r];
            r++;
        }
        else if (oursum > sum)
        {
            oursum -= arr[l];
            l++;
        }
        else
        {
            v.push_back(++l);
            v.push_back(r);
            return v;
        }

        if (r > n)
        {
            v.push_back(-1);
            return v;
        }
    }

    v.push_back(-1);
    return v;
}
int main()
{
    int arr[] = {1, 2, 3, 7, 5};
    int sum = 12;
    int n = sizeof(arr) / sizeof(arr[0]);

   vector<int> ans =  subarraySum(arr, n, sum);

   for(int i = 0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
   }

    return 0;
}