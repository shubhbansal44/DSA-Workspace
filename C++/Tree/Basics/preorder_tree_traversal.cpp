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
        cout<< root->data<< " ";
        uproot(root->left);
        uproot(root->right);
    }
}

int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->right=new node(40);
    root->right->right->right=new node(50);
    root->right->right->right->left=new node(60);
    root->right->right->right->right=new node(70);
    uproot(root);
    return 0;
}