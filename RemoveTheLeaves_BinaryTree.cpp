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

node* buildBT(string flag){

    //Base Case - 
    if(flag=="false"){
        return NULL;
    }

    //Recursive Case - 
    int d;
    cin>>d;
    node* root=new node(d);
    cin.ignore();
    cin>>flag;
    root->left=buildBT(flag);
    cin>>flag;
    root->right=buildBT(flag);
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

void printAccQues(node* root){
    //Base Case - 
    if(root==NULL){
        return;
    }

    //Left side -     
    if(root->left!=NULL){
        cout<<root->left->data;
    }else{
        cout<<"END";
    }
    cout<<" => "<<root->data<<" <= ";
    //Right side -
    if(root->right!=NULL){
        cout<<root->right->data;
    }else{
        cout<<"END";
    }
    cout<<endl;
    printAccQues(root->left);
    cout<<endl;
    printAccQues(root->right);
}
int main(){
    // input data - 
    // 50 true 12 true 18 false false false false
    node* root=buildBT("true");
    //preOrder(root);
    cout<<endl;
    printAccQues(root);
    return 0;
}