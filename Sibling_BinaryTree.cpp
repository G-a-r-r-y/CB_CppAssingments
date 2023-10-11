#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

node* buildTree(){
    
    int d;
    cin>>d;
    node* root=new node(d);

    string chLeft;
    cin>>chLeft;
    if(chLeft=="true"){
        root->left=buildTree();
    }

    string chRight;
    cin>>chRight;
    if(chRight=="true"){
        root->right=buildTree();
    }
   
    return root;
}

void preOrder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void sibling(node* root){
    //Base Case - 
    if(root==NULL){
        return;
    }

    //Recursive Case - 
    if(root->left!=NULL and root->right==NULL){
        cout<<root->left->data<<" ";
    }else if(root->left==NULL and root->right!=NULL){
        cout<<root->right->data<<" ";
    }

    sibling(root->left);
    sibling(root->right);
}

int main(){
    node* root=buildTree();
    //preOrder(root);
    sibling(root);
    return 0;
}