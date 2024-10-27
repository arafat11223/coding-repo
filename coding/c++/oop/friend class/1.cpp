#include <iostream>
using namespace std;
class distance
{

    int meter;
    // friend function
    friend int add(distance obj);

public:
    // friend int add(distance object);
    distance()
    {
        meter = 10;
    }
};
int add(distance obj)
{
    obj.meter += 5;
    return obj.meter;
}
int main()
{
    distance ob;
    cout << "distance = " << add(ob);

    // cout<<"distance= "<<;
}