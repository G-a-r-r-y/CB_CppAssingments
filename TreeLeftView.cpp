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
    if(d==-1){
        return NULL;
    }else{
        node* root=new node(d);
        root->left=buildTree();
        root->right=buildTree();
        return root;
    }
}

node* buildTreeLvlWise(){
    int d,leftData,rightData;
    queue<node*>q;
    cin>>d;
    if(d==-1){
        return NULL;
    }

    //For root node - 
    node* root=new node(d);
    //cout<<"For "<<root->data<<", enter left and right - ";
    cin>>leftData>>rightData;
    if(leftData!=-1){
        root->left=new node(leftData);
        q.push(root->left);
    }
    if(rightData!=-1){
       root->right=new node(rightData);
        q.push(root->right);
    }    
    
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        //cout<<"For "<<temp->data<<", enter left and right - ";
        cin>>leftData>>rightData;
        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
            //cout<<"done - "<<leftData<<endl;
        }
        if(rightData!=-1){
            temp->right=new node(rightData);
            //cout<<"done - "<<rightData<<endl;
            q.push(temp->right);
        }    
    }
    return root;
}

void treeLeftView(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    cout<<root->data<<" ";
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            if(!q.empty()){
                cout<<q.front()->data<<" ";
                q.push(NULL);
            }
        }else{
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
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
    node* root=buildTreeLvlWise();
    // printPreOrder(root);
    // cout<<endl;
    treeLeftView(root);
    return 0;
}