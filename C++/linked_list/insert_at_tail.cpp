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
    head=insert(head,10);
    head=insert(head,20);
    head=insert(head,30);
    head=insert(head,40);
    head=insert(head,50);
    prtls(head);
    return 0;
}