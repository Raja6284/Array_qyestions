//Find the largest three distinct elements in an array

#include<iostream>
using namespace std;


int largest_3_distinct(int arr[],int size){

    int first,second,third;     //declaring three variable 
    first = second= third = INT32_MIN;      //initialing all three variable to INT_MIN

    for(int i = 0; i<size; i++){
        if(arr[i] > first){
            third = second;     //maintining this order is important bcz our answer will be , first>second>third
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first){
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third && arr[i] != second){
            third = arr[i];
        }
    }

    cout<<first<<" "<< second<<" " << third ;       //printing the largest three elements
}
int main(){
    int arr[] = {10,411,3,500,23,90};          //providing ther array with element,we can also take input from the user
    int size = sizeof(arr)/sizeof(arr[0]);

    largest_3_distinct(arr,size);       //calling the function which will return the largest three distinct elements

    return 0;
}