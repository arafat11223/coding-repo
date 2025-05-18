#include<bits/stdc++.h>
using namespace std;

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
void findmid()
{
    node *slow =head;
    node *fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    if(slow!=NULL)
    {
        cout<<"middle element are: "<<slow->data<<endl;
    }
    
}

int main()
{
    insert(2);
    insert(3);
    insert(6);
    insert(367);
    insert(7);
   
    findmid();
    
}