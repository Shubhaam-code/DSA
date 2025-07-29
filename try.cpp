#include <iostream>

using namespace std;

int partition(int arr[],int start, int end){
    int pos=0;

    
    for(int i=0;i<end;i++){
        if(arr[end]<=arr[i]){
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    
    return pos-1;


}
void quicksort(int arr[],int start,int end){
    

    int privot=partition(arr,start,end);

    quicksort(arr,start,privot-1);
    quicksort(arr,privot+1,end);

}




int main(){
    int a[10]={1,4,5,6,7,2,3,10,3};

    quicksort(a,0,9);

    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    
}