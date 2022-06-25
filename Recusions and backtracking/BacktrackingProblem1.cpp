//Printing numbers from  1-n using backtracking

#include<iostream>
using namespace std;


void f(int i,int n){
    if(i<1)return;
    f(i-1,n);
    cout<<i<<endl;
}


int main(){
    int n;
    cin>>n;
    f(n,n);
    


}