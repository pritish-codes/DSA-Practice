#include<iostream>
using namespace std;


int firstOccourance(int arr[],int size,int key){

    int start=0;int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;

        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        mid=(start+end)/2;

    }
    return ans;




   


}

int lastOccourance(int arr[],int size,int key){

     int start=0;int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;

        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        mid=(start+end)/2;

    }
    return ans;

}



int main(){
    int arr[6]={1,3,3,5,6,7};

    int left=firstOccourance(arr,6,3);
    cout<<"The first occourance of 3 is"<<left;

    cout<<"The last occourance of 3 is " << lastOccourance(arr,6,3);
    
    



}