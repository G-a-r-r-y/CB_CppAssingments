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
    string ch;
    cin>>ch;
    if(ch=="true"){
        root->left=buildTree();
    }
    cin>>ch;
    if(ch=="true"){
        root->right=buildTree();
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
    return;
}

void ZigZag(node* root){
    vector<vector<int>>v;
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    vector<int>innerV;
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            v.push_back(innerV);
            innerV.clear();
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            //cout<<temp->data<<" ";
            innerV.push_back(temp->data);
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }

    // cout<<v.empty()<<endl;
    // cout<<v.size()<<endl;
    for(int j=0;j<v.size();j++){
        if(j%2==0){
            for(int k=0;k<v[j].size();k++){
                cout<<v[j][k]<<" ";
            }
        }else{
            for(int k=v[j].size()-1;k>=0;k--){
                cout<<v[j][k]<<" ";
            }
        }
    }
}
int main(){
    node* root=buildTree();
    ZigZag(root);
    return 0;
}