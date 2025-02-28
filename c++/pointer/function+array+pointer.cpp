#include<iostream>
using namespace std;
void proces(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<*(arr+i)<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}
int main()
{
    int arr[3]={1,2,3};
    proces(arr,3);
}