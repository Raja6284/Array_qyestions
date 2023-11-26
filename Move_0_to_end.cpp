//Question:- Move all zero to end of array

#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,0,4,3,0,5,0};
    int size = sizeof(arr)/sizeof(arr[0]);

int count = 0;

//traverse whole the array and bring all the non-zero element to the left
    for(int i = 0;i<size; i++){

        if(arr[i] != 0){
            arr[count] = arr[i];
            count++;
        }

        
    }
//here, count is at the position of first non-zero element
    while(count<size){
            arr[count] = 0;     //filing rest indices of the array with 0
            count++;
        }

//printint the array
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}