#include <iostream>
using namespace std;
class myclass
{
public:
    int x;
    static int count;
    // default constructor
    myclass()
    {
        count++;
    }
};
int myclass::count = 0;
int main()
{
    cout << "initial count: " << myclass::count << endl;
    myclass obj1, obj2;
    cout << "count after two object: " << myclass::count << endl;
}