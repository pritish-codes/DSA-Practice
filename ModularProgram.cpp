#include<iostream>
using namespace std;

int area(int length,int breadth){

    return length*breadth;

}

int perimeter(int length,int breadth){
   int p = 2*(length+breadth);
   return p;
    
}


int main(){
    int length=0,breadth=0;
    printf("Enter length and breadth\n");
    cin>>length>>breadth;

    int a=area(length,breadth);
    int peri=perimeter(length,breadth);

    printf("The area is %d\nThe perimeter is %d\n",a,peri);

    return 0;
}