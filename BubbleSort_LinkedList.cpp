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

void printll(node* head){
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

void swapNodes(node* address1,node* address2){
    int data=address2->data;
    address2->data=address1->data;
    address1->data=data;
}

void bubbleSortLL(node* &head,int n){
    for(int i=0;i<n-1;i++){
        node* tempHead=head;
        while(tempHead->next!=NULL){
            if(tempHead->data>tempHead->next->data){
                swapNodes(tempHead,tempHead->next); //in swapNodes, we are swapping the datas of the nodes,
            }                                       // not the nodes themselves.  
            tempHead=tempHead->next;
        }
    }
}

int main(){
    node* head=NULL;
    node* tail=NULL;
    int n,d;
    cin>>n;
    while(n!=0){
        cin>>d;
        insertAtTail(head,tail,d);
        n--;
    }
    bubbleSortLL(head,lengthLL(head));
    printll(head);
    return 0;
}