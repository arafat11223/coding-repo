#include<bits/stdc++.h>
using namespace std;
const int size=1000;
string table[size];
int hashFunc(string name)
{
    int hash=0;
    for(char ch:name)
    {
        hash=(hash+ch)%size;
    }
    return hash;
}
int main()
{
    int n;
    cin>>n;
    string str;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        int h=0;
        h=hashFunc(str);
        while(table[h]!="")
        {
            h++;
            if(h >= size) // To avoid overflow
            {
                cout << "Hash table is full, cannot insert " << str << endl;
                return 0;
            }
        }
        table[h]=str;
    }
    cout<<"display:"<<endl;
    for(string str:table)
    {
        if(str!="")
        {
            cout<<str<<endl;
        }
    }
    cout<<"to DELETE:"<<endl;
    cin>>str;
    int h=hashFunc(str);
    while(table[h]!="")
    {
        if(table[h]==str)
        {
            table[h]="";
            break;
        }
        h++;
        
    }
    cout<<"display:"<<endl;
    for(string str:table)
    {
        if(str!="")
        {
            cout<<str<<endl;
        }
    }
    cout<<"To SEARCH: "<<endl;
    cin>>str;
    h = hashFunc(str);
    int flag=0;
    while(table[h]!="")
    {
        if(table[h]==str)
        {
            cout<<"found at "<<h<<endl;
            flag=1;
            break;
        }
        else h++;
    }
    if(flag==0) cout<<"Item Not Found\n";
    cout<<"add name: "<<endl;
    cin>>str;
    h = hashFunc(str);
    while(table[h] != "")
        h++;
    table[h]=str;
    cout<<"display:"<<endl;
    for(string str:table)
    {
        if(str!="")
        {
            cout<<str<<endl;
        }
    }

}