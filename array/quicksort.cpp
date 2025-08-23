// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int partition(int arr [],int start ,int end){

    int pos=start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[pos],arr[i]);
            pos++;
        }
    }
    
    return pos-1;
    
}

void quicksort(int arr [],int start ,int end){
    
    if(start>=end){
        return;
    }
    
    int privot=partition(arr ,start,end);
    // left
    quicksort(arr , start ,privot-1);
    // right
    quicksort(arr , privot+1 , end);
}

int main() {
    int a[7]={5,8,1,3,7,2,4};
    quicksort(a,0,6);
    for(int i = 0; i < 7; i++) {
        cout << a[i] << " ";
    }

    return 0;
}