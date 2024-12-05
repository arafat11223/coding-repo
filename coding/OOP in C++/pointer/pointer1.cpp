#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    void setdata(int a, int b)
    {
        real=a;
        img=b;
    }
    void getdata()
    {
        cout<<"the real part is: "<<real<<endl;
        cout<<"the imaginary part is: "<<img<<endl;
    }
};
int main()
{
    //complex c1;
    //complex *ptr=&c1;
    complex *ptr=new complex;
   // (*ptr).setdata(1,5);
   ptr->setdata(1,5);
    (*ptr).getdata();
    //array of object
    complex *ptr1=new complex[4];
    ptr1->setdata(2,3);
    ptr1->getdata();
}