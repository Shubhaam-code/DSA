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

    node *head;
    head=NULL;
     
    
    if(head==NULL){
        head=new node(28); // it create dynamic object(node) in heap and head store adress of node
    }
    else{
        node *temp;
        temp=new node(28);
        temp->next=head;
        head=temp;
    }

    cout<<head->data;
}