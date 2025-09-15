#include<iostream>
using namespace std;
void swap(int,int);

int main(){
    int a=10,b=20;
    cout<<"before swapping \n" ;
    cout<<"a ="<<a<<"\t"<<"b ="<<b;
    swap(&a,&b);
    cout<<"\t"<<"After Swapping \n";
    return 0;
}

void swap(int* p , int* q ){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;

    cout<<"\t"<<"In swap function \n" ;
    cout<<"p ="<<p<<"\t"<<"q ="<<q;
    
}