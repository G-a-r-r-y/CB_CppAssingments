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

void insertAtTail(node* &head, node* &tail,int d){
    node* n=new node(d);
    if(head==NULL and tail==NULL){
        head=n;
        tail=n;
    }else{
        tail->next=n;
        tail=n;
    }
}

void printll(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int llLength(node* head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

node* newTail(node* head, node* tail){
    while(head->next!=tail){
        head=head->next;
    }
    return head;
}

void reverseLL(node* head,node* tail){

    // Base Case - 
    if(head==tail || tail->next==head){
        return ;
    }

    //Recursive Case - 
    int tempData=head->data;
    head->data=tail->data;
    tail->data=tempData;
    reverseLL(head->next,newTail(head,tail));
}

int main(){
    node* head=NULL;
    node* tail=NULL;
    int n,d;
    cin>>n;
    while(n>0){
        cin>>d;
        insertAtTail(head,tail,d);
        n--;
    }
    // printll(head);
    // cout<<endl;
    reverseLL(head,tail);
    printll(head);
    return 0;
}