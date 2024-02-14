/*You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should rearrange the elements of nums such that the modified array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.*/

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
        //
        vector<int> positive,negative;

        for(auto i:nums){
            if(i<0){
                negative.push_back(i);
            }else{
                positive.push_back(i);
            }
        }

        vector<int> ans;
        for(int i = 0; i<positive.size(); i++){
            ans.push_back(positive[i]);
            ans.push_back(negative[i]);
        }

        return ans;

    }

    int main(){
        vector<int> arr;
        arr = {3,1,-2,-5,2,-4};

        arr = rearrangeArray(arr);  //assigning the result back to arr


        for(int i = 0; i<arr.size(); i++){
            cout<<arr[i]<<" ";
        }
    }