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

void deleteNode(node* &head){
    node* prev=NULL;
    node* curr=head;
    while(curr!=NULL){
        if(curr->data<curr->next->data){
            node* temp=curr;
            prev->next=curr->next;
            curr=curr->next;
            delete temp;
            head=prev;
        }else{
            curr=curr->next;
        }
    }

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
    printLL(head);
    reverseLL(head);
    cout<<endl;
    printLL(head);
    deleteNode(head);
    printLL(head);
    return 0;
}