#include<bits/stdc++.h>
using namespace std;

class linked_list
{
    public:
    int data;
    linked_list *next;
    linked_list(int n)
    {
        data=n;
        next=NULL;
    }
};

linked_list *insert(linked_list *head,int data)
{
    linked_list *nhead=new linked_list(data);
    if(head==NULL)
    {
        nhead->next=nhead;
        return nhead;
    }
    nhead->next=head->next;
    head->next=nhead;
    int x=head->data;
    head->data=nhead->data;
    nhead->data=x;
    return nhead;
}

void prtls(linked_list *head)
{
    if(head==NULL)
    return;
    linked_list *ptr=head;
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