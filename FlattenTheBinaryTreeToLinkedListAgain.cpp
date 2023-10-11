//Doubt - Question mei yeh bataya hi nahi ki tree ki ending condition
//        kya hai?

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    char data;
    node* left;
    node* right;
    node(char d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

node* buildTree(){
    char d;
    cin>>d;
    if(d=='N'){
        return NULL;
    }
    node* root=new node(d);
    cout<<"hello"<<endl;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        char leftData,rightData;
        cin>>leftData;
        if(leftData!='N'){
            temp->left=new node(leftData);
            q.push(temp->left);
        }
        cin>>rightData;
        if(rightData!='N'){
            temp->right=new node(rightData);
            q.push(temp->right);
        }
    }
    return root;
}

void preOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    node* root=buildTree();
    preOrder(root);
    return 0;
}