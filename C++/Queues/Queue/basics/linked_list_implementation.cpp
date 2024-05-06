#include<bits/stdc++.h>
using namespace std;

class linked_list
{
    public:
    int data;
    linked_list *next;
    linked_list(int val)
    {
        data=val;
        next=NULL;
    }
};

class Queue
{
    public:
    int size,capacity;
    linked_list *head;
    // linked_list *front;
    linked_list *tail;
    Queue(int x)
    {
        size=0;capacity=x;
        tail=head;
    }
    void enqueue(int data);
    void dequeue();
    int get_front();
    int get_rear();
    bool is_full();
    bool is_empty();
    int how_big();
};

bool Queue::is_empty()
{
    return (size==0);
}

bool Queue::is_full()
{
    return (size==capacity);
}

int Queue::how_big()
{
    return size;
}

void Queue::enqueue(int data)
{
    if(is_full())
    return;
    linked_list *ptr=new linked_list(data);
    if(head==NULL)
    {head=ptr;size++;tail=ptr;}
    else
    {tail->next=ptr;size++;tail=ptr;}
}

void Queue::dequeue()
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

int Queue::get_front()
{
    return head->data;
}

int Queue::get_rear()
{
    return tail->data;
}

int main()
{
    Queue queue=Queue(5);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    cout<< queue.get_front()<< " "<< queue.get_rear()<< " "<< queue.how_big();
    return 0;
}