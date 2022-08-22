#include<iostream>
using namespace std;
int main(){
    int n=5;
    int d=2;
    int temp[n];
    int k=0;

    int arr[n]={2,4,6,8,10};

    for(int i=d;i<n;i++){
        temp[k]=arr[i];
        k++;
    }


    for(int i=0;i<d;i++){
        temp[k]=arr[i];
        k++;
    }

    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    

    return 0;
}