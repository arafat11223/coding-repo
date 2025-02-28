#include <iostream>
using namespace std;
class animal
{
    int a = 10;

protected:
    int b = 20;
    

public:
    void show()
    {

        cout << "animal class" << endl;
        cout << a * b << endl;

    }
};
class dog : protected animal
{
    int c = 2;

public:
int d=6;

    void display()
    {
        b=3;
        cout << "dog class" << endl;
        cout << c*d*b << endl;
        show();
        
        
    }
};
int main()
{
    dog ob;
    ob.display();
    //cout<<ob.d<<endl;
    //cout<<ob.a<<endl;
    
   
}
