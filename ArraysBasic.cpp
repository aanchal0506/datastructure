#include <iostream>
using namespace std;

int main() {
    int A[5];
    cout << "These are performed on array A" << endl;
    A[0] = 1;
    A[1] = 2;
    A[2] = 3;
    cout << "Size of array A: " << sizeof(A) << endl;
    printf("%d\n", A[2]);

    int B[5] = {2, 3, 4, 5, 6};
    int C[] = {1, 2, 3};
    cout << "Size of array C: " << sizeof(C) << endl;

    int A1[10] = {1, 2, 3, 4, 5, 6};
    cout << "These are performed on array A1" << endl;
    cout << "Size of array A1: " << sizeof(A1) << endl;
    cout << A1[8] << endl;  // May print 0 or garbage
    cout << A1[7] << endl;  // May print 0 or garbage

    for (int i = 0; i < 10; i++) {
        cout << A1[i] << " ";
    }
    cout << endl;
    cout<<"This is array A:"<<endl;
    cout<<"last two values are garbage value(0 can be a garbage value)"<<endl;
    for(int x:A){
        cout<<x<<" ";
    }
    cout<<endl;
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    
    int A2[n]={1,2};//sometimes it throws error 
    for(int x:A2){
        cout<<x<<" ";
    }
    return 0;
}

