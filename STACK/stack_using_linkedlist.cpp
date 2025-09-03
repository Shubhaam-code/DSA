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

class stack{
    node *top;
    int size; // ACTUAL SIZE OF STACK
    public:
    stack(){
        top=NULL;
        size=0;
    }


    //PUSH

    void push(int value){

        node *temp=new node(value);
        if(temp==NULL){
            cout<<"STACK OVERFLOW\n";
            return;
        }
        else{
            temp->next=top;
            top=temp;
            size++;
            cout<<"PUSHED "<<value<<" INTO THE STACK\n";
        }
        
    }

    // POP

    void pop(){
        if(top==NULL){
            cout<<"UNDERFLOW\n";
        }
        else{
            node *temp=top;
            cout<<"POPED "<<temp->data<<" INTO THE STACK\n";
            top=top->next;
            delete temp;
            size--;
        }
        
    }

    int peek(){
        if(top==NULL){
            cout<<"STACK IS EMPTY\n";
            return -1;
        }
        else{
            return top->data;
        }
        
    }

    bool IsEmpty(){
        return top==NULL; // if top = null then empty give 1 as output
    }

    int IsSize(){
        return size;
    }

};

int main(){
    stack s;
    s.push(6);
    s.push(4);
    s.push(62);
    s.push(76);
    s.pop();
    cout<<"SIZE: "<<s.IsSize()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.IsEmpty()<<endl;
    

}
