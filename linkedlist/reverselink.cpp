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

    //store value in array

    vector<int>ans;
    node * rev=head;
    while(rev){
        ans.push_back(rev->data);
        rev=rev->link;
    }

    int i = ans.size()-1; // last index value
    rev=head;
    while(rev!=NULL){
        rev->data=ans[i];
        i--;
        rev=rev->link;

    }

    cout<<"REVERSED LINK LIST :";
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->link;
    }
    




}