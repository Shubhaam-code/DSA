#include <iostream>
using namespace std;
class node
{
    public:

  int data;
  node *next;
  node(int value){
    data=value;
    next = NULL;
  }

};
int main()
{
    node * head;
    head = NULL;


    int a[]={2,4,6,8,10};

    for(int i = 0;i<5;i++)
    {

        if(head==NULL)
        {
            head =new node(a[i]);
        }
        else
        {
            node *temp;
            temp =new node();
            temp->next=head;
            head=temp;

        }
    }
    while(temp!=NULL)
    {
            cout<<temp->data;
            cout<<temp->next;

    }



}