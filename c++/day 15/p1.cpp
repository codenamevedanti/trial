#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class  Item
{
    int item_id;
    string itemname;
    int price;
    int stock_quantity=50;
 public:
    void accept()
    {
        cout<<"enter the name of item :\n";
        cin>>itemname;
        cout<<"Enter the ID of the item: \n";
        cin>>item_id;
        cout<<"enter the stock Qauntity of items being purchased: \n";
        cin>>stock_quantity;
        try{
            if(stock_quantity>50)
            throw "Stock is not available.";
        }
        catch(int stock_quantity e)
        {
            cout<<"Out of stock!!!!";
        }

        cout<<"enter the price of the item: \n";
        cin>>price; 
        try{
            if(price < 0 || price ==0)
            throw "Price Cannot be negative.";
        }
        catch(int price e)
        {
            cout<<"invalid price!!!!";
        }
    }
    void display()
    {
        cout<<"The name if the item is:"<<itemname<<endl;
        cout<<"The id of the item is "<<item_id<<endl;
        cout<<"The stock of the item is"<<stock_quantity<<endl;
        cout<<"the price of the item is:"<<price<<endl;
        
    }

};


class Bill
{
    int bill_id;
    string customername;
    string list_of_purchased_items;
    int itemcount=0;
    public:

    Bill(int bill_id,string customername,int count)
    {
        bill_id=id;
        customername=cname;
        itemcount=cnt;
        list_of_purchased_items= new Item[itemcount];
    }

    ~Bill()
    {
        delete[]list_of_purchased_items;
    }
     
    void getdata()
    {
        cout<<"enter the bill id: \n";
        cin>>bill_id;
        cin.ignore();

        cout<<"Enter the customer name \n";
        getline(cin,customername);

        cout<<"Enter the list of purchased data: \n";
        getline(cin,list_of_purchased_items);


        
    }
    void putdata()
    {
        cout<<"The id of the bill is:"<<bill_id<<endl;
        cout<<"The name of the customer is :\n"<<customername<<endl;
        cout<<"The list of purchased items :"<<list_of_purchased_items<<endl;
    }

           try
          {
             
            if (bill_id=NULL ||customername=NULL||list_of_purchased_items=NULL)
            throw "Please enter valid values.";
        }
        catch(int bill_id,string customername,string list_of_purchased_items)
        {
            cout<<"Empty bill generation"<<endl;
        }

    
    /*catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }*/
    

    int operator+(Item &i)
    {
    list_of_purchased_items[itemcount]  = i;
    itemcount++;
    return *this;
     }
    

};
int main()
{
    Item i;
    Bill b;
    
    i.accept();
    i.display();
    b.getdata();
    b.putdata();

    int c=operator +(i)

    
    return 0;
}