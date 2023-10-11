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

void mergeSortedLL(node* head1,node* head2){
    node* head3=NULL;
    node* tail3=NULL;
    while(head1!=NULL and head2!=NULL){
        if(head1->data<head2->data){
            insertAtTail(head3,tail3,head1->data);
            head1=head1->next;
        }else{
            insertAtTail(head3,tail3,head2->data);
            head2=head2->next;
        }
    }

    while(head1!=NULL){
        insertAtTail(head3,tail3,head1->data);
        head1=head1->next;
    }

    while(head2!=NULL){
        insertAtTail(head3,tail3,head2->data);
        head2=head2->next;
    }

    //Printing final Sorted List - 
    printLL(head3);
}

int main(){
    int t,n1,n2;
    cin>>t;
    while(t>0){
        node* head1=NULL;
        node* tail1=NULL;
        node* head2=NULL;
        node* tail2=NULL;

        cin>>n1;
        int d1;
        while(n1>0){
            cin>>d1;
            insertAtTail(head1,tail1,d1);
            n1--;
        }
        
        cin>>n2;
        int d2;
        while(n2>0){
            cin>>d2;
            insertAtTail(head2,tail2,d2);
            n2--;
        }

        mergeSortedLL(head1,head2);
        // printLL(head1);
        // printLL(head2);
        t--;
    }
    return 0;
}