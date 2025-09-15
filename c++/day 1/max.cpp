#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements" <<"\t";
    cin>>n;

    int a[n];
    int maxVal; 
        
      cout<<"Enter "<<"\t"<<n<<"\n element";
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 

    maxVal= *(a+0);

     for(int i=1;i<n;i++)
     {
       if (maxVal< *(a+i)){
        maxVal= *(a+i);
       }
       
     }
    
    cout<<"The Maximum value is "<<maxVal;
}
