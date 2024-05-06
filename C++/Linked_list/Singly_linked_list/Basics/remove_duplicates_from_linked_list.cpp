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

void rem(linked_list *head)
{
    linked_list *enquiry=head;
    while(enquiry!=NULL&&enquiry->next!=NULL)
    {
        if(enquiry->data==enquiry->next->data)
        {
            linked_list *dlt=enquiry->next;
            enquiry->next=enquiry->next->next;
            delete dlt;
        }
        else
        {
            enquiry=enquiry->next;
        }
    }
}

void prtls(linked_list *ptr)
{
    if(ptr==NULL)
    return;
    cout<< ptr->data<< " ";
    prtls(ptr->next);
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
    };
    rem(head);
    prtls(head);
    return 0;
}