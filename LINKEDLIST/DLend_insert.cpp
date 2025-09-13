#include <iostream>
using namespace std;

class node{
    public:

    int data;
    node * prev;
    node * next;
    node(int value){
        data=value;
        prev=NULL;
        next=NULL;
    }
};

int main(){
   node *head=NULL;

   //linked list is not exist
   if(head==NULL){
    head=new node(1);
   }
   // linked is exist
   else{
    node *temp=new node(2);
    node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    node *temp=new node(4);
    curr->next=temp;
    temp->prev=curr;
   }
}