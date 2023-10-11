#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;
    }
};

void insertAtHead(node* &head, node* &tail, int d){
    if(head==NULL and tail==NULL){
        node* n=new node(d);
        head=n;
        tail=n;
    }else{
        node* n=new node(d);
        n->next=head;
        head=n;
    }
}

void printLL(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}


int main(){
    node* head=NULL;
    node* tail=NULL;
    int n,ele;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ele;
        insertAtHead(head, tail, ele);
    }
    printLL(head);
    return 0;
}