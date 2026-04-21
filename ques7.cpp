// Develop a class template for stack with push and pop operations.
#include<iostream>

using namespace std;
template<class T>
class Stack{
    public:
    int size;
    int top;
    T *arr;
    public:
    Stack(int s){
    size=s;
    top=-1;
    arr=new T[size];
    }

void push(T x){
    if(top==size-1){
        cout<<"overflow";
    }
    arr[++top]==x;

}
void pop(){
    if(top==-1){
        cout<<"underflow";
    }
    cout<<arr[top--];
}
void display(){
      for(int i=top;i>=top;i--){
        cout<<arr[i]<<endl;
      }
}
};
int main(){
    int size;
    int arr;
    Stack<int>s(size);
    int x;
    cout<<"enter array size";
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> x;
        s.push(x);
    }

    cout << "Stack: ";
    s.display();

    // pop one element
    s.pop();

    cout << "After pop: ";
    s.display();

    return 0;

}
