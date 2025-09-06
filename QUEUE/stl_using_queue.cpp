#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int>Q;
    Q.push(5);
    Q.push(5);
    Q.push(5);
    Q.push(5);
    Q.push(5);
    Q.pop();
    cout<<Q.size()<<endl;
    cout<<Q.front()<<endl;
    cout<<Q.empty()<<endl;


}