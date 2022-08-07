#include<iostream>
#include<stdio.h>

int fun(int n){
    if(n>100)
    return n-10;
    else{
        return fun(fun(n+11));
    }
}

using namespace std;
int main(){
    int r;
    r=fun(95);
    cout<<r<<endl;

    return 0;
}