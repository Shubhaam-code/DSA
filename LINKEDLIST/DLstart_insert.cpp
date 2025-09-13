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
    // empty list ha to
    node* head=NULL;
    if(head==NULL){
        head=new node (1);
    }
    // agar list ha to
    else{
        node *temp=new node (2);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }  
    
    node *trav=head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;

    }
}