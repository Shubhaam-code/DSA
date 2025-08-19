#include <iostream>
using namespace std;

void index(int arr[], int start, int end) {
    while (start < end) {
        if (arr[start] == 0) {
            start++;
        }
        else {
            if (arr[end] == 0) {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            else {
                end--;
            }
        }
    }
}

int main() {
    int a[8] = {1, 0, 0, 1, 0, 1, 1, 0};
    index(a, 0, 7);
    for (int i = 0; i < 8; i++) {
        cout << a[i] << " ";
    }
}