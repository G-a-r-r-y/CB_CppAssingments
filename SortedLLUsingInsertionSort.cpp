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

void insertAtHead(node* &head,int num,node* &tail){
    if(head==NULL and tail==NULL){
        node* n=new node(num);
        head=n;
        tail=n;
    }else{
        node* n=new node(num);
        n->next=head;
        head=n;
    }
}

void printlist(node* head){
    while(head!=NULL){
        cout<<head->data<<"\t";
        head=head->next;
    }
}


void newSort(node* newnode, node* &head2){
    if(head2==NULL || newnode->data<=head2->data){   //This is for first element in new sorted LL and when newnode's data
        newnode->next=head2;                         // is less than the data of the first element of the linked list.   
        head2=newnode;
    }else{
        node* temp=head2;
        while(temp->next!=NULL && (temp->next)->data<newnode->data){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}

void insertionSortLL(node* &head){
        node* head2=NULL;
        node* current=head;
        while(current!=NULL){
            node* next=current->next;    //Hum pehle hi aage ka address store kar rhe hai toh avoid any problem caused by sort function.
            newSort(current,head2);
            current=next;
        }
        head=head2;
}  

    // for(int i=1;i<n;i++){
    //     int currEle=arr[i];
    //     int j;
    //     for(j=i-1;j>=0;j--){
    //         if(arr[j]>currEle){
    //             arr[j+1]=arr[j];
    //         }else{
    //             break;
    //         }
    //     }
    //     arr[j+1]=currEle;
    // }


int main(){
    node* head=NULL;
    node* tail=NULL;
    int n;
    cin>>n;
    int num;
    while(n!=0){
        cin>>num;
        insertAtHead(head,num,tail);
        n--;
    }
    //printlist(head);
    //cout<<endl;
    insertionSortLL(head);
    //printlist(head);
    return 0;
}