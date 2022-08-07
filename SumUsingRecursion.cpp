#include<iostream>
using namespace std;

int sum(int n){

    if(n==0){
        return 0;
    }

    else
    return sum(n-1)+n;

    

}


int main(){

    int n;
    cout<<"Enter a natural number"<<endl;
    cin>>n;
    int Sum=sum(n);
    cout<<Sum;

    return 0;
}