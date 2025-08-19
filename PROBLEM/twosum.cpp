#include <iostream>
#include <vector>
using namespace std;

vector<int> temp;

void findpair(int arr[], int start, int end, int target) {
    while (start < end) {
        if ((arr[start] + arr[end]) == target) {
            temp.push_back(arr[start]);
            temp.push_back(arr[end]);
            break;
        }
        else if ((arr[start] + arr[end]) > target) {
            end--;
        }
        else {
            start++;
        }
    }
}

int main() {
    int a[5] = {2, 7, 11, 15, 27};
    findpair(a, 0, 4, 22);
    
    if (temp.size() >= 2) {
        cout << temp[0] << " " << temp[1];
    } else {
        cout << "No pair found";
    }
}