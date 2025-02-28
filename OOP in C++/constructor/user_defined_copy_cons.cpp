#include<iostream>
#include<string>
using namespace std;
class student
{
    int roll;
    string name;
    double fee;
    public:
    //parameter constructor
    student(int r, string n,double f)
    {
        roll=r;
        name=n;
        fee=f;

    }
    //copy constructor
    student(student &t)
    {
        roll=t.roll;
        name=t.name;
        fee=t.fee;
        cout<<"copy constructor called"<<endl;
    }
    void display();

};
void student::display()
{
    cout<<roll<<"\t"<<name<<"\t"<<fee<<endl;
}
int main()
{
    //creat student obj with parameter constructor
    student obj(78,"arafat",45.78);
    obj.display();
    //creat student obj with copy constructor
    student obj2(obj);
    obj2.display();
}

