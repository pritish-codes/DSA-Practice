#include<iostream>
using namespace std;



int f(int n){
    if(n==1)return 1;
    int sum=n+f(n-1);
    return sum;



}

int main(){
    int n;
    cin>>n;
    f(n);
    cout<<f(n);

    return 0;

}