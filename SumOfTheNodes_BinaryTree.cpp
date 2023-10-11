#include<iostream>
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

node* createBT(string flag){

    //Base Case - 
    if(flag=="false"){
        return NULL;
    }

    //Recursive Case
    
    int d;
    cin>>d;
    node*root=new node(d);
    cin.ignore();
    cin>>flag;
    root->left=createBT(flag);
    cin>>flag;
    root->right=createBT(flag);
    return root;    
}

int sumOfNodes(node* root){
    if(root==NULL){
        return 0;
    }

    return root->data+sumOfNodes(root->left)+sumOfNodes(root->right);
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
    //Input Data - 
    //50 true 25 true 12 false false false true 75 true 62 false false false
    node* root=createBT("true");
    //preOrder(root);
    cout<<sumOfNodes(root);
    return 0;
}