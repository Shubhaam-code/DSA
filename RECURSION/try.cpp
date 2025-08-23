#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *link;
    
    node(int data){
        this->data=data;
        link=NULL;
    }
};

int main(){
    int arr[5]={5000,-1200,2300,-700,1500};
    int n = sizeof(arr)/sizeof(arr[0]);

    node *start=new node(arr[0]);
    node *temp;
    temp=start;

    for(int i=1;i<n;i++){
        temp->link=new node(arr[i]);
        temp=temp->link;
    }


    cout<<"LINKED LIST :"<<endl;

    temp=start;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;

    int count=2;

    node* ptr=new node(100);
    node *prev;
    prev=start;

    node*fut;
    fut=start->link;

    while(count--){
        prev=prev->link;
        fut=fut->link;
    }
    prev->link=fut->link->link;
    delete fut;
    
    cout<<"DELETE AT ANY POSITION :";

    temp=start;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;



}


