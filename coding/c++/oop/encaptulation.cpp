#include <iostream>
using namespace std;
class abc
{
    int x;

public:
    void set(int n)
    {
        x = n;
    }
    int get()
    {
        return x;
    }
};
int main()
{
    abc ob1;
    ob1.set(3);
    cout<< ob1.get()<<endl;
}