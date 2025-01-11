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

bool smell(node *root,int variety){
    if(root==nullptr) return false;
    if(root->data==variety) return true;
    if(variety<root->data){
        return smell(root->left,variety);
    } else return smell(root->right,variety);
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
    cout<< smell(root,1)<< "\n";
    uproot(root);
    return 0;
}