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
    int d,noOfChildren;
    cin>>d>>noOfChildren;
    node* root=new node(d);
    if(noOfChildren==1){
        root->left=buildTree();
    }else if(noOfChildren==2){
        root->left=buildTree();
        root->right=buildTree();
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

int sumAtKLvl(node* root,int k){
    int lvl=0;
    int sum=0;
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            ++lvl;
            if(lvl>k){
                return sum;
            }
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            if(lvl==k){
                sum+=temp->data;
            }
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
    return sum;
}
int main(){
    node* root=buildTree();
    //preOrder(root);
    int k;
    cin>>k;
    int sum=sumAtKLvl(root,k);
    cout<<sum;
    return 0;
}