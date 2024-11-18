#include<iostream>
using namespace std;
class base 
{
    int private_var=1;
    public:
    int public_var=2;
    protected:
    int protected_var=3;
};
class derived: private base
{
    public:
    int c=9;
    void show()
    {
        cout << "Public (now private): " << public_var << endl; // Accessible
        cout << "Protected (now private): " << protected_var << endl; // Accessible
        // cout << "Private: " << private_eVar << endl;           // Error: Not accessible
        cout<<public_var;
    }
};
int main()
{
    derived ob;
    ob.show();
    cout<<ob.c;
    //cout<<ob.public_var; error public var base class a private member
}