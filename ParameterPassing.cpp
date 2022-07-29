#include<iostream>
using namespace std;

void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
     

}



int main(){

    




    int a=5;
    int b=7;
    swap(a,b);
    cout<<"a is"<<a<<endl;
    cout<<"b is"<<b<<endl;



 }