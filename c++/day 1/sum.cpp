#include<iostream>
using namespace std;

 void add(int,int);
 int main()
 
 {
 	int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    add(a,b);
 }
 
 void add(int a,int b)
 {
 	int r= a+b;
 	cout<<"The sum of tow numbers is \n"<<r;
 }