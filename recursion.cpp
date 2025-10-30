#include <iostream>
using namespace std;
void fun(int n){
    if(n>0){
    fun(n-1);
    cout<<n<<endl;
    }
}
int main() {
   int x=3;
   fun(x);
}
//
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void fun(int n){
    if(n>0){
    
    cout<<n<<endl;
    fun(n-1);
    }
}
int main() {
   int x=3;
   fun(x);
}
//static variable in recursion
#include <iostream>
using namespace std;
int fun(int n){
    int static x=0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main() {
   int x=5;
   int a=fun(x);
   cout<<a;
}
//global variable in recursion 
#include <iostream>
using namespace std;
int x=0;
int fun(int n){
    
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main() {
   int x=5;
   int a=fun(x);
   cout<<a;
}
