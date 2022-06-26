#include<iostream>
using namespace std;





int main() {
    //declare
    int arr[10];


    //accessing an array
     cout<<"Value at 20 index is "<< arr[20];



     //Initialising an array

     int second[3]={5,7,11};

     //accessing an element

     cout<<endl<<"Value at index 1 is "<<second[1];

   
   
  
int third[15] = {2,7};

    int n = 15;
    //printArray(third, 15);
    int thirdSize = sizeof(third)/sizeof(int);
    cout<<" Size of Third is " << thirdSize <<endl;

    //initialising all locations with 0
    int fourth[10] = {0};

    n = 10;
    //printArray(fourth, 10);

    //initialising all locations with 1 [not possible with below line]
    int fifth[10] = {1};

    n = 10;
    //printArray(fifth, 10);

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<" Size of Fifth is " << fifthSize <<endl;
    

    char ch[5] = {'a', 'b', 'c', 'r', 'p'}; 
    cout << ch[3] << endl;

    cout<< " printing the array " << endl;
    //print the array
    for(int i =0; i<5; i++) {
        cout << ch[i] << " ";
    }
    cout<< " printing DONE " << endl;
    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];


    cout << endl << " Everything is Fine " << endl << endl;

    return 0;
}