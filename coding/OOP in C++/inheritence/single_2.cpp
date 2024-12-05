#include<iostream>
using namespace std;
class parent
{
    public:
    int id_p;
    void printid_p()
    {
        cout<<"base id: "<<id_p<<endl;

    }
};
class child: public parent
{
    public:
    int id_c;
    void printid_c()
    {
        cout<<"derived id: "<<id_c<<endl;

    }
};
int main()
{
    child ob;
    ob.id_p=10;
    ob.printid_p();
    ob.id_c=20;
    ob.printid_c();
}
