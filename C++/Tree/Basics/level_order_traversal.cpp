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
    if(root==nullptr) return;
    queue<node*> space;
    space.push(root);
    while(!space.empty()){
        node *ptr=space.front();
        space.pop();
        cout<< ptr->data<< " ";
        if(ptr->left!=nullptr) space.push(ptr->left);
        if(ptr->right!=nullptr) space.push(ptr->right);
    }
    
}

int height(const node* root){
    if(root==nullptr) return 0;
    else return max(height(root->left),height(root->right))+1;
}

int main()
{
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(80);
    root->left->right=new node(90);
    root->left->right->left=new node(100);
    root->right->right=new node(40);
    root->right->right->right=new node(50);
    root->right->right->right->left=new node(60);
    root->right->right->right->right=new node(70);
    uproot(root);
    return 0;
}