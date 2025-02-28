#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read()
    {
        cout << "enter a binary number" << endl;
        cin >> s;
    }
    void chk_bin();
};
void binary ::chk_bin()
{
    
}

int main()
{
    binary ob;
    ob.read();
    ob.chk_bin();
}