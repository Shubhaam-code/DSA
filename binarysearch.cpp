#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER THE VALE OF N :";
    cin>>n;
    int a[n];


    cout<<"ENTER THE ELEMENT IN SORT FORM :";

    for(int i =0 ; i<n;i++){
        cin>>a[i];
    }

    
    int i = 0,j = n-1 ,mid;

    int value,flag =0 ;
    cout<<"enter the value :";
    cin>>value;
    while(i<=j){
        mid = (i+j)/2;
        if(a[mid]==value){
            cout<<"found at "<<mid+1<<endl;
            flag=1;
            break;
        }
        if(a[mid]>value){
            j=mid-1;
        }
        if(a[mid]<value){
            i=mid+1;
        }
    }
   if(flag==0){
    cout<<"NOT FOUND";
   } 



}