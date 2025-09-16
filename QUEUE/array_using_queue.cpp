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
        return rare==(size-1);
    }

    bool IsEmpty(){
        return front==-1;
    }

    void push(int x){
        if(IsEmpty()){
            cout<<"PUSHED "<<x<<" INTO THE QUEUE.\n";
            front++;
            rare++;
            arr[front]=x;
            return;
        }
        else if(IsFull()){
            cout<<"QUEUE OVERFLOW \n";
            return;
        }
        else{
            cout<<"PUSHED "<<x<<" INTO THE QUEUE.\n";
            rare++;
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
            front++;
        }
    }
    void start(){
        if(IsEmpty()){
            cout<<"QUEUE EMPTY \n";
        }
        else{
            cout<<"FRONT ELEMENT :"<<arr[front];
        }
    }
};

int main(){
    queue Q(5);
    Q.push(10);
    Q.push(30);
    Q.push(50);
    Q.pop();
    Q.IsEmpty();
    Q.start();
}