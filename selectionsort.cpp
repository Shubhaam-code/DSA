#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"ENTER THE VALUE OF N :";
    cin>>n;

    int array[n];


    for(int i=0;i<n;i++){
        cout<<"ENTER THE "<< i+1<<" NO :";
        cin>>array[i];   
    }

    cout<<"PREVIOUS ARRAY :";
    for(int i = 0; i<n;i++){
       cout<<array[i]<<" ";
    }


    int i ,j,t;

    for (int i = 0;i<n-1;i++){
        for(int j = i+1; j<n;j++){
            if(array[i]>array[j]){
                t=array[i];
                array[i]=array[j];
                array[j]=t;
            }
        }
    }
    cout<<endl;

    cout<<"SORTED ARRAY :";
    for(int i = 0; i<n;i++){
       cout<<array[i]<<" ";
    }
}


