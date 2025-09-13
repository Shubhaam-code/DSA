#include <iostream>
using namespace std;
class node {
public: 
    int data;
    node *next;

    node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {

    int a[5]={2,4,7,9,10};

    node *head;
    head = NULL;
    for(int i=0;i<5;i++){

    if(head == NULL) {
        head = new node(a[i]); // Initialize head with a value
    }
    else{

        node *tail=head;

        while(tail->next != NULL) {
        tail = tail->next;
        }
        node * temp;
        temp = new node(a[i]);
        tail->next = temp;
        } 
     }
}