//Move all zeros to end of the array

#include <iostream>
using namespace std;


void move_zero(int arr[], int n){
    int j = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] != 0){
            arr[j] = arr[i];
            j++;
        }
    }

    for(int i = j; i<n; i++){
        arr[i] = 0;
    }
}
int main(){
    int arr [] = {3,5,0,0,4,0,1,0,7,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    move_zero(arr,size);

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}