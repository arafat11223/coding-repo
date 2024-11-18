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
class derived: public base
{
    public:
    void show()
    {
        cout << "Public: " << public_var << endl;       // Accessible
        cout << "Protected: " << protected_var<< endl;  // Accessible
        // cout << "Private: " << privateVar << endl;  // Error: Not accessible
        //cout<<protected_var; //acceseble
    }
};
int main()
{
    derived ob;
    ob.show();
    cout<<ob.public_var<<endl;
    //cout<<ob.protected_var<<endl;//error
}