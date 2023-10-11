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


node* buildTreePreIn(int pre[],int in[],int s,int e){
    if(s>e){
        return NULL;
    }

    static int i=0;
    int data=pre[i];
    i++;

    int k;
    for(int l=s;l<=e;l++){
        if(in[l]==data){
            k=l;
            break;
        }
    }

    node* root=new node(data);
    root->left=buildTreePreIn(pre,in,s,k-1);
    root->right=buildTreePreIn(pre,in,k+1,e);
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

node* addressOfSrc(node* root,int src){
    if(root->data=src){
        return root;
    }

    return addressOfSrc(root->left,src);
    return addressOfSrc(root->right,src);
}

void printNodesAtGivenDistance(node* root,int src, int distance){
    
    
}

int main(){
    int n;
    cin>>n;
    int pre[n];
    int in[n];
    for(int i=0;i<n;i++){
        cin>>pre[i];
    }
    for(int i=0;i<n;i++){
        cin>>in[i];
    }

    node* root=buildTreePreIn(pre,in,0,n-1); //Yaha n-1 lena hai naaki n
    preOrder(root);

    int t;
    cin>>t;
    while(t>0){
        int src,distance;
        cin>>src>>distance;
        printNodesAtGivenDistance(root,src,distance);
        t--;
    }
    return 0;
}