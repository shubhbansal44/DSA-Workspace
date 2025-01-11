#include<bits/stdc++.h>
using namespace std;

class linked_list
{
    public:
    int data;
    linked_list *next;
    linked_list *prev;
    linked_list(int val)
    {
        data=val;next=NULL;prev=NULL;
    }
};

class dqueue
{
    public:
    int size,capacity;
    linked_list *head;
    linked_list *tail;
    dqueue(int x)
    {
        size=0;capacity=x;tail=head;
    }
    void insert_front(int x);
    void insert_rear(int x);
    void delete_front();
    void delete_rear();
    int get_front();
    int get_rear();
    bool is_empty();
    bool is_full();
    int how_big();
};

bool dqueue::is_empty()
{
    return (size==0);
}

bool dqueue::is_full()
{
    return (size==capacity);
}

int dqueue::how_big()
{
    return size;
}

void dqueue::insert_front(int x)
{
    if(is_full())
    return;
    linked_list *nhead=new linked_list(x);
    if(head==NULL)
    {head=nhead;size++;tail=nhead;return;}
    nhead->next=head;
    head->prev=nhead;
    head=nhead;
    size++;
}

void dqueue::delete_front()
{
    if(is_empty())
    return;
    linked_list *dlt=head;
    head=head->next;
    if(head==NULL)
    tail=NULL;
    delete dlt;
    size--;
}

void dqueue::insert_rear(int x)
{
    if(is_full())
    return;
    linked_list *ntail=new linked_list(x);
    if(head==NULL)
    {head=ntail;size++;tail=ntail;return;}
    ntail->prev=tail;
    tail->next=ntail;
    tail=ntail;
    size++;
}

void dqueue::delete_rear()
{
    if(is_empty())
    return;
    linked_list *dlt=tail;
    tail=tail->prev;
    if(tail==NULL)
    head=NULL;
    delete dlt;
    size--;
}

int dqueue::get_front()
{
    if(head==NULL)
    return -1;
    return head->data;
}

int dqueue::get_rear()
{
    if(head==NULL)
    return -1;
    return tail->data;
}

int main()
{
    dqueue dequeue=dqueue(4);
    dequeue.insert_front(10);
    dequeue.insert_front(20);
    dequeue.insert_front(30);
    dequeue.insert_front(40);
    cout<< dequeue.get_front()<< " "<< dequeue.get_rear()<< " "<< dequeue.how_big();
    return 0;
}