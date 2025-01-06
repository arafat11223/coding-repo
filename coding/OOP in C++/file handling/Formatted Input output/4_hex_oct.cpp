#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=255;
    cout.setf(ios::showbase);
    cout.setf(ios::dec,ios::basefield);
    cout<<"decimal: "<<n<<endl;

    cout.setf(ios::hex,ios::basefield);
    cout<<"hexadecimal: "<<n<<endl;

    cout.setf(ios::oct,ios::basefield);
    cout<<"octal: "<<n<<endl;

    cout.setf(ios::hex,ios::basefield);
    cout.setf(ios::uppercase);
    cout.setf(ios::hex,ios::basefield);
    cout<<"hexadecimal uppercase: "<<4576<<endl;





}