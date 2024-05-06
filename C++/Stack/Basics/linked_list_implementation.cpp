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

class form
{
    public:
    int capacity;
    linked_list *head;
    form()
    {
        head=NULL;
        capacity=0;
    }
    void push(const int data);
    int pop();
    int peek();
    int size();
    bool is_empty();
    void display();
};

void form::push(const int data)
{
    linked_list *nhead=new linked_list(data);
    nhead->next=head;
    head=nhead;
    capacity++;
}

int form::pop()
{
    if(head==NULL)
    return -404;
    int val=head->data;
    linked_list *dlt=head;
    head=head->next;
    delete dlt;
    capacity--;
    return val;
}

int form::size()
{
    return capacity;
}

int form::peek()
{
    return head->data;
}

void form::display()
{
    static linked_list *ptr=head;
    if(ptr==NULL)
    return;
    else
    {
        linked_list *prev=ptr;
        ptr=ptr->next;
        display();
        cout<< prev->data<< "\n";
    }
}

bool form::is_empty()
{
    return (head==NULL);
}

int main()
{
    form stack=form();
    return 0;
}