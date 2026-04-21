// to find max element
#include<iostream>
using namespace std;

template<typename T>
T tofindmax(T arr[], int n) {
    T maxval = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] >maxval) {
            maxval = arr[i];
        }
    }
    return maxval;
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2};
    int n = 7;
    cout << "max:" << tofindmax<int>(arr, n) << endl;
    return 0;
}