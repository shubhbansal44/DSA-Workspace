#include<bits/stdc++.h>
using namespace std;

class Queue
{
    public:
    int size,capacity;
    int *arr,front;
    Queue(int x)
    {
        size=0;capacity=x;
        arr=new int[x];front=0;
    }
    void insert_rear(int data);
    void insert_front(int data);
    void delete_front();
    void delete_rear();
    int get_front();
    int get_rear();
    bool is_full();
    bool is_empty();
    int how_big();
};

bool Queue::is_full()
{
    return (size==capacity);
}

bool Queue::is_empty()
{
    return (size==0);
}

int Queue::get_rear()
{
    if(is_empty())
    return -1;
    return ((front+size-1)%capacity);
}

int Queue::get_front()
{
    if(is_empty())
    return -1;
    return front;
}

int Queue::how_big()
{
    return size;
}

void Queue::insert_rear(int data)
{
    if(is_full())
    return;
    int rear=get_rear();
    rear=(rear+1)%capacity;
    arr[rear]=data;
    size++;
}

void Queue::insert_front(int data)
{
    if(is_full())
    return;
    front=(front-1+capacity)%capacity;
    arr[front]=data;
    size++;
}

void Queue::delete_front()
{
    if(is_empty())
    return;
    front=(front+1)%capacity;
    size--;
}

void Queue::delete_rear()
{
    if(is_empty())
    return;
    size--;
}

int main()
{
    Queue queue=Queue(5);
    return 0;
} 