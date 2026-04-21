// bubble sort
#include <iostream>
using namespace std;

template <typename T>
void bubblesort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
int main(){
    int arr[]={55,44,33,66,77};
    int n=5;
    bubblesort(arr,n);
     for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}