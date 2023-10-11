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
    if(d==-1){
        return NULL;
    }
    node* root=new node(d);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}

node*  buildTreeLvlWise(){
    int d,leftData,rightData;
    queue<node*>q;
    cin>>d;

    //For root node - 
    if(d==-1){
        return NULL;
    }
    node* root=new node(d);

    //For rest of the nodes - 
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cin>>leftData>>rightData;
        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
        }
        if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }
    }
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

void treeBottomView(node* root,map<int,int>&m,int pos){
    //Base Case - 
    if(root==NULL){
        return;
    }    

    //Recursive Case - 
    m[pos]=root->data;
    // if(root->left!=NULL){
    //     m[pos-1]=root->left->data;
    // }
    // if(root->right!=NULL){
    //     m[pos+1]=root->right->data;
    // }
    treeBottomView(root->left,m,pos-1);
    treeBottomView(root->right,m,pos+1);   
}

int main(){
    //Input(for simple build ) - 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1  
    //Input(for level wise ) - 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
    node* root=buildTreeLvlWise();
    // preOrder(root);
    // cout<<endl;
    map<int,int>m;
    treeBottomView(root,m,0);
    //Printing the map - 
    map<int,int>::iterator ptr=m.begin();
    while(ptr!=m.end()){
        cout<<ptr->second<<" ";
        ptr++;
    }
    return 0;
}