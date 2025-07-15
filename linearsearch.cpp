#include <iostream>
using namespace std;
int main(){
    int element,flag=0;
    cout<<"Enter The Element Which You Want :";
    cin>>element;

    int a[5]={1,4,5,6,7};

    for(int i= 0;i<5;i++){
        if(a[i]==element){
            flag=1;
            cout<<"found at position "<<i+1<<endl;
            break;

        }
    }

    if(flag==0){
            cout<<"NOT FOUND";
        }    

}


