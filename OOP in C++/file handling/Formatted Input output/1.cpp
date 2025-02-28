#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<456<<endl;
    cout.width(10);
    cout<<123<<endl;
    cout.width(10);
    cout<<"hello"<<endl;

    cout<<"precision"<<endl;
    cout.precision(3);
    cout<<35.141666<<endl;
    cout<<fixed;
    cout<<35.141666<<endl;
    cout<<sqrt(2)<<endl;
    cout.precision(2);
    cout<<fixed;
    cout<<sqrt(2)<<endl;

    cout<<"fill"<<endl;
    cout.width(10);
    cout.fill('*');
    cout<<123<<endl;

    cout<<"setf"<<endl;
    cout.width(10);
    cout.fill('*');
    cout.setf(ios::left,ios::adjustfield);
    cout<<123<<endl;
    cout.width(10);
    cout.fill('*');
    cout.setf(ios::right,ios::adjustfield);
    cout<<123<<endl;




    


    

}