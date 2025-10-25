#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
    char x;//for character it is assigning 4 bytes but it will only use 1 byte.This method of assigning extra bytes to a datatype for ease of calculation is called padding 
}/*r1,r2,r3*/;
//struct rectangle r1,r2,r3;
int main(){
   //struct rectangle r1,r2,r3;
   struct rectangle r1={10,5};
   cout<<"Size of struct rectangle is: "<<sizeof(r1)<<endl;
   cout<<"length of rectangle:"<<r1.length<<endl<<"breadth of rectangle:"<<r1.breadth<<endl;
   cout<<"Changing the value of length and breadth :"<<endl;
   r1.length=15;
   r1.breadth=20;
   cout<<"length of rectangle:"<<r1.length<<endl<<"breadth of rectangle:"<<r1.breadth<<endl;
}
