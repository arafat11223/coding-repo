#include<iostream>
#include<cstring>
using namespace std;
class base
{
    protected:
    char title[30];
    float rating;
    public:
    base(char *s, float r)
    {
        strcpy(title,s);
        rating =r;

    }
    virtual void display()
   {

   }
};
class derived: public base
{
    float  len;
    public:
    derived(char *s,float r, float l ): base(s,r)
    {
        len=l;

    }
    void display()
    {
        cout<<"this is an amazing video with title "<<title<<endl;
        cout<<"rating "<<rating<<"out of 5 stars"<<endl;
        cout<<"length of this video is "<<len<<"minutes"<<endl;
    }

};
class derived2: public base
{
    int words;
    public:
    derived2(char *s,float r, int wc ): base(s,r)
    {
        words=wc;

    }
    void display()
    {
        cout<<"this is an amazing text tutorial with title "<<title<<endl;
        cout<<"rating "<<rating<<"out of 5 stars"<<endl;
        cout<<"number  of this text tutorial is "<<words<<"words"<<endl;

    }

};
int main()
{
    char *title =new char[30];
    float rating ,len;
    int words;

}