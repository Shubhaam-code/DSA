#include <iostream>
using namespace std;


int first(int arr[],int start ,int end,int target){
    int first=-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            first=mid;
            end=mid-1;   
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return first;
}

int last (int arr[],int start,int end,int target){
    int last=-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            last=mid;
            start=mid+1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return last;
}

int main(){
    int a[6]={5,7,7,8,8,10};
    cout<<"FIRST INDEX:"<<first(a,0,5,8)<<endl;
    cout<<"SECOND INDEX:"<<last(a,0,5,8);
}