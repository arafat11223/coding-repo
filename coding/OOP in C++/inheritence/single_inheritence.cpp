#include<iostream>
using namespace std;
class parent
{
    public:
    parent()//constructor
    {
        cout<<"parent class"<<endl;
    }
};
class child: public parent
{
    public:
    child()//constructor
    {
        cout<<"child class"<<endl;
    }


};
int main()
{
    child ob;
}