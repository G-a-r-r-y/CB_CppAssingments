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

void insertAtHead(node* &head,node* &tail,int d){
    if(head==NULL and tail==NULL){
        head=new node(d);
        tail=head->next;   
    }else{
        node* n=new node(d);
        n->next=head;
        head=n;
    }
}

void insertAtTail(node* &head,node* &tail, int d){
    if(head==NULL and tail==NULL){
        head=new node(d);
        tail=head->next;   
    }else{
        node* n=new node(d);
        node* tempHead=head;
        while(tempHead->next!=NULL){
            tempHead=tempHead->next;
        }
        tempHead->next=n;
        tail=n->next;
    }
}

void printLL(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int lengthLL(node* head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

void deleteNode(node* &head,int i,int len){
    node* tempHead=head;
    if(i==0){
        node* temp=head;
        head=head->next;
        delete temp;
    }else if(i==len-1){
        while((tempHead->next)->next!=NULL){
            tempHead=tempHead->next;
        }
        node* temp=tempHead->next;
        delete temp;
        tempHead->next=NULL;
    }else{
        while(i!=1){
            tempHead=tempHead->next;
            i--;
        }
        node* temp=tempHead->next;
        tempHead->next=temp->next;
        delete temp;
    }
}

int main(){
    node* head=NULL;
    node* tail=NULL;
    int n,d,t;
    cin>>n>>t;
    while(n!=0){
        cin>>d;
        insertAtTail(head,tail,d);
        n--;
    }
    //printLL(head);
    int index;
    while(t!=0){
        cin>>index;
        deleteNode(head,index,lengthLL(head));
        printLL(head);
        cout<<endl;
        t--;
    }
    return 0;
}