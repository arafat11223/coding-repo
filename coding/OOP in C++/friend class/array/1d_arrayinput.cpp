#include<iostream>
using namespace std;
class emp
{
    int id;
    string name;
    public:
    void set()
    {
        cout<<"enter id : ";
        cin>>id;
        cout<<"enter name : ";
        cin>>name;

    }
    void get ()
    {
        cout<<"id= "<<id<<endl;
        cout<<"name = "<<name<<endl;
    }

};
int main()
{
    emp ob[30];
    cout<<"enter number of employes = ";
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        ob[i].set();
    }
    for(int i=0;i<n;i++)
    {
        ob[i].get();
    }

}
