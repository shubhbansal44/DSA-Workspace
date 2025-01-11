#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;
    node(int x){
        data=x;
        left=right=nullptr;
    }
};

int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    cout<< root->left->data;
    return 0;
}