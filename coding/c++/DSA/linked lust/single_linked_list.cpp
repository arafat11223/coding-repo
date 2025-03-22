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
int main()
{
    insert(2);
    insert(3);
}