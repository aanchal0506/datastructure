// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int add_pass_by_value(int a, int b){
    int z;
    z=a+b;
    return (z);
}
int add_pass_by_address(int *t,int *u){
    int sum;
    sum=*t+*u;
    return sum;
}
int add_pass_by_reference(int &x,int &y){
    int sum;
    sum=x+y;
    return sum;
}
void swap_pass_by_address(int *t,int *u){
    int sum;
    sum=*t;
    *t=*u;
    *u=sum;
}
int add_pass_by_mixture(int &x,int *y){
    int sum;
    sum=x+*y;
    return sum;
}
int main() {
    int i=10;
    int j=20;
    int sum1=add_pass_by_value(i,j);
    int sum2=add_pass_by_address(&i,&j);
    int sum3=add_pass_by_reference(i,j);
    cout<<"add_pass_by_value:"<<sum1<<endl;
    cout<<"add_pass_by_address:"<<sum2<<endl;
    cout<<"add_pass_by_reference:"<<sum3<<endl;
    cout<<"swap_pass_by_address:"<<endl;
    swap_pass_by_address(&i,&j);
    cout<<"value of i:"<<i<<endl;
    cout<<"value of j:"<<j<<endl;
    int sum4=add_pass_by_mixture(i,&j);
    cout<<"add_pass_by_mixture:"<<sum4<<endl;
}
