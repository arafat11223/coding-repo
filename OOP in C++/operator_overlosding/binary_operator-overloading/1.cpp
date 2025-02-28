#include<bits/stdc++.h>
using namespace std;
class test 
{
    
    bool a;
    public:
    test(bool i)
    {
        a=i;
    }
    bool operator &&(test &ob)
    {
        return(a&&ob.a);
    }
    friend bool operator ||(test &ob1,test &ob2);
    

    

};
bool operator ||(test &ob1,test &ob2)
{
    return(ob1.a||ob2.a);

}
int main()
{
    test obj1(true),obj2(9),obj3(6);
    if(obj1 && obj2)
    {
        cout<<"true"<<endl;
    }
    else 
    {
        cout<<"false"<<endl;
    }
    if(obj1 || obj2)
    {
        cout<<"true"<<endl;
    }
    else 
    {
        cout<<"false"<<endl;
    }
}