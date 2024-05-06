#include<bits/stdc++.h>
using namespace std;

class linked_list
{
    public:
    int data;
    linked_list *next;
    linked_list(int x)
    {
        data=x;
        next=NULL;
    }
};

linked_list *insert(linked_list *head,int t)
{
    linked_list *tail=new linked_list(t);
    if(head==NULL)
    return tail;
    linked_list *ptr=head;
    while(ptr->next!=NULL)
    {ptr=ptr->next;}
    ptr->next=tail;
    return head;
}

int nth_node_data(linked_list *head,int n)
{
    if(head==NULL){return -1;}
    linked_list *slow=head,*fast=head;
    while(--n)
    {
        fast=fast->next;
        if(fast==NULL){return -1;}
    }
    while(fast->next!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    return slow->data;
}

int main()
{
    linked_list *head=NULL;
    int n;
    cout<< "Enter Number of Nodes: ";
    cin>> n;
    cout<< "Enter Nodes Data: ";
    for(int i=0; i<n; i++)
    {
        int value;
        cin>> value;
        head=insert(head,value);
    }
    int t;
    cout<< "Enter n: ";
    cin>> t;
    int ans=nth_node_data(head,t);
    cout<< ans;
    return 0;
}