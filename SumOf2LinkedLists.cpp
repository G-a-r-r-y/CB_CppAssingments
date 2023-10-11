#include<iostream>
using namespace std;

//Process to follow - 
//1. Create 2 user defined LL.
//2. Reverse both of them for addition.
//3. Add and store them in a different LL.

class node{              //Note - Chahe lists 2 chahiye but kaam ek node class se hi ho jayega.
    public:
    int data;
    node* next;
    node(int d){
        data=d;
        next=NULL;
    }
};


void insertAtHead(node* &head, node* &tail,int d){
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

void printList(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void reverseLL(node* &head){  // Easy hai bas yaad rakho logic and 3 variables current,previous and next.
    node* curr=head;
    node* next=NULL;
    node* prev=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}

node* add(node* head1,node* head2){
    node* head3=NULL;
    node* tail3=NULL;
    int data3;
    int carry=0;
    while(head1!=NULL and head2!=NULL){              //For case when both LL are equal
        data3=(head1->data + head2->data + carry)%10;
        node* n=new node(data3);
        insertAtHead(head3,tail3,data3);
        carry=(head1->data + head2->data + carry)/10;
        head1=head1->next;
        head2=head2->next;
    }

    while(head1!=NULL){                            //When LL1 is greater than LL2
        data3=(head1->data+carry)%10;
        node* n=new node(data3);
        insertAtHead(head3,tail3,data3);
        carry=(head1->data+carry)/10;
        head1=head1->next;
    }

    
    while(head2!=NULL){                           //When LL2 is greater than LL1 
        data3=(head2->data+carry)%10;
        node* n=new node(data3);
        insertAtHead(head3,tail3,data3);
        carry=(head2->data+carry)/10;
        head2=head2->next;
    }

    if(carry!=0){                               //For case - 
        insertAtHead(head3,tail3,carry);        // LL1 = 9 9 9 9 9 9 9
    }                                          //  LL2 = 9 9 9 9 
                                              //   last mei joh 1 out of bound jaayega uske liye.
    return head3;
}

int main(){
    node* head1=NULL;
    node* head2=NULL;
    node* tail1=NULL;
    node* tail2=NULL;
    int size1,size2,data1,data2;
    cin>>size1>>size2;
    for(int i=0;i<size1;i++){
        cin>>data1;
        insertAtHead(head1,tail1,data1);
    }
    for(int i=0;i<size2;i++){
        cin>>data2;
        insertAtHead(head2,tail2,data2);
    }
    node* head3= add(head1,head2);
    printList(head3);
    return 0;
}