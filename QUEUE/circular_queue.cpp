#include <iostream>
using namespace std;

class queue{
    int *arr;
    int front ;
    int rare;
    int size;

    public:
    queue(int n ){
        size=n;
        front=-1;
        rare=-1;
        arr= new int[n];

    }

    bool IsFull(){
        return (rare+1)%size==front ;
    }

    bool IsEmpty(){
        return front==-1;
    }

    void push(int x){
        if(IsEmpty()){
            cout<<"PUSHED "<<x<<" INTO THE QUEUE.\n";
            front=0;
            rare=0;
            arr[0]=x;
            return;
        }
        else if(IsFull()){
            cout<<"QUEUE OVERFLOW \n";
            return;
        }
        else{
            cout<<"PUSHED "<<x<<" INTO THE QUEUE.\n";
            rare=(rare+1)%size;
            arr[rare]=x;
        }

    }
    void pop(){
        if(IsEmpty()){
            cout<<"QUEUE UNDERFLOW \n";
            return;
        }
        else if(front==rare){
            cout<<"POPED "<<arr[front]<<" INTO THE QUEUE\n.";
            front=rare=-1;
        }
        else{
            cout<<"POPED "<<arr[front]<<" INTO THE QUEUE.\n";
            front=(front+1)%size;
        }
    }
    void start(){
        if(IsEmpty()){
            cout<<"QUEUE EMPTY \n";
        }
        else{
            cout<<"FRONT ELEMENT "<<arr[front];
        }
    }
};

int main(){
    queue Q(3);
    Q.push(10);
    Q.push(11);
    Q.push(12);
    Q.pop();
    Q.push(13);
    Q.start();
   
}