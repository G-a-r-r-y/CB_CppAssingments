#include<bits/stdc++.h>
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

void insertAtTail(node* &head,node* &tail,int d){
    node* n=new node(d);
    if(head==NULL and tail==NULL){
        head=n;
        tail=n;
    }else{
        tail->next=n;
        tail=n;
    }
}

void printLL(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void oddEven(node* &head,node* &tail){
    int i=1;
    node* OddHead=NULL;
    node* OddTail=NULL;
    node* EvenHead=NULL;
    node* EvenTail=NULL;
    node* tempHead=head;
    while(tempHead!=NULL){
        if(i%2==0){
            insertAtTail(EvenHead,EvenTail,tempHead->data);
        }else{
            insertAtTail(OddHead,OddTail,tempHead->data);
        }
        i++;
        tempHead=tempHead->next;
    }
    head=OddHead;
    OddTail->next=EvenHead;
    tail=EvenTail;
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
    cout<<"Original List: ";
    printLL(head);
    oddEven(head,tail);
    cout<<"Modified List: ";
    printLL(head);
    return 0;
}