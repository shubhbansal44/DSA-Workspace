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

linked_list *reverse(linked_list *head)
{
    linked_list *present=head;
    linked_list *past=NULL;
    while(present!=NULL)
    {
        linked_list *future=present->next;
        present->next=past;
        past=present;
        present=future;
    }
    return past;
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
    head=reverse(head);
    prtls(head);
    return 0;
}