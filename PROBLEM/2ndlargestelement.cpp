#include <iostream>
using namespace std;


class largest{
    

    
    int arr[8];

    public:
    largest(){
        
        for(int i=0;i<=7;i++){
            cout<<"ENTER THE "<<i+1<<" ELEMENT ";
            cin>>arr[i];
        }
    }
    
   
    void display(){
         cout<<"MY ARRAY LIST IS :";
        for(int i =0;i<=7;i++){
            
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
    
    
    void find(){
        int max1;
        int max2;
        if(arr[0]>arr[1]){
            max1=arr[0];
            max2=arr[1];
        }
        else{
            max2=arr[0];
            max1=arr[1];
        }
        for(int i=2;i<=7;i++){
            if(arr[i]>max1){
                max2=max1;
                max1=arr[i];
            }
            else{
                if(arr[i]>max2){
                    max2=arr[i];
                }
            }
        }
        cout<<"1st LARGEST ELEMENT :"<<max1<<endl;
        cout<<"2nd LARGEST ELEMENT :"<<max2<<endl;
    }
       
};

int main(){
    largest aa;
    aa.display();
    aa.find();
}