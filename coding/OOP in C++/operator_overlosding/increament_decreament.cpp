#include<iostream>
using namespace std;
class test
{
    int n;
    public:
    test()
    {
        n=0;
    }
    void operator ++()
    {
        n++;
    }
    void operator ++(int)
    {
        n++;
    }
    void operator --()
    {
        n--;
    }
    void show()
    {
        cout<<"the value of n: "<<n<<endl;

    }

};
int main()
{
    test obj1;
    ++obj1;
    obj1.show();
    obj1++;
    obj1.show();
    --obj1;
    obj1.show();


}