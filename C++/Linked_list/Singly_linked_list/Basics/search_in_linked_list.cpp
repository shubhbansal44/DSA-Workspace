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

void search(linked_list *ptr,int t)
{
    if(ptr==NULL)
    {cout<< -1;return;}
    static int k=1;
    if(ptr->data==t)
    {cout<< "Target is at Node "<< k;return;}
    k++;
    search(ptr->next,t);
}

int main()
{
    linked_list *head=new linked_list(10);
    head->next=new linked_list(20);
    head->next->next=new linked_list(30);
    head->next->next->next=new linked_list(40);
    search(head,30);
    return 0;
}