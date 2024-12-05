#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int *ptr= &a;
    cout<<"the value of a is : "<<*ptr<<endl;
    int *p= new int(40);
    cout<<"the value at address a is : "<<*p<<endl;
    float *pt= new float(40.98);
    cout<<"the value at address a is : "<<*pt<<endl;
    int *arr=new int[3];
    
    arr[0]=10;
    arr[1]=20;
    arr[2]=3;
    //delete[] arr;
    for(int i=0;i<3;i++)
    {
        cout<<"the value of arr[i] is : "<<arr[i]<<endl;


    }
    delete[]arr;
    int *ar=new int[4];
    ar[0]=1;
    *(arr+1)=20;
    ar[2]=3;
    ar[3]=4;
    for(int i=0;i<4;i++)
    {
        cout<<ar[i]<<" ";

    }


}