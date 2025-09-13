#include <iostream>
#include <queue>
using namespace std;
class node 
{
    public:
    int data ;
    node *left;
    node *right;
    node(int n)
    {
        data=n;
        left=NULL;
        right=NULL;
    }

};

int main()
{ 
    queue<node *> q;
    int value,first,second;
    cin>>value;
    node *root=new node(value);
    q.push(root);
    while(!q.empty())
    {
        node *temp=q.front();
        q.pop();
        cin>>first;  //LEFT
        if(first!=-1)
        {
            temp->left=new node(first);
            q.push(temp->left);

        }
        cin>>second; //RIGHT
        if(second!=-1)
        {
            temp->right=new node(second);
            q.push(temp->right);
        }

    }


}