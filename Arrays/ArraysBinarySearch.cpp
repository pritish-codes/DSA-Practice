#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int mid=((start+end)/2);

    while(start<=end){
        if(arr[mid]==key)
        return mid;

        if(key>arr[mid]){
            start=mid+1;

        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;

        return -1;


    }

    
}


int main(){
    int arr1[6]={2,4,8,19,23,34};
    int arr2[5]={3,8,12,19,91};

    int index = binarySearch(arr1,6,27);

    cout<<"The index of 27 is"<<index<<endl;








}