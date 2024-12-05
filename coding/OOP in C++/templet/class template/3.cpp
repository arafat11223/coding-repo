#include<iostream>
using namespace std;
class vector
{
    public:
    int *arr;
    int size;
    vector(int m)
    {
        size=m;
        arr=new int[size];
    }
    int sum(vector &v)
    {
        int d=0;
        for(int i=0;i<size;i++)
        {
            d+=this->arr[i] * v.arr[i];
        }
        return d;

    }

};
int main()
{
    vector v1(4);
    v1.arr[0]=8;
    v1.arr[1]=3;
    v1.arr[2]=7;
    v1.arr[3]=2;
    vector v2(4);
    v2.arr[0]=8;
    v2.arr[1]=3.9;// not work
    v2.arr[2]=7;
    v2.arr[3]=2;
    int a=v1.sum(v2);
    cout<<a<<endl;

}