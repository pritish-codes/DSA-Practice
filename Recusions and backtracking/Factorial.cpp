//Factorial using recursion 

#include<iostream>
using namespace std;


int fact(int n){
    if(n==0)return 1;
    int ans = n*fact(n-1);

}


int main(){
    int n;
    cin >> n;
    fact(n);
    cout<<fact(n);

}