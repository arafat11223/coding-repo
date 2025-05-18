#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head =NULL;
int insert(int n)
{
    Node *newnode=new Node;
    newnode->data=n;
    newnode->next=head;
    head=newnode;
}
void max()
{
    Node *temp=head;
    int max;
    if(temp==NULL)
    {
        cout<<"empty linked list"<<endl;
    }
    else
    {
        max=temp->data;
        while(temp!=NULL)
        {
            if(max<temp->data)
            {
                max=temp->data;
            }
            temp=temp->next;
        }
    }
    cout<<max<<endl;
}


int main()
{
    insert(4);
    insert(7);
    insert(37);
    insert(0);
    insert(2);
    //print();
    max();
}