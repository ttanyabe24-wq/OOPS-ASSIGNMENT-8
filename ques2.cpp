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
   int n;
    int arr[100];
    cout<<"enter size of array" <<endl;
    cin>>n;
    cout<<"enter array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "Min: " << tofindmin<int>(arr, n) << endl;
    return 0;
}
 
