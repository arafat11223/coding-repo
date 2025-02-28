#include<iostream>
#include<string>
using namespace std;
class shape
{
    string color;
    public:
    void fuck(string c)
    {
        color=c;
        //cout<<color<<endl;
    }
    void get()
    {
        cout<<color<<endl;

    }


};
class circle: public shape
{
    public:
    void display()
    {
        get();
    }

};
int main()
{
    circle ob;
    ob.fuck("arafat");
    ob.display();

}