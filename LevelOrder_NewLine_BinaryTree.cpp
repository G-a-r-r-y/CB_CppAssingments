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

    string left;
    cin>>left;
    if(left=="true"){
        root->left=buildTree();
    }

    string right;
    cin>>right;
    if(right=="true"){
        root->right=buildTree();
    }

    return root;
}

void printLvlWise(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
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
    //10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
    node* root=buildTree();
    // preOrder(root);
    // cout<<endl;
    printLvlWise(root);
    return 0;
}