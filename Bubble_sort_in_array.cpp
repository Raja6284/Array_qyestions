//write the algorithim for bubble sort

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    for(int i = 1; i<n; i++){
        bool swapped = false;
        for(int j = 0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }

    // for(int i =0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
}
int main(){
    
    int arr[] = {2,1,6,57,43,90,11,8,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,size);

    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// traverse from left and compare adjacent elements and the higher one is placed at right side. 
// In this way, the largest element is moved to the rightmost end at first. 
// This process is then continued to find the second largest and place it and so on until the data is sorted.