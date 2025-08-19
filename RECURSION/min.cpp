#include <iostream>
using namespace std;

int minarray(int arr[],int index ,int n){
    if(index==n){
        return arr[index];
    }
    return min(arr[index],minarray(arr,index+1,n));
    
    
}

int main(){
    int a[5] ={7,5,2,11,4};
    
    cout<<minarray(a,0,4);
}