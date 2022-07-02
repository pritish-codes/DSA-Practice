#include<iostream>
using namespace std;


long long int binarySearch(int N){
    int s=0;
     long long int e=N;
       long long int mid=s+(e-s)/2;
     int ans=-1;
    while(s<=e){
       long long int square=mid*mid;
        if(square==N){
            return  mid;
        }
        if(square<N){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
        
        
    }
    return ans;
    
}

double morePrecesion(int N,int precison,int tempSol){

    double factor=1;
    double ans=tempSol;
    for(int i=0;i<precison;i++){
        factor=factor/10;
        for(double j=ans;j*j<N;j=j+factor){
            ans=j;

        }

    }
    return ans;
    

}


int main(){
    int N;
    cout<<"Enter the number";
    cin>>N;
    int tempSol=binarySearch(N);
    cout<<"Ans is "<<morePrecesion(N,15,tempSol); 



    return 0;
}