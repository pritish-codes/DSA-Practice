#include<iostream>
#include<stdio.h>
using namespace std; 

struct Rectangle
{
    /* data */
    int length;
    int breadth;



int area(struct Rectangle r){

    return r.length*r.breadth;

}

int perimeter(struct Rectangle r){
   int p = 2*(r.length+r.breadth);
   return p;
    
}
};


int main(){
    Rectangle r={0,0};
    printf("Enter length and breadth\n");
    cin>>r.length>>r.breadth;

    int a=area(r);
    int peri=perimeter(r);

    printf("The area is %d\nThe perimeter is %d\n",a,peri);

    return 0;
}