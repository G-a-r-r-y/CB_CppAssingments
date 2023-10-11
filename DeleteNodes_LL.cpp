#include<iostream>
using namespace std;
 
class node{
    public:
    long long int data;
    node* next;
    node(long long int d){
        data=d;
        next=NULL;
    }
};

void insertAtTail(node* &head,node* &tail,long long int d){
    if(head==NULL and tail==NULL){
        head=new node(d);
        tail=head->next;
    }else{
        node* tempHead=head;
        while(tempHead->next!=NULL){
            tempHead=tempHead->next;
        }
        node* n=new node(d);
        tempHead->next=n;
        tail=n->next;
    }
}

void deleteGreaterRight(node* &head,node* &tail){
    bool firstNode=true;
    node* tempHead=head;
    while(tempHead->next!=NULL){
        //Checking for first node - 
        if(tempHead->data<tempHead->next->data and firstNode==true){
            head=head->next;
            delete tempHead;
            tempHead=head;
            continue;
        }
        //Checking for Other Nodes in between - 
        if(tempHead->next->next!=NULL and tempHead->next->data<tempHead->next->next->data){
            node* tempAddress=tempHead->next;
            tempHead->next=tempHead->next->next;
            delete tempAddress;
            continue;
        }
        firstNode=false;
        tempHead=tempHead->next;
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
    long long int n,d;
    cin>>n;
    while(n!=0){
        cin>>d;
        insertAtTail(head,tail,d);
        n--;
    }
    //printLL(head);
    //cout<<endl;
    deleteGreaterRight(head,tail);
    printLL(head);
    return 0;
}