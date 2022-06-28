#include<iostream>
using namespace std;
int main(){
    int counter=0;
    int arr[5]={1,1,0,1,0};
    for(int i=0;i<5;i++){
        if(arr[i]== 0){
            counter=counter+1;
        }

    }

    for(int i=0;i<counter;i++){
        arr[i]=0;
    }

    for(int i=counter;i<5;i++){
        arr[i]=1;
    }

    for(int i=0;i<5;i++){
        cout<<arr[i];

    }
}