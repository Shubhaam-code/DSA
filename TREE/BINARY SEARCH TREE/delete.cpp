#include <iostream>
using namespace std;

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


node* deletenode(node *root,int target)
{
    //BASE CONDITION
    if(!root)
    {
        return NULL;
    }

    
    if(root->data>target)
    {
        root->left=deletenode(root->left,target);
    }
    else if(root->data<target)
    {
        root->right=deletenode(root->right,target);
    }
    else
    {
        // Leaf Node 
        if(!root->left && !root->right)
        {
            delete root;
            return NULL;
        }
        // Child exist
        else if(!root->right) // left child exist
        {
            node *temp=root->left;
            delete root;
            return temp;

        }
        else if(!root->left) // right child exist
        {
            node *temp=root->right;
            delete root;
            return temp;

        }

        // 2 child exist
        else 
        {
            // FInd the greasted element from left
            node * child= root->left;
            node * parent=root;

            while(child->right)
            {
                parent=child;
                child=child->right;
            }
            if(root!=parent)
            {
                parent->right=child->left;
                child->left=root->left;
                child->right=root->right;
                delete root;
                return child;
            }
            else
            {
                child->right=root->right;
                delete root;
                return child;
            }
        }

    }
};


int main()
{
    int arr[]={6,3,17,5,11,12,1,20,14};
    node* root=NULL;

    for(int i=0;i<9;i++)
    {
        root=insert(root,arr[i]);
    }

    deletenode(root,12);


}