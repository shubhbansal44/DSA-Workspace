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

linked_list *insert(linked_list *head,int node_position,int value)
{
    linked_list *ptr=new linked_list(value);
    if(node_position==1)
    {
        ptr->next=head;return ptr;
    }
    linked_list *nhead=head;
    int n=node_position-2;
    while(n&&nhead!=NULL)
    {
        nhead=nhead->next;n--;
    }
    if(nhead==NULL){return head;}
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
    int node_position,value;
    cout<< "Enter node position and value to be inserted: ";
    cin>> node_position>> value;
    head=insert(head,node_position,value);
    prtls(head);
    return 0;
}