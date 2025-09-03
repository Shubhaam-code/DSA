#include <iostream>
using namespace std;

//IMPLEMENT IT WITH ARRAY
class stack{
    int *arr;
    int size; // no of element
    int top;
    public:

    //CONSTRUCTOR
    stack(int s){
        size=s;
        top=-1;
        arr=new int[s];
    }


    //PUSH
   void push(int value){

    // EDGE CONDITION
    if(top==size-1){
        cout<<"STACK OVERFLOW\n";
        return;
    }
    else{
        top++;
        arr[top]=value;
        cout<<"PUSHED "<<value<<" INTO THE STACK\n";
    }
   }

   //POP
   void pop(){

    // EDGE CONDITION
    if(top==-1){
        cout<<"STACK UNDERFLOW\n";
        return;
    }
    else{
        cout<<"POPED "<<arr[top]<<" INTO THE STACK\n";
        top--;
        
    }
   }
   //PRINT THE VALUE OF TOP

   int peek(){
    if(top==-1){
        cout<<"STACK EMPTY\n";
        return -1;
    }
    else{
        return arr[top];
    }
   }
   // SIZE OF STACK

   void getsize(){
    cout<<"SIZE OF STACK "<<top+1;
    }

   
   // STACK IS EMPTY OR NOT
   // if stack is empty then return 1 otherwise return 0
   // true (1) if condition is true otherwise  false (0) if condition is false

   bool empty(){
   
    return top==-1;
   }
    
};

int main(){
    stack S(5);
    S.push(10);    
}