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
    head->next=new linked_list(20);
    head->next->next=new linked_list(30);
    head->next->next->next=new linked_list(40);
    prtls(head);
    return 0;
}