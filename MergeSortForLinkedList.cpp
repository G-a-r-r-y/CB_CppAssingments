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

node* midNode(node* head){
    node* slow=head;
    node* fast=head->next;

    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

node* merge(node* leftHead,node* rightHead){
    if(leftHead == NULL)
        return rightHead;
    
    if(rightHead == NULL)
        return leftHead;

    node* tempHead=NULL;
    node* tempTail=NULL;

    while(leftHead!=NULL and rightHead!=NULL){
        if(leftHead->data<=rightHead->data){
            insertAtTail(tempHead,tempTail,leftHead->data);
            leftHead=leftHead->next;
        }else{
            insertAtTail(tempHead,tempTail,rightHead->data);
            rightHead=rightHead->next;
        }
    }

    while(leftHead!=NULL){
        insertAtTail(tempHead,tempTail,leftHead->data);
        leftHead=leftHead->next;
    }

    while(rightHead!=NULL){
        insertAtTail(tempHead,tempTail,rightHead->data);
        rightHead=rightHead->next;
    }

    return tempHead;
}

node* mergeSortLL(node* head){
    
    //Base - 
    if(head==NULL || head->next==NULL){
        return head;
    }

    //Recursive -

    //Making 2 separate linked lists - 
    node* middleNode=midNode(head);
    node* leftHead=head;
    node* rightHead=middleNode->next;
    middleNode->next=NULL;     

    //Performing merge sort on the 2 separated linked lists - 
    leftHead=mergeSortLL(leftHead);
    rightHead=mergeSortLL(rightHead);

    //Now at last merge the 2 linked lists - 
    node* result = merge(leftHead,rightHead); 
    return result;
}

int main(){
    node* head=NULL;
    node* tail=NULL;
    int n;
    cin>>n;
    while(n>0){
        int d;
        cin>>d;
        insertAtTail(head,tail,d);
        n--;
    }
    head=mergeSortLL(head);
    printLL(head);
    return 0;
}