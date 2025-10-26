
#include <iostream>
using namespace std;
int * fun(int n){
    int *p;
    p=(int *)malloc(n*sizeof(int));
    //p=new int[n];
    for(int i=0;i<n;i++){
       p[i]=i+1;
    }
    return p;//returning the pointer to the array
}
void fun1(int A[]/*A**/, int size) {
    cout <<"size of array"<<size << endl;
    for(int i=0;i<5;i++){
        cout<<A[i]<<endl;
    }
    A[0]=15;
}
//for each loop will not work in fun1 since we are passing pointer to the array not the array itself
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    fun1(arr, size);
    cout<<"arrays in main method"<<endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
    cout<<"arrays with dynamic method"<<endl;
    int *ptr,sz=5;
    ptr=fun(sz);
    for (int i = 0; i < sz; i++) {
        cout << ptr[i] << endl;
    }
    sz=7;
     ptr=fun(sz);
    cout<<"arrays with dynamic method with size 7"<<endl;
    for (int i = 0; i < sz; i++) {
        cout << ptr[i] << endl;
    }
    
}
