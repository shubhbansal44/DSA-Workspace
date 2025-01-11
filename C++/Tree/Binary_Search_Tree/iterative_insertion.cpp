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
    node *trunk,*ptr=new node(x),*stub=root;
    while(stub!=nullptr){
        trunk=stub;
        if(stub->data>x){
            stub=stub->left;
        }
        else if(stub->data<x){
            stub=stub->right;
        }
        else return root;
    }
    if(trunk->data>x) trunk->left=ptr;
    else trunk->right=ptr;
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