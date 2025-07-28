#include<iostream>
#include <vector>
using namespace std;

void merge(int arr[],int start ,int mid ,int end){
    vector<int>temp(end-start+1);

    int index=0;
    int left=start;
    int right=mid+1;

    while(left<=mid && right<=end){
        if(arr[left]<arr[right]){
            temp[index]=arr[left];
            index++;
            left++;
        }
        else{
            temp[index]=arr[right];
            index++;
            right++;
        }   
    }
    while(left<=mid){
        temp[index]=arr[left];
        index++;
        left++;
    }
    while(right<=end){
        temp[index]=arr[right];
        index++;
        right++;
    }

    int pos=0;
    while(start<=end){
        arr[start]=temp[pos];
        start++;
        pos++;
    }






}
void mergesort(int arr[],int start,int end){
    //base condition
    if(start>=end){
        return;
    }
    // divide
    int mid = start+(end-start)/2;

    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    // merge
    merge(arr,start,mid,end);
}

int main(){
    int a[10]={8,5,9,3,1,6,5,7,4,10};

    mergesort(a,0,9);

    for(int i=0;i<=9;i++){
        cout<<a[i]<<" ";
    }
}