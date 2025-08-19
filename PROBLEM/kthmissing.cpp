#include <iostream>
using namespace std;

int index(int arr[],int start ,int end,int k ){
    int index=0;
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(arr[mid]==k){
            index=mid;
        }
        else if(arr[mid]>k){
            index=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return index;
}

int main() {
    int a[8]={1,4,6,8,10,14,16,18};
    cout<<"INDEX OF KTH MISSING :"<<index(a,0,7,17);
    
}