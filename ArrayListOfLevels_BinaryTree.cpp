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
    int data;
    cin>>data;
    node* root=new node(data);

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

void arrayListofLvls(node* root,vector<vector<int>>&v){
    queue<node*>q;
    vector<int>v1;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            v.push_back(v1);
            v1.clear();
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            //cout<<temp->data<<" ";
            v1.push_back(temp->data);
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
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
    node* root=buildTree();
    // preOrder(root);
    // cout<<endl;

    vector<vector<int>>v;
    arrayListofLvls(root,v);
    
    //Printing vector -
    cout<<"[";
    int i;
    int j;
    for(i=0;i<v.size()-1;i++){
        cout<<"[";
        for(j=0;j<v[i].size()-1;j++){
            cout<<v[i][j]<<", ";
        }
        cout<<v[i][j];
        cout<<"], ";
    }
    cout<<"[";
    for(j=0;j<v[i].size()-1;j++){
            cout<<v[i][j]<<", ";
        }
    cout<<v[i][j];
    cout<<"]";
    cout<<"]"; 
    return 0;
}