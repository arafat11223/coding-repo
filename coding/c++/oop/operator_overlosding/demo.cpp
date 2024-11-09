#include<iostream>
using namespace std;
class test
{
    int n;
    public:
    void get()
    {
        cout<<"enter number";
        cin>>n;
    }
    void operator +(test obj)
    {
        test t;
        t.n=n+ obj.n;
        cout<<"the addition is : "<<t.n<<endl;  
    }
     void operator -(test obj)
    {
        test t;
        t.n=n- obj.n;
        cout<<"the addition is : "<<t.n<<endl;  
    }
};
int main()
{
    test obj1;
    test obj2;
    obj1.get();
    obj2.get();
    obj1+obj2;
    obj1-obj2;
    
}