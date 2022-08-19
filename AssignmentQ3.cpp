

#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n=10;
    int arr[n]={15,25,12,8,6,99,55,70,7,38};

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
            cout<<arr[i]<<endl;
        }



}
