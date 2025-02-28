#include <iostream>
using namespace std;

int main() {
    // I. Display hexadecimal 255 with width 10 and fill '0'
    int hexValue = 255;
    cout.setf(ios::hex, ios::basefield); // Set hexadecimal format
    cout.setf(ios::left, ios::adjustfield); // Align to the right
    cout.fill('0'); // Fill with '0'
    cout.width(10); // Set width to 10
    cout << "Hexadecimal: " << hexValue << endl;

    // 2. Show octal 493 with width 10 and fill '0'
    int octValue = 493;
    cout.setf(ios::oct, ios::basefield); // Set octal format
    cout.setf(ios::right, ios::adjustfield); // Align to the right
    cout.fill('0'); // Fill with '0'
    cout.width(10); // Set width to 10
    cout << "Octal: " << octValue << endl;

    // 3. Present the float value 123456.789 with width 10 and precision 2
    float floatValue = 123456.789;
    cout.setf(ios::fixed, ios::floatfield); // Set fixed-point notation
    cout.setf(ios::right, ios::adjustfield); // Align to the right
    cout.precision(2); // Set precision to 2
    cout.width(10); // Set width to 10
    cout.fill(' '); // Fill with spaces (default)
    cout << "Float: " << floatValue << endl;

    return 0;
}