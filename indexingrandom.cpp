#include <iostream>
using namespace std;
int main(){
    int a[6]={1,2,3,4};
    int n = 4;
    cout<<"Previous array :";

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int position, value;
    cout<<"ENTER THE POSTION :";
    cin>>position;

    if(position <0|| position>n){
        cout<<"INVAILD POSTION";
    }
    cout<<"ENTER THE VALUE :";
    cin>>value;
    
    for(int i=n;i>position;i--){
        a[i]=a[i-1];
    }
    a[position]=value;

    n++;

    cout<<"new array";
    for(int i =0; i<n;i++){
        cout<<a[i]<<" ";
    }

    

}


