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

    node *head;

    if(head == NULL) {
        head = new node(10); // Initialize head with a value
    }

    node *tail;
    tail=new node();
    tail=head;

    while(tail->next != NULL) {
        tail = tail->next;
    }
    node * temp;
    temp = new node(10);
    tail->next = temp;
}