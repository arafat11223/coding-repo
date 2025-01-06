#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n=122345.678;
    cout<<n<<endl;

    cout<<fixed;
    cout<<n<<endl;

    cout<<scientific;
    cout<<n<<endl;

    //<<setprecision(2);
    cout.precision(2);
    cout<<fixed;
    cout<<n<<endl;

    cout<<fixed<<setprecision(1);
    cout<<n<<endl;

    cout<<scientific<<setprecision(2);
    cout<<n<<endl;

}
