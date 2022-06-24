//printing numbers from n to 1 using recursion


#include<iostream>
using namespace std;

void print(int n,int i){
    if(n<i)return;
    cout<<n<<endl;
    print(n-1,i);

}

int main(){
    int n;
    cin>>n;
    print(n,1);

    return 0;
}