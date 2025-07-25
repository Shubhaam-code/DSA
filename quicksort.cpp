 #include <iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int pos=start;
    
    for(int i=start;i<end;i++)
    {
        if(arr[i]<arr[end])
        {
            swap(arr[pos],arr[i]);
            pos++;
        }
        
    }
    swap(arr[pos], arr[end]); 
    return pos;
    
    
}

void quicksort(int arr[],int start ,int end ){
    if(start >= end) {  
        return;
    }
    
    int privot =partition(arr,  start , end);
    
    // left
    quicksort(arr,start,privot-1);
    //Right
    quicksort(arr,privot+1,end);
    
    
}


int main() {
    int arr[6]={5,2,8,7,1,4};
    quicksort(arr,0,5);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}