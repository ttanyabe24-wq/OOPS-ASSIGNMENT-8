// minimum element in an array
#include<iostream>
using namespace std;

template<typename T>
T tofindmin(T arr[], int n) {
    T minval = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < minval) {
            minval = arr[i];
        }
    }
    return minval;  
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9, 2};
    int n = 7;
    cout << "Min: " << tofindmin<int>(arr, n) << endl;
    return 0;
}
 