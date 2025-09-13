// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *link;
    node(int d){
        data=d;
        link=NULL;
    }
};

int main() {
    node *start= new node(4);
    node *first= new node(5);
    node *second= new node(6);
    node *third= new node(7);
    start->link=first;
    first->link=second;
    second->link=third;
    
    
    cout<<"LINKED LIST "<<endl;
   
    node *temp;
    temp=start;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
    
    node *ptr;
    node *prev;
    prev=start->link;
    ptr=start->link->link;
    
    while(ptr->link!=NULL){
        prev=prev->link;
        ptr=ptr->link;
    }
    prev->link=NULL;
    
    cout<<"DELETE LAST NODE :"<<endl;
    
    node *print;
    print=start;
    
    while(print!=NULL){
        cout<<print->data<<" ";
        print=print->link;
    }
    cout<<endl;
    

}