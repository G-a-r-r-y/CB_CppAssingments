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

void KReverse(node* tempHead,int k){
    node* tempTempHeadFront=tempHead;
    for(int i=0;i<k/2;i++){
        //cout<<tempTempHeadFront->data<<" ";
        //Finding Required Nodes from the back - 
        node* tempTempHeadBack=tempHead;
        for(int j=0;j<k-i-1;j++){
            tempTempHeadBack=tempTempHeadBack->next;
        }
        //cout<<tempTempHeadBack->data<<endl;
        //Switching data
        int tempdata=tempTempHeadBack->data;
        tempTempHeadBack->data=tempTempHeadFront->data;
        tempTempHeadFront->data=tempdata;

        tempTempHeadFront=tempTempHeadFront->next;
    }   
}

void kReverseLL(node* &head,int k){
    node* tempHead=head;
    while(tempHead!=NULL){
        KReverse(tempHead,k);
        for(int i=0;i<k;i++){
            tempHead=tempHead->next;
        }
    }
}

int main(){
    node* head=NULL;
    node* tail=NULL;
    int n,d,k;
    cin>>n>>k;
    while(n!=0){
        cin>>d;
        insertAtTail(head,tail,d);
        n--;
    }
    //printll(head);
    kReverseLL(head,k);
    printll(head);
    return 0;
}