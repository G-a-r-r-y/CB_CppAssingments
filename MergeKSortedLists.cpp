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

void printLL(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

void deleteLL(node* &head,node* tail){
    while(head!=NULL){
        node* temp=head;
        head=head->next;
        delete temp;
    }
}

void merge2SortedLL(node* &head1,node* &tail1,node* &head2,node* &tail2){
    node* tempHead1=head1;
    node* tempHead2=head2;
    node* tempTail1=tail1;
    node* tempTail2=tail2;
    node* tempHead3=NULL;
    node* tempTail3=NULL;

    while(tempHead1!=NULL and tempHead2!=NULL){
        // cout<<"hello"<<endl;
        if(tempHead1->data<tempHead2->data){
            insertAtTail(tempHead3,tempTail3,tempHead1->data);
            tempHead1=tempHead1->next;
        }else{
            insertAtTail(tempHead3,tempTail3,tempHead2->data);
            tempHead2=tempHead2->next;
        }
    }

    while(tempHead1!=NULL){
        insertAtTail(tempHead3,tempTail3,tempHead1->data);
        tempHead1=tempHead1->next;
    }

    while(tempHead2!=NULL){
        insertAtTail(tempHead3,tempTail3,tempHead2->data);
        tempHead2=tempHead2->next;
    }

    deleteLL(head1,tail1);
    deleteLL(head2,tail2);
    head1=tempHead3;
    tail1=tempTail3;
    head2=NULL;
    tail2=NULL;
}

int main(){
    node* head1=NULL;
    node* tail1=NULL;
    node* head2=NULL;
    node* tail2=NULL;
    int n,k,d;
    cin>>n>>k;
    int tempk=k;

    //Making an initial linked list - 
    while(tempk>0){
        cin>>d;
        insertAtTail(head1,tail1,d);
        tempk--;
    }
    //printLL(head1);
    //cout<<endl;
    n--;

    //Making remaining linked lists and merging it with the first one - 
    while(n>0){
        tempk=k;
        while(tempk>0){  //Making remaining Linked lists - 
            cin>>d;
            insertAtTail(head2,tail2,d);
            tempk--;
        }
        // printLL(head2);
        // cout<<endl;
        merge2SortedLL(head1,tail1,head2,tail2);
        // printLL(head1);
        // cout<<endl;
        n--;
    }
    printLL(head1);
    return 0;
}