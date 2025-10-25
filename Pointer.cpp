#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int a=10;
    cout<<"value of a:"<<a<<endl;
    int *p;
    p=&a;
    cout<<"value of p:"<<p<<endl;
    cout<<"printing value of a using pointer:"<<*p<<endl;
    cout<<"Pointer to an array:"<<endl;
    cout<<"creating array in stack"<<endl;
    int *p1;
    int *p2;
    int A[5]={1,2,3,4,5};//created inside the stack
    p1=A;//u need not give & for array(syntax)
    p2=&A[0];//for a particular array element give &
    cout<<"accessing array elements using pointer";
    for(int i=0;i<5;i++){
        cout<<p1[i]<<endl;//in case of array pointer acts as an array
    }
    cout<<"creating array in heap  using malloc c"<<endl;
    int *p3;
    p3=(int *)malloc(5*sizeof(int));
    p3[0]=10;
    p3[1]=11;
    p3[2]=12;
    p3[3]=13;
    p3[4]=14;
    for(int i=0;i<5;i++){
        cout<<p3[i]<<endl;//in case of array pointer acts as an array
    }
    delete [] p3;
    cout<<"creating array in heap  using new c++"<<endl;
    int *p4;
    p4=new int[5];
    p4[0]=10;
    p4[1]=11;
    p4[2]=12;
    p4[3]=13;
    p4[4]=14;
    for(int i=0;i<5;i++){
    cout<<p4[i]<<endl;//in case of array pointer acts as an array

    }
    delete [] p4;
    //you should delete memory after use 
    //free(p4);
}
//size of pointer 
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int *p1;
    float *p2;
    char *p3;
    double *p4;
    struct rectangle *p5;
    cout<<"size of int pointer:"<<sizeof(p1)<<endl;
    cout<<"size of float pointer:"<<sizeof(p2)<<endl;
    cout<<"size of char pointer:"<<sizeof(p3)<<endl;
    cout<<"size of double pointer:"<<sizeof(p4)<<endl;
    cout<<"size of struct pointer:"<<sizeof(p5)<<endl;
   //whatever the datatype of pointer is ,it will take 8 bytes
}
