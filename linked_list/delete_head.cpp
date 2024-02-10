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

linked_list *dlt_head(linked_list *head)
{
    if(head!=NULL && head->next!=NULL)
    {linked_list *nhead=head->next;delete head;return nhead;}
    return NULL;
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
    head=dlt_head(head);
    prtls(head);
    return 0;
}