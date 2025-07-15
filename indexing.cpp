#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENTER THE VALUE OF N :";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER THE NO :"<<endl;
        cin>>array[i];
    }
    cout<<"Previous array :";
    for(int i=0;i<n;i++){
        
        cout<<array[i]<<" ";
    }
    cout<<endl;

    int newarray[n+1];
    for(int i=0;i<n;i++){
        newarray[i]=array[i];
    }

    int newvalue;
    cout<<"ENTER THE NEW VALUE :"<<endl;
    cin>>newvalue;
    
    newarray[n]=newvalue;
    cout<<"NEW ARRAY :";

    for(int i=0;i<=n;i++){
        cout<<newarray[i]<<" ";
    }
    return 0;
}