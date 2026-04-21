// Class template to input and display array elements
#include<iostream>
using namespace std;
template<class T>
class arr{
   T arr[100];
   int size;
   public:
   void input(){
    cout<<"enter size: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
   }
   void display(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
   }

};
int main() {
    arr<int> a;
    a.input();
    a.display();
}
