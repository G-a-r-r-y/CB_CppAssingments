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
    node* n=new node(d);
    if(head==NULL and tail==NULL){
        head=n;
        tail=n;
    }else{
        n->next=head;
        head=n;
    }
}

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

void swapNodes(node* address1,node* address2){
    int data=address2->data;
    address2->data=address1->data;
    address1->data=data;
}

void bubbleSortLL(node* &head,int n){
    for(int i=0;i<n-1;i++){
        node* tempHead=head;
        int j=0;
        while(j<n-i-1){
            if(tempHead->data>tempHead->next->data){
                swapNodes(tempHead,tempHead->next); //in swapNodes, we are swapping the datas of the nodes,
            }                                       // not the nodes themselves.  
            tempHead=tempHead->next;
            j++;
        }
    }
}

int lastOddIndexLL(node* head){
    int count=0;
    while(head!=NULL&&head->next!=NULL&&((head->next)->data)%2!=0){
        count++;
        head=head->next;
    }
    return count+1;
}

int lengthLL(node* head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

int main(){
    node* head=NULL;
    node* tail=NULL;
    int n,d;
    cin>>n;
    while(n!=0){
        cin>>d;
        if(d%2==0){
            insertAtTail(head,tail,d);
        }else{
            insertAtHead(head,tail,d);
        }
        n--;
    }

    int lastOdd=lastOddIndexLL(head);
    bubbleSortLL(head,lastOdd); //Sorting for Odd value indices
    
    node* tempHead=head;
    int len=lengthLL(head);
    if(lastOdd==1){
        lastOdd=0;
        for(int i=0;i<lastOdd;i++){
        tempHead=tempHead->next;
        }
        bubbleSortLL(tempHead,len-lastOdd); //Sorting for Even value indices
        printll(head);
    }else{
        for(int i=0;i<lastOdd;i++){
        tempHead=tempHead->next;
        }
        bubbleSortLL(tempHead,len-lastOdd); //Sorting for Even value indices
        printll(head);
    }
    
    return 0;
}