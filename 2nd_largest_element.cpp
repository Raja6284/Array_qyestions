//Given an array Arr of size N, print second largest distinct element from an array.

#include <iostream>
using namespace std;


int second_largest(int arr[], int size){

    if(size<2){
        return -1;
    }

    int first, second;      //declarint two variable
    first = second = INT32_MIN;     //initializing it with the minimim value

    for(int i = 0; i<size; i++){
        if(arr[i]>first){
            second = first;     //writing in this order is important
            first = arr[i];
        }
        else if(arr[i] >second && arr[i] != first){
            second = arr[i];
        }
    }

    if(second == INT32_MIN){      //this is the condition when all the elements of arry are identical, so there will be no second largest distinct element
        return -1;
    }

    return second;




}
int main(){
    int arr[] = {2,4,1,67,45,89,33};
    int size = sizeof(arr)/sizeof(arr[0]);

    int ans = second_largest(arr,size);     //calling the function

    cout<<"Second largest element of given arr is: "<<ans;
    
    return 0;
    
}