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
    linked_list *nhead=new linked_list(data);
    if(head==NULL)
    {nhead->next=nhead;nhead->prev=nhead;return nhead;}
    nhead->prev=head->prev;
    nhead->next=head;
    head->prev->next=nhead;
    head->prev=nhead;
    return nhead;
}

void prtls(linked_list *ptr)
{
    if(ptr==NULL)
    return;
    linked_list *head=ptr;
    do
    {
       cout<< ptr->data<< " ";
       ptr=ptr->next;
    } while (ptr!=head);
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
    prtls(head);
    return 0;
}