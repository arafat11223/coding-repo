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
int search(int key)
{
    Node *temp=head;
    int pos=1;
    while(temp!=NULL)
    {
        
        if(temp->data==key)
        {
            return pos;
        }
        temp=temp->next;
        pos++;
    }
    return -1;
}


int main()
{
    insert(4);
    insert(7);
    insert(37);
    insert(0);
    insert(2);
    //print();
    int pos=search(0);
    if(pos==-1)
    {
        cout<<"element is not found in the list"<<endl;
    }
    else
    {
        cout<<"element is found at positiont "<<pos<<endl;
    }

}