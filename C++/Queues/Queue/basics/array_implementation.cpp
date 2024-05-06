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
    void enqueue(int data);
    void dequeue();
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

void Queue::enqueue(int data)
{
    if(is_full())
    return;
    int rear=get_rear();
    rear=(rear+1)%capacity;
    arr[rear]=data;
    size++;
}

void Queue::dequeue()
{
    if(is_empty())
    return;
    front=(front+1)%capacity;
    size--;
}

int main()
{
    Queue queue=Queue(10);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    cout<< queue.arr[queue.get_front()]<< " "<< queue.arr[queue.get_rear()]<< " "<< queue.how_big();
    return 0;
}