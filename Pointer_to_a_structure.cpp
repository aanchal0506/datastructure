#include<iostream>
#include<stdlib.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main(){
    cout<<"struct r in stack"<<endl;
    struct rectangle r={10,5};
    cout<<"dimension using .normal"<<endl;
    cout<<"length="<<r.length<<endl;
    cout<<"breadth="<<r.breadth<<endl;
    cout<<"dimension using ->pointer"<<endl;
    struct rectangle *p=&r;
    p->length=20;
    p->breadth=30;
    cout<<"length="<<p->length<<endl;
    cout<<"breadth="<<p->breadth<<endl;
    cout<<"struct r in heap"<<endl;
    struct rectangle *p1;
    p1=(struct rectangle*)malloc(sizeof(struct rectangle));
  //p1=new rectangle;
    p1->length=22;
    p1->breadth=32;
    cout<<"length="<<p1->length<<endl;
    cout<<"breadth="<<p1->breadth<<endl;
}
