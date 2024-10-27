#include<iostream>
using namespace std;
class myclass 
{
    string name;
    public:
    myclass(string n)
    {
        name=n;
        cout<<name<<endl;
    }
    ~myclass()
    {
        cout<<"destuctor called"<<endl;
    }
};
int main()
{
    myclass ob("arafat");
    myclass ob1("tamim");
}

