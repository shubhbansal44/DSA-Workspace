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
    if(x<root->data){
        root->left=plant(root->left,x);
    } else{
        root->right=plant(root->right,x);
    }
    return root;
}

node *twigg(node *ptr){
    ptr=ptr->right;
    while(ptr!=nullptr&&ptr->left!=nullptr){
        ptr=ptr->left;
    }
    return ptr;
}

node *pluck(node *root,int variety){
    if(root==nullptr) return root;
    if(root->data>variety) root->left=pluck(root->left,variety);
    else if(root->data<variety) root->right=pluck(root->right,variety);
    else{
        if(root->left==nullptr){
            node *ptr=root->right;
            delete root;return ptr;
        } if(root->right==nullptr){
            node *ptr=root->left;
            delete root;return ptr;
        } else{
            node *twig=twigg(root);
            root->data=twig->data;
            root->right=pluck(root->right,twig->data);
        }
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
    root=pluck(root,16);
    uproot(root);
    return 0;
}