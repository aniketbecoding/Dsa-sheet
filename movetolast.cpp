#include<iostream>
using namespace std;
// move the last element of linked list to first
class node{
    public:
    int data;
    node* next; //next stores address of the next node so its a pointer data type
    node(int val){ //constructor
        data=val;
        next=NULL;
    }
};
    void insertattail(node* &head,int val){ //to insert an element at the end
        node* n=new node(val); //dynamic memory allocation
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
    void insertathead(node* &head,int val){ //to insert an element at the beginning
        node* n=new node(val);
        n->next=head;
        head=n;
    }

    void display(node* head){
        node* temp=head;
        while( temp!=NULL){
            cout<<temp->data<<"->"; //prints data stored in temp
            temp=temp->next;
        }
        cout<<"null"<<endl;
    }
    void movetolast(node* &head){
        if(head==NULL || head->next==NULL){
            return;
        }
        node* temp=head;
        node* prev=NULL;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        temp->next=head;
        head=temp;
        prev->next=NULL;
       
    }
    
    int main(){
        node* head=NULL; //empty list
        insertattail(head,1);
        insertattail(head,2);
        insertattail(head,3);
        display(head);
        //insertathead(head,4);
        //display(head);
        //cout<<search(head,5)<<endl;
        //deletion(head,3);
       // display(head);
    //   deletebeg(head);
   //    display(head);
        movetolast(head);
        display(head);
        return 0;
    }