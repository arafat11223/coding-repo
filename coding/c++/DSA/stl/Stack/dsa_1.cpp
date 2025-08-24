#include<bits/stdc++.h>
using namespace std;
int Stac[5],n=5,top=-1;
void push(int x)
{
    if(top==n-1)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        top++;
        Stac[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"the poped element are :"<<Stac[top]<<endl;
        top--;
    }
}
int peak()
{
    return Stac[top];
}
void display()
{
    if(top>=0)
    {
        cout <<"stack element are: ";
        for(int i=top;i>=0;i--)
        {
            cout<<Stac[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    push(2);
    push(5);
    push(1);
    push(8);
    push(3);
    //push(3);
    int y=peak();
    cout<<"top element of the stack is :"<<y<<endl;
    display();
    pop();
    pop();
    display();
    pop();
    pop();
    pop();
    pop();

}