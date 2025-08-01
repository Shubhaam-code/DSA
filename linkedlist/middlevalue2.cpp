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

    node *slow=NULL;
    node *fast=NULL;
    // dono pointer me adress store ho gaya
    slow=head;  
    fast=head;

    while(fast!= NULL && fast->link!=NULL){
        slow=slow->link;
        fast=fast->link->link;
    }

    cout<<"MIDDLE VALUE :"<<slow->data;



  
}