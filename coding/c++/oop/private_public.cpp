#include <iostream>
using namespace std;
class emp
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
        cout << "c=" << c << endl;
        cout << "d=" << d << endl;
        cout << "e=" << e << endl;
    }
};
void emp::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    emp ob;
    ob.d = 6;
    ob.e = 9;
    // ob.a=8;
    ob.setdata(1, 2, 4);
    ob.getdata();
}