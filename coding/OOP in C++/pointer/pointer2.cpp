#include<iostream>
using namespace std;
class shop
{
    int id;
    float price ;
    public:
    void setdata(int a,float b)
    {
        id=a;
        price =b;
    }
    void getdata()
    {
        cout<<"id : "<<id<<endl;
        cout<<"price : "<<price<<endl;
    }
};
int main()
{
    shop *ptr=new shop[4];
    shop *ptrtemp=ptr;
    int p;
    float q;
    for(int i=0;i<4;i++)
    {
        cout<<"id and price of item :"<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for(int j=0;j<4;j++)
    {
        cout<<"item number: "<<j+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;

    }

}