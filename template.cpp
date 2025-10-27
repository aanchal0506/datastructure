#include<iostream>
using namespace std;
template <class T>
class Arithmetic{
    private: 
        T a;
        T b;
    public:
        Arithmetic(T a, T b);
        T add();
        T sub();
};
template <class T>
Arithmetic<T>::Arithmetic(T a, T b){
    this->a=a;
    this->b=b;
}
template <class T>
T Arithmetic<T>::add(){
    T c;
    c=a+b;
    return c;
}
template <class T>
T Arithmetic<T>::sub(){
    T c;
    c=a-b;
    return c;
}
int main(){
    Arithmetic<int> ar1(10,5);
    int a=ar1.add();
    cout<<a<<endl;
    int b=ar1.sub();
    cout<<b<<endl;
    Arithmetic<float>ar(10.1,5.2);
    int a1=ar.add();
    cout<<a1<<endl;
    int b1=ar.sub();
    cout<<b1<<endl;
}
