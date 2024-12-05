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

    complex *ptr;
    ptr=new complex[2];
    complex *ptrtemp=ptr;
    int p,q;
    for(int i=0;i<2;i++)
    {
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;


    }
    for(int i=0;i<2;i++)
    {
        
        ptrtemp->getdata();
        ptrtemp++;
        
    }

}