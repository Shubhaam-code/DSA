#include <iostream>
using namespace std;

class node{
    public:

    int data;
    node * prev;
    node * next;
    node(int value){
        data=value;
        prev=NULL;
        next=NULL;
    }
}; 