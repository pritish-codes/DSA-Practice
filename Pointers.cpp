#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int main(){

    struct rectangle{
        int length;
        int breadth;
    };

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rectangle *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;

   
    
  



    return 0;
}