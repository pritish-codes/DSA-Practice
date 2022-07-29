#include<iostream>
#include<stdio.h>
using namespace std;



void fun(int A[],int n){
    int i;
    cout<<"The array is"<<endl;
    for(int i=0;i<n;i++){
        printf(" %d",A[i]);
    }


}

int main(){
    int A[5]={2,4,6,7,20};
    fun(A,5);
}