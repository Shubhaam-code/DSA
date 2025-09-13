#include <iostream>
using namespace std;

class node
{ 
    public:
    int data;
    node *left;
    node *right;

    node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

node* binary_tree()
{
    int x;
    
    cin>>x;  
    if(x==-1)
    {
        return NULL;
    }
    
    node *temp=new node(x);

    //left
    cout<<"ENTER THE LEFT CHILD OF "<<x<<" :";
    temp->left=binary_tree();
        
    //right
    cout<<"ENTER THE RIGHT CHILD OF "<<x<<" :";
     temp->right=binary_tree(); 

    
    return temp;
    

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


int main(){
    cout<<"ENTER THE ROOT NODE :";
    node*root = binary_tree(); 
    In_Order(root);

}





