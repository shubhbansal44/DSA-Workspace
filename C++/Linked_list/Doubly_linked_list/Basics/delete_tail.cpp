#include<bits/stdc++.h>
using namespace std;

class linked_list
{
    public:
    int data;
    linked_list *prev;
    linked_list *next;
    linked_list(int x)
    {
        data=x;
        prev=NULL;
        next=NULL;
    }
};

linked_list *insert(linked_list *head,int data)
{
    linked_list *tail=new linked_list(data);
    if(head==NULL)
    {return tail;}
    linked_list *ptr=head;
    while(ptr->next!=NULL)
    {ptr=ptr->next;}
    ptr->next=tail;
    tail->prev=ptr;
    return head;
}

void prtls(linked_list *ptr)
{
    if(ptr==NULL)
    return;
    cout<< ptr->data<< " ";
    prtls(ptr->next);
}

linked_list *dlt_tail(linked_list *head)
{
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    {delete head;return NULL;}
    linked_list *ptr=head;
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    delete ptr->next;
    ptr->next=NULL;
    return head;
}

int main()
{
    int n;
    cout<< "Enter number of nodes: ";
    cin>> n;
    linked_list *head;
    cout<< "Enter Nodes Data: ";
    for(int i=0; i<n; i++)
    {
        int data;
        cin>> data;
        head=insert(head,data);
    }
    head=dlt_tail(head);
    prtls(head);
    return 0;
}