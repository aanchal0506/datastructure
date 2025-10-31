// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int funA(int n){
    if (n>100){
        return n-10;
        }
    else{
        return funA(funA(n+11));
    }
} 

int main() {
  int r=funA(95);
  cout<<r<<endl;
}
