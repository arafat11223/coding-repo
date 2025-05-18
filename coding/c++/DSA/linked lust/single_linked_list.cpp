#include<bits/stdc++.h>
using namespace std;
// class node
// {
//     int data;
//     node *next;
// };
struct node
{
    int data;
    node *next;
};
node *head=NULL;
void insert(int n)
{
    node *newnode=new node;
    newnode->data=n;
    newnode->next=head;
    head=newnode;
}
void print()
{
    cout<<"element of single linked list are: ";
    node *temp=head;
    while(temp!=NULL)
    {
        
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    insert(2);
    insert(3);
    insert(6);
    insert(367);
    print();
}