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
    linked_list *nhead=new linked_list(t);
    nhead->next=head;
    return nhead;
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
    head=insert(head,40);
    head=insert(head,30);
    head=insert(head,20);
    head=insert(head,10);
    head=insert(head,0);
    prtls(head);
    return 0;
}