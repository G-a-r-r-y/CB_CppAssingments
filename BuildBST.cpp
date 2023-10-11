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

node* buildBstSortedArray(int arr[],int s,int e){
    if(s>e){
        return NULL;
    }

    int mid=(s+e)/2;
    node* root=new node(arr[mid]);
    root->left=buildBstSortedArray(arr,s,mid-1);
    root->right=buildBstSortedArray(arr,mid+1,e);
    return root;
}


void printBst(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printBst(root->left);
    printBst(root->right);
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
        node* root=buildBstSortedArray(arr,0,n-1);
        printBst(root);
        cout<<endl;
        t--;
    }
    return 0;
}