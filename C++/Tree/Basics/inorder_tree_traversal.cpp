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

void uproot(const node *root){
    if(root!=nullptr){
        uproot(root->left);
        cout<< root->data<< " ";
        uproot(root->right);
    }
}

int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->left->right=new node(3);
    root->right=new node(2);
    root->right->right=new node(3);
    uproot(root);
    return 0;
}