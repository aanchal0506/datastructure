
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int add(int a, int b){
    int z;
    z=a+b;
    return (z);
}
void add2(int e, int f){
    int c=e+f;
    cout<<"sum of two integer:"<<c<<endl;
}
int main() {
    int x,y;
    x=10;
    y=20;
    int sum=add(x,y);
    cout<<"sum of two integer:"<<sum<<endl;
    add2(x,y);
}
