#include <iostream>
using namespace std;

int duplicate(int arr[],int end){

    int j=1;
    for(int i=1;i<end;i++){
        if(arr[i]!=arr[j-1]){
            arr[j]=arr[i];
            j++;
        }
    }
    return j;


}

int main(){
    int a[9]={21,33,33,44,44,44,44,55,59};
    int b=duplicate(a,9);

    for(int i=0;i<b;i++ ){
        cout<<a[i]<<" ";
    }

}