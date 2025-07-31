#include <iostream>
using namespace std;

int rotate_target(int arr[],int start,int end,int target){
    
    int ans=-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(arr[mid]==target){
            return mid;
            
        }
        
        else if(arr[mid]>arr[start]){
                 if(arr[start]<=target && target<arr[mid]){
                     end=mid-1;
                        }
                 else{
                    start=mid+1;
                       }
                
        }
        else{
            if(arr[mid]<target && target<=arr[end]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        
    }
    return -1;
   
}

int main() {
    int a[6]={4,5,7,1,2,3};
    int value=rotate_target(a,0,5,20);
    cout<<" FOUND AT INDEX :"<<value;


    return 0;
}