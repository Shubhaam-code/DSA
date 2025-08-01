#include <iostream>
using namespace std;

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

    cout<<"LINKED LIST :";
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;

    int count=0;

    node *trav=head;
    while(trav){
        count++;
        trav=trav->link;
    }
    int newcount=count/2;
    
    trav=head;

    while(newcount--){
        trav=trav->link;
    }
    cout<<"MIDDLE VALUE :";
    cout<<trav->data;
}