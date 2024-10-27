#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long sum; 
    sum=(a % 100 * b % 100 * c % 100 * d % 100)%100;
    string s=to_string(sum);
    //cout<<s<<endl;
    cout<<s[s.size()-2];
    cout<<s[s.size()-1];
    /*for(int i=s.length()-1;i>0;i--)
    {
        cout<<s[i]+s[i-1];
        break;

    }*/
}