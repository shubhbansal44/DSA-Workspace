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
            cout<< ptr->data<< " ";
            space.push(ptr);
            ptr=ptr->left;
        }
        ptr=space.top(); space.pop();
        ptr=ptr->right;
    }
    
}

int main()
{
    // node *root=new node(10);
    // root->left=new node(20);
    // root->right=new node(30);
    // root->left->left=new node(80);
    // root->left->right=new node(90);
    // root->left->right->left=new node(100);
    // root->right->right=new node(40);
    // root->right->right->right=new node(50);
    // root->right->right->right->left=new node(60);
    // root->right->right->right->right=new node(70);
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->left->left = new node(70);
    root->left->right = new node(50);
    root->right->left = new node(60);
    root->left->left->right = new node(80);
    uproot(root);
    return 0;
}