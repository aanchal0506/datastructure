// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int expo(int m,int n){
    if (n==0){
        return 1;
        }
    else{
        return m*expo(m,n-1);
    }
} 
int pow(int m,int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return pow(m*m,n/2);
    }
    else{
        return m*pow(m*m,(n-1)/2);
    }
}
int main() {
  int r=expo(2,2);
  cout<<r<<endl;
  int r1=pow(2,9);
  cout<<r1<<endl;
  
}
