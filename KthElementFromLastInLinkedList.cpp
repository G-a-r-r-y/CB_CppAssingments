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

node* createLL(node* &head,node* &tail){
    int d;
    cin>>d;
    while(d!=-1){
        if(head==NULL and tail==NULL){
            head=new node(d);
            tail=head->next;
        }else{
            node* n=new node(d);
            n->next=head;
            head=n;
        }
        cin>>d;
    }
    return head;
}

// void printLL(node* head){
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }

void printKthEle(node* head,int k){
    int i=0;
    while(i!=k-1){
        head=head->next;
        i++;
        //cout<<"heallo"<<endl;
    }
    cout<<head->data;
}
int main(){
    node* head=NULL;
    node* tail=NULL;
    createLL(head,tail);
    //printLL(head);
    int k;
    cin>>k;
    printKthEle(head,k);
    return 0;
}