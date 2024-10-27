#include<iostream>
#include<string>
using namespace std;
class myclass
{
public:
    int a;
    string name;


};
int main()
{
    myclass myobj,anotherobj;
    myobj.a=20;
    anotherobj.a=15;
    myobj.name="arafat";
    anotherobj.name="tamim";
    cout<<myobj.a<<" "<<myobj.name<<endl;
    cout<<anotherobj.a<<" "<<anotherobj.name<<endl;
    

}