#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout.fill('-');
    cout.setf(ios::left);

    cout.width(15);
    cout << "Name";

    cout.width(10);
    cout << "Age";

    cout.width(15);
    cout << "Country" << endl;

    cout.fill(' '); // ফিল রিসেট
    cout.width(15);
    cout << "Alice";

    cout.width(10);
    cout << 25;

    cout.width(15);
    cout << "USA" << endl;

    return 0;

}