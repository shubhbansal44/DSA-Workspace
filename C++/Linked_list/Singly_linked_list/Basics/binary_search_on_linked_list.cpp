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

linked_list *middle_node(linked_list *head,linked_list *last)
{
    if(head==NULL){return NULL;}
    linked_list *slow=head,*fast=head->next;
    while(fast!=last&&fast->next!=last)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

linked_list *binary_search(linked_list *start,linked_list *last,int t)
{
    linked_list *mid=middle_node(start,last);
    if(last!=start||last==NULL)
    {
        if(mid->data==t)
        return mid;
        else if(mid->data<t)
        return binary_search(mid->next,last,t);
        else
        return binary_search(start,mid,t);
    }
    return NULL;
}

int main()
{
    linked_list *head=NULL;
    int n;
    cout<< "Enter Number of Nodes: ";
    cin>> n;
    cout<< "Enter Nodes Data: ";
    for(int i=0; i<n; i++)
    {
        int value;
        cin>> value;
        head=insert(head,value);
    }
    int t;cout<< "enter target: ";cin>> t;
    linked_list *ans=binary_search(head,NULL,t);
    if(ans!=NULL)
    cout<< "Target is Found!!\n"<< ans->data;
    else
    cout<< "Target is not Found!!";
    return 0;
}