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

linked_list *dlt_head(linked_list *head)
{
    if(head==NULL)
    {return NULL;}
    if(head->next==head)
    {delete head;return NULL;}
    linked_list *dlt=head->next;
    head->data=dlt->data;
    head->next=dlt->next;
    delete dlt;
    return head;
}

linked_list *dlt_kth(linked_list *head,int k)
{
    if(head==NULL)
    return NULL;
    if(k==1||head->next==head)
    return dlt_head(head);
    linked_list *ptr=head;
    for(int i=0; i<k-2; i++)
    ptr=ptr->next;
    linked_list *dlt=ptr->next;
    ptr->next=dlt->next;
    delete dlt;
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
    int k;
    cout<< "Enter Node to delete: ";
    cin>> k;
    head=dlt_kth(head,k);
    prtls(head);
    return 0;
}