#include <iostream>
using namespace std;
class class1
{
   

public: 
    int num1;
    friend int add(class1, class2);
    class1()
    {
        num1 = 12;
    }
};
class class2
{

public:
int num2;

    friend int add(class1, class2);
    class2()
    {
        num2 = 20;
    }
};
int add(class1 obj1, class2 obj2)
{
    return (obj1.num1 + obj2.num2);
}
int main()
{
    class1 obj1;
    class2 obj2;
    cout << "sum : " << add(obj1, obj2)<<endl;
}
