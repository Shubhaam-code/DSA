#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>s;

    //PUSH
    s.push(5);
    s.push(5);
    s.push(55);
    s.push(5);
    //SIZE
    cout<<s.size()<<endl;
    //POp
    s.pop();
    cout<<s.size()<<endl;
    // TOP
    cout<<s.top()<<endl;
    //EMPTY
    cout<<s.empty()<<endl; // if empty return 1

}