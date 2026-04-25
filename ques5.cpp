// linear search
#include<iostream>
using namespace std;

template<typename T>
T linearsearch(T arr[],int n,T tofind){
    for(int i=0;i<n;i++){
        if(arr[i]==tofind){
            return i;
        }
        else{
            return -1;
        }
    }
}
int main() {
    int n;
    int arr[100];

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = linearsearch<int>(arr, n, key);

    if(result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
