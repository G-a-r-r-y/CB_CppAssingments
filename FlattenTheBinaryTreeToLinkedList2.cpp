#include<bits/stdc++.h>
using namespace std;

// class node{
//     public:
//     char data;
//     node* left;
//     node* right;
//     node(char d){
//         data=d;
//         left=NULL;
//         right=NULL;
//     }
// };

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
    queue<node*>q;
    q.push(root);
    int leftData,rightData;
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<<"Hello"<<endl;
        cin>>leftData>>rightData;
        cout<<"Left Data -"<<leftData<<" Right Data - "<<rightData<<endl;
        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
        }
        if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }
        cout<<"Idhar"<<endl;
    }  
    cout<<"Yaha"<<endl;
    return root;
}

// node* buildtreelevelwise(){
// 	int d;
// 	cout<<"enter the data of root"<<endl;
// 	cin>>d;
// 	if(d==-1){
// 		return NULL;
// 	}

// 	node*root=new node(d);
// 	queue<node*> q;               // A queue made of address of node class
// 	q.push(root);
// 	while(!q.empty()){          // By using a queue, we are making sure nodes ke left and right level wise assign ho
// 		node*x=q.front();
// 	    q.pop();
// 	    int le,ri;
// 	    // cout<<"take input of left and right for"<<x->data<<endl;
// 	    cin>>le>>ri;  
//         if(le!=-1){
//             x->left=new node(le);
//             q.push(x->left);
//         }
//         if(ri!=-1){
//             x->right=new node(ri);
//             q.push(x->right);
//         }
// 	}
// 	return root;
// }

void pre(node* root){
    if(root==NULL){
        return ;
    }

    cout<<root->data<<" ";
    pre(root->left);
    pre(root->right);
    return;
}

int main(){
    node* root=buildtreelevelwise();
    cout<<"Pahuch gaya"<<endl;
    //pre(root);
    return 0;
}