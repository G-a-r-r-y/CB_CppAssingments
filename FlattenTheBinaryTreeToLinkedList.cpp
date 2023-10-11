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

//1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
node* buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }else{
        node* root=new node(d);
        root->left=buildTree();
        root->right=buildTree();
        return root;
    }
}

node* flattenTreeToLL(node* root){
    //Base -
    cout<<"Here "<<root->data<<endl;
    if(root==NULL || root->left==NULL || root->right==NULL){
        return NULL;
    }

    //Recursive - 
    cout<<root->left->data<<endl;
    node* tempLeft=flattenTreeToLL(root->left);
    cout<<root->right->data<<endl;
    node* tempRight=flattenTreeToLL(root->right);
    root->left=NULL;
    root->right=tempRight;
    cout<<root<<" "<<root->left->data<<" "<<root->right->data;
    cout<<"Hello ";
    while(tempRight->right!=NULL){
        cout<<"Hey ";
        tempRight=tempRight->right;
    }
    cout<<1<<endl;
    tempRight->right=tempLeft;
    cout<<tempRight->data<<" "<<tempRight->right->data<<endl;
    return root;
}

void printLL(node* head){
    while(head!=NULL){
        cout<<head->right<<" ";
    }
}

void printPreOrder(node* root){
    if(root==NULL){
        return ;
    }

    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

int main(){
    node* root=buildTree();
    printPreOrder(root);
    cout<<endl;
    flattenTreeToLL(root);
    printLL(root);
}