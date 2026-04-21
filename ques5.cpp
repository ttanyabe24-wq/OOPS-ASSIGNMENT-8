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
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, tofind = 30;
    int result = linearsearch(arr, n, tofind);
    if (result != -1)
        cout << "Found at index: " << result << endl;
    else
        cout << "Not found" << endl;
    return 0;
}