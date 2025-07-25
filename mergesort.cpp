#include <iostream>
#include <vector>
using namespace std;



void merge(int a[],int start,int mid,int end){
    vector<int>temp(end-start+1);
    int left =start,right=mid+1,index=0;

    while(start<=mid && right<=end){
        if(a[left]<=a[right]){
            temp[index]=a[left];
            index++;
            left++;
        }
        else{
            temp[index]=a[right];
            index++;
            right++;
        }
        while(left<=mid){
            temp[index]=a[left];
            index++;
            left++;
        }
        while(right<=end){
            temp[index]=a[right];
            index++;
            right++;

        }
    }
    for (int i = 0; i < index; i++) {
        a[start + i] = temp[i];
    }




}


void mergesort(int a[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int mid = start+(end-start)/2;
    // LEFT
    mergesort(a,start,mid);
    // RIGHT
    mergesort(a,mid+1,end);

    merge(a,start,mid,end);

}

int main(){
    int a[5]={5,9,2,1,11};

    mergesort(a,0,4);

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
}