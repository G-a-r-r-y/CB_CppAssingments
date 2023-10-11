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


node* builtBST(int arr[],int s,int e){
    //Base Case - 
    if(s>e){
        return NULL;
    }

    //Recursive Case -
    int mid=(s+e)/2; 
    node* root=new node(arr[mid]);
    root->left=builtBST(arr,s,mid-1);
    root->right=builtBST(arr,mid+1,e);
    return root;
}

// void modifyBST(node* root,int sum){
//     //Base Case - 
//     if(root==NULL){
//         return;
//     }

//     //Recursive Case - 
//     modifyBST(root->right,sum);
//     root->data=root->data+sum;
//     sum=root->data;
//     modifyBST(root->left,sum);
//     return;
// }

void modifyBST(node* root,int sum){
    //Base Case - 
    if(root==NULL){
        return;
    }

    //Recursive Case - 
    modifyBST(root->right,sum);
    root->data=root->data+sum;
    sum=root->data;
    modifyBST(root->left,sum);
    return;
}


void preOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
    return;
}

void printOrder(node* root){
    if(root==NULL){
        return;
    }
    printOrder(root->right);
    cout<<root->data<<" ";
    printOrder(root->left);
    return;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    node* root=builtBST(arr,0,n-1);
    preOrder(root);
    cout<<endl;
    printOrder(root);
    cout<<endl;
    modifyBST(root,0);
    printOrder(root);
    return 0;
}