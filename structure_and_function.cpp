monolithic programming 
#include <iostream>
#include <stdio.h>
using namespace std;
//area and parameter of rectangle and take input from the user
int main(){
    //monolithic
    int length=0;
    int breadth=0;
    cout<<"enter length and breadth"<<endl;
    cin>>length>>breadth;
    int area=length*breadth;
    int perimeter=2*(length+breadth);
    cout<<"area:"<<area<<" perimeter:"<<perimeter;
    return 0;
}





modular programming 
#include <iostream>
#include <stdio.h>
using namespace std;
//area and parameter of rectangle and take input from the user
int area(int length,int breadth){
    return length*breadth;
}
int perimeter(int length,int breadth){
    return 2*(length+breadth);
}
int main(){
    
    int length=0;
    int breadth=0;
    cout<<"enter length and breadth"<<endl;
    cin>>length>>breadth;
    int area1=area(length,breadth);
    int perimeter1=perimeter(length,breadth);
    cout<<"area:"<<area1<<" perimeter:"<<perimeter1;
    return 0;
}


//structure and function
#include <iostream>
#include <stdio.h>
using namespace std;
struct rect{
    int length;
    int breadth;
};
//area and parameter of rectangle and take input from the user
void initialise(struct rect *r,int len,int bre){
  r->length=len;
  r->breadth=bre;
}
int area(struct rect r){
    return r.length*r.breadth;
}
int perimeter(struct rect r){
    return 2*(r.length+r.breadth);
}
int main(){
    struct rect r={0,0};
    int l,b;
    cout<<"enter length and breadth"<<endl;
    cin>>l>>b;
    initialise(&r,l,b);
    int area1=area(r);
    int perimeter1=perimeter(r);
    cout<<"area:"<<area1<<" perimeter:"<<perimeter1;
    return 0;
}


//object oriented programming using class and constructor
#include <iostream>
#include <stdio.h>
using namespace std;
class rect{
private:
    int length;
    int breadth;
public:
rect(){
    length=0;
    breadth=0;
}//default constructor
//area and parameter of rectangle and take input from the user
rect(int len,int bre){
  length=len;
  breadth=bre;
}//parameterized constructor
int area(){
    return length*breadth;
}
int perimeter(){
    return 2*(length+breadth);
}
int getlength(){
    return length;
}
void setlength(int l){
    length=l;
}
int getbreadth(){
    return breadth;
}
void setbreadth(int b){
    breadth=b;
}
~rect(){};//destructor
};
int main(){
    int l,b;
    cout<<"enter length and breadth"<<endl;
    cin>>l>>b;
    rect r(l,b);
    int area1=r.area();
    int perimeter1=r.perimeter();
    cout<<"area:"<<area1<<" perimeter:"<<perimeter1;
    
    return 0;
}
