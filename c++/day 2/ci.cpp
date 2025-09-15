#include<iostream>
using namespace std;

int main(){
    int p,n;
    float r;
    float ci;

    cout<<"Enterthe value of principle , years , roi ";
    cin>>p>>n>>r;

    ci = p*(1+r/100) ** n;

}
