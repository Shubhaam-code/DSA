#include <iostream>
using namespace std;

int peak(int arr[],int start,int end){

    

    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return arr[mid];
        }
        else if(arr[mid]>arr[mid-1]){
            start =mid+1;   
        }
        else{
            end =mid-1;
        }
    }
    return -1;
}

int main(){
    int a[7]={2,4,6,8,10,8,5};
    int value= peak(a,0,6);
    cout<<"MAX VALUE :"<<value;

}