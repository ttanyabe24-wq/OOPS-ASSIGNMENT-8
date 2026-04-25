#include<iostream>
using namespace std;
template <class T>
void swapans(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int num1,num2;
cout<<"enter numbers you want to swap: ";
    cin>>num1>>num2;
    cout<<"hence number before swapping are: "<<num1<<num2<<endl;
 swapans(num1,num2);
    cout<<"after swap : "<<num1<<num2;
}
