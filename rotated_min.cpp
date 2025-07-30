#include <iostream>
using namespace std;


int rotate_min(int arr[],int start,int end){

    int ans=arr[0];

    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            ans=arr[mid];
            end=mid-1;
            
            

        }
    }
    return ans;


}

int main(){
    int a[6]={4,6,8,11,2,3};
    int value= rotate_min(a,0,5);
    cout<<"MIN VALUE :"<<value;

}