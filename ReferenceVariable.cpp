#include<iostream>
using namespace std;
int main(){
    int a=10;
//    & is used to declare referance variable
//    referance variables should be initialised and declared together;

    int &r=a;
    a=25;
    r=10;
    cout<<a<<endl<<r;



    return 0;
}