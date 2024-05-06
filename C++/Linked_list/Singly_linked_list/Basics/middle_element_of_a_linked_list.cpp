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

void middle_node_data(linked_list *head)
{
    if(head==NULL){cout<< "NULL";return;}
    linked_list *slow=head,*fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<< "Middle node data is: "<< slow->data<< "\n";return;
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
    linked_list *head=new linked_list(10);
    head->next=new linked_list(20);
    head->next->next=new linked_list(30);
    head->next->next->next=new linked_list(40);
    head->next->next->next->next=new linked_list(50);
    middle_node_data(head);
    prtls(head);
    return 0;
}