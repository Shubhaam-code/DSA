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

    for (int i = 0;i<n;i++){
        for(int j = 0; j<n-i;j++){
            if(array[j]>array[j+1]){
                t=array[j];
                array[j]=array[j+1];
                array[j+1]=t;
            }
        }
    }
    cout<<endl;

    cout<<"SORTED ARRAY :";
    for(int i = 0; i<n;i++){
       cout<<array[i]<<" ";
    }
}


