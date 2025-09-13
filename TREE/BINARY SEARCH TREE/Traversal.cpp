#include <iostream>

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

node* insert(node* root,int target)
{
    if(!root)
    {
        node *temp=new node(target);
        return temp;
    }
    if(target<root->data)
    {
        root->left=insert(root->left,target);
    }
    else
    {
         root->right=insert(root->right,target);

    }
    return root; 

};

void In_Order(node* root)
{
    if(!root)
    {
        return;
    }
    In_Order(root->left);
    cout<<root->data<<" ";
    In_Order(root->right);
};


int main()
{
    int arr[]={6,3,17,5,11,12,1,20,14};
    node* root=NULL;

    for(int i=0;i<9;i++)
    {
        root=insert(root,arr[i]);
    }
    In_Order(root);

}