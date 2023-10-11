// Doubt - Showing  - /bin/run.sh: line 4:    20 Segmentation fault      (core dumped) ./exe
//         on onine editor.

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

node* insertIntoBst(node* root,int d){
    if(root==NULL){
        root=new node(d);
    }else if(d<=root->data){
        root->left=insertIntoBst(root->left,d);
    }else{
        root->right=insertIntoBst(root->right,d);
    }
    return root;
}

node* buildBst(int arr[],int n){
    node* root;
    for(int i=0;i<n;i++){
        root=insertIntoBst(root,arr[i]);
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

void nodesInRange(node* root,int k1,int k2){
    if(root==NULL){
        return;
    }

    nodesInRange(root->left,k1,k2);
    if(root->data>=k1 and root->data<=k2){
        cout<<root->data<<" ";
    }
    nodesInRange(root->right,k1,k2);
}

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k1,k2;
        cin>>k1>>k2;
        node* root=buildBst(arr,n);
        cout<<"# Preorder : ";
        preOrder(root);
        cout<<endl; 
        cout<<"# Nodes within range are : ";
        nodesInRange(root,k1,k2);
        cout<<endl;
        t--;
    }
    return 0;
}