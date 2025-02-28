#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=255;
    cout<<"hexadecimal: ";
    cout<<setw(10)<<setfill('0')<<hex<<n<<endl;
    cout<<"octal: ";
    cout<<setw(10)<<setfill('0')<<oct<<493<<endl;
    cout<<"float value: ";
    float f=123456.789;
    cout<<setw(10)<<fixed<<setprecision(2)<<f<<endl;
}