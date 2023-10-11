#include<iostream>
#include<queue>
#include<map>
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

node* buildTreeLvlWise(){
    int d;
    //cout<<"Enter root data - ";
    cin>>d;
    if(d==-1){
        return NULL;
    }

    node* root=new node(d);
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        int le,ri;
        //cout<<"Take input for left and right for - "<<temp->data<<endl;
        cin>>le>>ri;
        if(le!=-1){
            temp->left=new node(le);
            q.push(temp->left);
        }
        if(ri!=-1){
            temp->right=new node(ri);
            q.push(temp->right);
        }
    }
    return root;
}

void printTreeLvlWise(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
        }
    }
}

void treeTopView(node* root){
    queue<pair<node*,int>>q; //queue made of (node,int) pair where int is for lvl number.
    map<int,int>m;           //We are using map for (line,data) pair as maps are automatically sorted    
                             //according to their key values.
    
    q.push({root,0});        //Remember this pushing syntax.
    while(!q.empty()){
        auto temp=q.front();
        q.pop();
        node* tempNode=temp.first;
        int tempHd=temp.second;   //Hd means horizontal distance 
        
        //if one value is present for a horizontal distance, then do nothing - 
        if(m.count(tempHd)==0){
            m[tempHd]=tempNode->data;
            // m.insert({tempHd,tempNode->data});
        }

        if(tempNode->left!=NULL){
            q.push({tempNode->left,tempHd-1});
        }
        if(tempNode->right!=NULL){
            q.push({tempNode->right,tempHd+1});
        }
    }

    //Printing the map - 
    map<int,int>::iterator ptr=m.begin();
    while(ptr!=m.end()){
        // cout<<"Hello"<<endl;
        cout<<ptr->second<<" ";
        ptr++;
    }
}
    

int main(){
    node* root=buildTreeLvlWise();
    //printTreeLvlWise(root);
    treeTopView(root);
    return 0;
}