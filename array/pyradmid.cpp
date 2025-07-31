#include <iostream>
using namespace std;
int main(){
    int row, space,col;
    for(row=1;row<=5;row++){
        for(space=1;space<=5-row;space++){
            cout<<" ";
        }
        for(col=1;col<=row;col++){
            cout<<col<<" "; 
        }
        for(col=row-1;col>=1;col--){
            cout<<col<<" ";

        }
        cout<<endl;
    }
}