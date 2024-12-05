#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    void display()
    {
        //a=4;
        cout<<"value of a: "<<a<<endl;
    }


};
class derived : public base
{
    public:
    void displaymember()
    {
        display();
    }
    void modifymember(int b)
    {
        a=b;

    }

};
int main()
{
    derived obj;
     obj.a=10;
    obj.display();
    obj.modifymember(20);
    obj.displaymember();
}