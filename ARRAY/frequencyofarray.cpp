#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"ENTER THE VALUE OF N :";
    cin>>n;
    int array[n];
    cout<<"ENTER THE NO :"<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int value ,count =0;
    cout<<"ENTER THE VALUE :";
    cin>> value;

    for(int i= 0;i<n;i++){
        if(array[i]==value){
            count++;
        }
    }
    cout<<"COUNT :"<<count<<endl;

    if(count==0){
            cout<<"ELEMENT NOT PRESENT";
        }
        
    

}