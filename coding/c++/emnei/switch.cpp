#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"input a character";
    cin>>button;
    switch(button)
    {
         case 'a':
         cout<<"hello"<<endl;
         break;
         case 'b':
         cout<<"math"<<endl;
         break;
         case 'c':
         cout<<"physics"<<endl;
         break;
         case 'd':
         cout<<"cse"<<endl;
         break;
         case 'e':
         cout<<"fuck you"<<endl;
         break;
         default:
         cout<<"i am still learning"<<endl;
         


    }        
}