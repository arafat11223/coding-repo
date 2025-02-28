#include<iostream>
using namespace std;
int main()
{
    int array[10]={2,5,6,4};
    int size=sizeof(array)/sizeof(array[0]);
    cout<<size;

}