#include <iostream>
using namespace std;

class Base {
public:
    int publicVar = 1;   // Public member
protected:
    int protectedVar = 2; // Protected member
private:
    int privateVar = 3;   // Private member
};

class Derived : protected Base {
public:
    void show() {
        cout << "Public (now protected): " << publicVar << endl; // Accessible
        cout << "Protected: " << protectedVar << endl;           // Accessible
        // cout << "Private: " << privateVar << endl;            // Error: Not accessible
    }
};

int main() {
    Derived obj;
    obj.show();
    // cout << obj.publicVar << endl; // Error: Now protected, not accessible
    return 0;
}