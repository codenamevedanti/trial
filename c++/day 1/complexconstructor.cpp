#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
      Complex();
      Complex(int,int);
      void display() const;
      void setReal(int);
       int getReal() const;
};

void Complex::setReal(int r){
    real=r;
}
int Complex::getReal() const{
    return real;

}

Complex::Complex()
{
    cout<<"In default constructor:"<<endl;
    real=1;
    img=4;

}
Complex::Complex(int r,int i)
{
    cout<<"In para Constructor:"<<endl;
    real=r;
    img=i;
}
void Complex::display() const
{
    cout<<"complex no is:"<<real<<"+"<<img<<"i"<<endl;
}

int main()
 
{
const Complex c1(5,9);
// c1.display();
//c3.setReal();
Complex c3(8,5);
c3.setReal(20);
cout<<"THe real part is: \n"<<c3.getReal()<<endl;
}