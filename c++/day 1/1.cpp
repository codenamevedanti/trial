	#include<iostream>
	using namespace std;
	
	class Cdate
	 {
	    int dd, mm, yy;
		public:
		  void accept();
		  void display();
		  void setDd(int);
		  int getMm();
		  	
	};
	
	void Cdate::accept(){
		  cout<<"accept date, month and year";
		  cin>>dd>>mm>>yy;

	}
     
   	void Cdate::display(){
		  cout<<"date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
	}
	
	void Cdate::setDd(int d){
		 dd=d;
	} 
	 
	int Cdate::getMm(){
		return mm;
	}
	
	int main()
	{
		 Cdate c1;
		 
		 
		 c1.accept();
		 c1.display();
		 c1.setDd(23);
		 c1.getMm();
         return 0;
	}