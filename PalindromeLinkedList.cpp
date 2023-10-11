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

void insertAtHead(node* &head,node* tail,int d){
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


node* currFromLast(node* head,int iterator){             // 5 , 5  -> 5-0
    int count=1;                                        // 5 , 4 -> 5-1
    while(head!=NULL and count!=iterator){
        head=head->next;
        count++;
    }
    return head;
}

bool palindromeLL(node* head,int n){
    node* curr=head;
    node* peecheSe=NULL;
    for(int i=0;i<n/2;i++){
        
        peecheSe=currFromLast(head,n-i);
        // cout<<"Heelo"<<endl;
        // cout<<curr->data<<"\t"<<peecheSe->data<<endl;
        if(curr->data!=peecheSe->data){
            return false;
        }
        curr=curr->next;
    }
    return true;
}

int main(){
    node* head=NULL;
    node* tail=NULL;
    int n;
    cin>>n;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        insertAtHead(head,tail,ele);
    }
    if(palindromeLL(head,n)==true){
        cout<<"true";
    }else{
        cout<<"false";
    }
}