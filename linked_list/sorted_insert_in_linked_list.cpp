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

linked_list *insert(linked_list *head,int value)
{
    linked_list *ptr=new linked_list(value);
    if(head==NULL)
    {
        return ptr;
    }
    if(head->data>value)
    {
        ptr->next=head;return ptr;
    }
    linked_list *nhead=head;
    while(nhead->next!=NULL&&nhead->next->data<value)
    {
        nhead=nhead->next;
    }
    ptr->next=nhead->next;
    nhead->next=ptr;
    return head;
}

void prtls(linked_list *ptr)
{
    while(ptr!=NULL)
    {
        cout<< ptr->data<< " ";
        ptr=ptr->next;
    }
}

int main()
{
    linked_list *head=new linked_list(10);
    head->next=new linked_list(30);
    head->next->next=new linked_list(40);
    head->next->next->next=new linked_list(50);
    int value;
    cout<< "Enter value to be inserted: ";
    cin>> value;
    head=insert(head,value);
    prtls(head);
    return 0;
}