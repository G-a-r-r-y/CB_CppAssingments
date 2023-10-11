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

void preOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int height(node* root){
    //Base Case - 
    if(root==NULL){
        return 0;
    }

    //Recursive Case - 
    return max(height(root->left),height(root->right))+1;
}

bool checkingHeight(node* root){
    if((height(root->left)-height(root->right))<=1){
        return true;
    }else{
        return false;
    }
}

bool isBalanced(node* root){

    //Base Cases -      
    if(root==NULL){
        return true;
    }

    isBalanced(root->left);
    isBalanced(root->right);
    if((height(root->left)-height(root->right))<=1){
        return true;
    }else{
        return false;
    }
}

int main(){
    // 10 true 20 true 40 false false true 50 false false true 30 true 60 false false true 73 false false
    node* root=buildTree();
    if(isBalanced(root)==true){
        cout<<"true";
    }else{
        cout<<"false";
    } 
    return 0;
}
