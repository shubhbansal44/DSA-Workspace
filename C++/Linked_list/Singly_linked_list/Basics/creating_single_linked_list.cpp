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

int main()
{
    // linked_list *head= new linked_list(10);
    // linked_list *node2= new linked_list(20);
    // linked_list *node3= new linked_list(30);
    // head->next=node2;
    // node2->next=node3;
// --------------------OR----------------------------
    // linked_list *head=new linked_list(10);
    // head->next=new linked_list(20);
    // head->next->next=new linked_list(30);
// --------------------OR----------------------------
    return 0;
}