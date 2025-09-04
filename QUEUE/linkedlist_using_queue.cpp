#include <iostream>
using namespace std;


class node{
    public:
    int data;
    node * next;

    node(int d){
        data=d;
        next=NULL;
    }
};

class queue{
    node *front;
    node *rare;
    public:

    queue(){
        front=NULL;
        rare=NULL;  
    }
    bool IsEmpty(){
        return (front==NULL);
    }
    void push(int x){
        if(IsEmpty()){
            front= new node(x);
            rare=front;
            return;
        }
        else{
            rare->next=new node(x);
            rare=rare->next;
        }
    } 

    void pop(){
        if(IsEmpty()){
            cout<<"UNDER FLOW\n";
            return;
        }
        else{
            node *temp=front;
            front=front->next;
            delete temp;
        }
         
    }

    int start(){
        if(IsEmpty()){
            cout<<"EMPTY \n";
            return -1;
        }
        else{
            return front->data;
        }
    }


};

int main(){
    queue Q;
    Q.push(7);
}