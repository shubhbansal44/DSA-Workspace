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

void uproot(node *root){
    cout<< root->data<< " ";
    if(root->left!=nullptr) uproot(root->left);
    if(root->right!=nullptr) uproot(root->right);
}

void kthnodes(const node* root,int k)
{
    if(root==nullptr) return;
    if(!k) cout<< root->data<< " ";
    else{
        kthnodes(root->left,k-1);
        kthnodes(root->right,k-1);
    }
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
    int k;
    cout<< "\nenter k: ";
    cin>> k;
    kthnodes(root,k);
    return 0;
}