#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int value){
        data=value;
        next=NULL;
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
        temp->next=head;
        head=temp;
            }
    }
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }



}