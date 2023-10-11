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

node* buildTreeLvlWise(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    node* root=new node(d);
    int le,ri;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cin>>le>>ri;
        if(le!=-1){
            temp->left=new node(le);
            q.push(temp->left);
        }
        if(ri!=-1){
            temp->right=new node(ri);
            q.push(temp->right);
        }
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

void leafNodes(node* root){
    //Base Case - 
    if(root==NULL){
        return;
    }

    //Recursive Case -
    if(root->left==NULL and root->right==NULL){
        cout<<root->data<<" ";
    }
    leafNodes(root->left);
    leafNodes(root->right); 
}

int main(){
    node* root=buildTreeLvlWise();
    //preOrder(root);
    leafNodes(root);
    return 0;
}