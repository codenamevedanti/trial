#include<iostream>
using namespace std;

 void area(int,int);
 int main()
 
 {
 	int l,b;
    cout<<"Enter the value of length and breadth is"<<endl;
    cin>>l>>b;
    area(l,b);
 }
 
 void area(int l,int b)
 {
 	int r= l*b;
 	cout<<"The area of Rectangle is \n"<<r;
 }