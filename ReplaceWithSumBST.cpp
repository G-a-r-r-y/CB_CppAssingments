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

void insertIntoBst(node* &root,int d){
    if(root==NULL){
        node* n=new node(d);
        root=n;
    }else if(d<root->data){
       insertIntoBst(root->left,d); 
    }else{
        insertIntoBst(root->right,d);
    }
}

node* buildBst(){
    int n;
    cin>>n;
    node* root=NULL;
    while(n>0){
        int d;
        cin>>d;
        insertIntoBst(root,d);
        n--;
    }
    return root;
}

void pre(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    pre(root->left);
    pre(root->right);
    return;
}

//Note - We use the concept of inOrder Traversal in BST in this question.
int sum=0;
void replaceWithSumBst(node* root){
    if(root==NULL){
        return;
    }

    //Pehle rightMost- 
    replaceWithSumBst(root->right);

    int tempData=root->data; //Important Step!!
    root->data=sum;
    sum+=tempData;
    
    replaceWithSumBst(root->left);
    return;
}

void printTree(node* root){
    if(root==NULL){
        return;
    }

    if(root->left!=NULL and root->right!=NULL){
        cout<<root->left->data<<" => "<<root->data<<" <= "<<root->right->data<<endl;
    }else if(root->left==NULL and root->right!=NULL){
        cout<<"END => "<<root->data<<" <= "<<root->right->data<<endl;
    }else if(root->left!=NULL and root->right==NULL){
        cout<<root->left->data<<" => "<<root->data<<" <= END"<<endl;
    }else{
        cout<<"END => "<<root->data<<" <= END"<<endl;
    }

    printTree(root->left);
    printTree(root->right);
    return ;
}

int main(){
    node* root=buildBst();
    replaceWithSumBst(root);
    printTree(root);
    return 0;
}