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
    myclass myobj;
    myobj.a=20;
    myobj.name="arafat";
    cout<<myobj.a<<" "<<myobj.name;

}