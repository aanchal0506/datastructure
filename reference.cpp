#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
   int a=10;
   int &r=a;//intialisation and declaration is done at the same time else gives error
   //&r=a;-->this throws error
   cout<<"value of a:"<<a<<endl<<"value of r:"<<r<<endl;
   cout<<"changing the value of a"<<endl;
   a=25;
   cout<<"value of a:"<<a<<endl<<"value of r:"<<r<<endl;
    cout<<"changing the value of r"<<endl;
    r=30;
    cout<<"value of a:"<<a<<endl<<"value of r:"<<r<<endl;
    cout<<"hence this proves both r and a are same";
    cout<<"reference do not use memory, it uses same memory as a";
}
