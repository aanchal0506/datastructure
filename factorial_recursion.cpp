// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int fact(int n){
    if (n==0){
        return 1;
        }
    else{
        return fact(n-1)*n;
    }
} 
int Ifact(int n){
    int s=1;
    if (n==0){
        return 1;
    }
    else{
        for(int i=1;i<=n;i++){
            s=s*i;
        }
        return s;
    }
}
int main() {
  int r=fact(5);
  cout<<r<<endl;
  int r1=Ifact(5);
  cout<<r1<<endl;
}
