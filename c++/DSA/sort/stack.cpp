#include<bits/stdc++.h>
using namespace std;

stack[5],top=-1,n=5;
//int top=-1,n=5;
void push(int x)
{
    if(top==n-1)
    {
        cout<<"stack is full"<<endl;

    }
    else
    {
        top++;
        stack[top]=x;
    }
}
int main()
{
    push(5);
    
}