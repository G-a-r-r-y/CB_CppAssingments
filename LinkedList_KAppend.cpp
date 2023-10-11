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
        node* n= new node(d);
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

void shiftLastEle(node* &head){
    node* first=head;
    node* last;
    while(head->next->next!=NULL){
        head=head->next;
    }
    last=head->next;
    head->next=NULL;   //New last element ke next ko NULL assign kar rhe hai
    head=last;
    head->next=first;
}

void reverseLL(node* &head){
    node* curr=head;
    node* next=NULL;
    node* prev=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;  //Remeber, since we are inserting at head here, toh reverse ke time address right to left hi assign hoga.
        prev=curr;        // Easy hai bas yaad rakho logic and 3 variables current,previous and next.
        curr=next;
    }
    head=prev;
}

int main(){
    node* head=NULL;
    node* tail=NULL;
    int n,ele;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ele;
        insertAtHead(head,tail,ele);
    }
    reverseLL(head);
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        shiftLastEle(head);
    }
    printLL(head);
    return 0;
}