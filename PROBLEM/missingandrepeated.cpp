#include <iostream>
using namespace std;

int find(int arr[],int end){
    int ctr=1;
    int repeat=0;
    int missing;

    for(int i=0;i<end;i++){
        for(int j=0;j<end;j++){
            if(arr[j]==ctr && ctr<8){
                repeat+=1;
            }
            
        }
        ctr+=1;
        if(repeat==0){
            missing=arr[j];
        }

       
    }
    return missing;
}

int main(){
    int a[7]={4,3,2,1,2,7,6};
    cout<<find(a,6);
}