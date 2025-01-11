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

void uproot(node* root){
    stack<node*> space;
    node* ptr=root;
    while(!space.empty()||ptr!=nullptr){
        while(ptr!=nullptr){
            space.push(ptr);
            ptr=ptr->left;
        }
        ptr=space.top(); space.pop();
        cout<< ptr->data<< " ";
        ptr=ptr->right;
    }
    
}

node* plant(node *root,int x){
    if(root==nullptr) return new node(x);
    else if(x<root->data){
        root->left=plant(root->left,x);
    } else if(root->data<x){
        root->right=plant(root->right,x);
    }
    return root;
}

int main()
{
    node *root=new node(10);
    root=plant(root,5);
    root=plant(root,15);
    root=plant(root,3);
    root=plant(root,6);
    root=plant(root,12);
    root=plant(root,16);
    root=plant(root,17);
    root=plant(root,17);
    uproot(root);
    return 0;
}