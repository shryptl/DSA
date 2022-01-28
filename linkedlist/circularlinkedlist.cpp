#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertathead(node* &head, int val){
    node *temp= new node(val);
    temp->next=head;
    head=temp;
}

void insertattail(node* &head , int val){

    node* n =new node(val);

    if(head==NULL){
        head=n;
        return;
    }
    
    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}


void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int search(node* head , int key){
    node*temp=head;

    while(temp!=NULL){
        if(temp->data==key){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

void deleteathead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}

void deletenode(node* &head, int val){
    node* temp=head;
    node* todelete = temp->next;

    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteathead(head);
        return;
    }

    while(temp->next->data!=val){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    delete todelete;
}

node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

int main(){

    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    display(head);
    insertathead(head,9);
   /* display(head);
    cout<<search(head,3);*/
    node* newhead = reverse(head);
    display(newhead);
    
    return 0;
}