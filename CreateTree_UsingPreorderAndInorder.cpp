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

node* buildTreePreIn(int preOrderArr[],int inOrderArr[],int s,int e){
    //Base - 
    if(s>e){
        return NULL;
    }

    //Recursion - 
    static int i=0;
    int data=preOrderArr[i];
    i++;
    
    int k;
    for(int j=s;j<=e;j++){
        if(data==inOrderArr[j]){
            k=j;
            break;
        }
    }

    node* root=new node(data);
    root->left=buildTreePreIn(preOrderArr,inOrderArr,s,k-1);
    root->right=buildTreePreIn(preOrderArr,inOrderArr,k+1,e);
    return root;   
}


void printTree(node* root){
    //Base Case - 
    if(root==NULL){
        return;
    }

    //Recursive Case - 
    if(root->left==NULL and root->right!=NULL){
        cout<<"END"<<" => "<<root->data<<" <= "<<root->right->data<<endl;
    }else if(root->left!=NULL and root->right==NULL){
        cout<<root->left->data<<" => "<<root->data<<" <= "<<"END"<<endl;
    }else if(root->left==NULL and root->right==NULL){
        cout<<"END"<<" => "<<root->data<<" <= "<<"END"<<endl;
    }else{
        cout<<root->left->data<<" => "<<root->data<<" <= "<<root->right->data<<endl;     
    }
    printTree(root->left);
    printTree(root->right);
}

int main(){
    int n,m;

    cin>>n;
    int preOrderArr[n];
    for(int i=0;i<n;i++){
        cin>>preOrderArr[i];
    }

    cin>>m;
    int inOrderArr[m];
    for(int i=0;i<m;i++){
        cin>>inOrderArr[i];
    }

    node* root=buildTreePreIn(preOrderArr,inOrderArr,0,n-1);
    printTree(root);
    return 0;
}