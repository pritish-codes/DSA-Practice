#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return factorial(n-1)*(n);
    }
}
int main(){
    int ans,n;
    cout<<"Enter n"<<endl;
    cin>>n;
    ans=factorial(n);
    cout<<ans;

    return 0;
}