
#include <iostream>
using namespace std;

class node {
    public:
    int data ;
    node *link;
    node (int d){
        data=d;
        link=NULL;
    }
};

int main() {
    int a[5]={5,3,7,2,9};
    node *start=new node(a[0]);
    node *temp=start;
    
    for(int i=1;i<5;i++){
        temp->link=new node(a[i]);
        temp=temp->link;
        
    }
    
    cout<<"LINK LIST:";
    temp=start;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->link;
    }
    cout<<"NULL";
}