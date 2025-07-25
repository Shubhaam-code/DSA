#include <iostream>
using namespace std;

void mergesort(int arr[],int start,int end)
{
    if(start==end)
    {
        return
    }
    int mid = start+(end-start)/2;
    // LEFT
    mergesort(arr,start,mid);
    

}