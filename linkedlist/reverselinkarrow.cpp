#include <iostream>
using namespace std;
#include <vector>

class node{
    public:
    int data;
    node *link;

    node(int value){
        data=value;
        link=NULL;
    }

};
int main(){
    int a[5]={2,3,4,5,6};
    node *head;
    head=NULL;

    for(int i = 0;i<5;i++){
     
    
    if(head==NULL){
        head=new node(a[i]); // it create dynamic object(node) in heap and head store adress of node
    }
    else{
        node *temp;
        temp=new node(a[i]);
        temp->link=head;
        head=temp;
            }
    }
    cout<<"PREVIOUS LINK LIST :";
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;

    node *curr=head;
    node *prev=NULL;
    node *next=NULL;

    while(curr){
        next=curr->link;
        curr->link=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    cout<<"REVERSED LINK LIST :";
    node *rev=head;
    while(rev!=NULL){
        cout<<rev->data<<" ";
        rev=rev->link;
    }
    cout<<endl;

}