#include<iostream>
using namespace std;
template <class T>
void swapans(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
int x=9;
int y=8;
swapans(x,y);
cout<<"ans after values are swapped is"<<x<<" "<<y;
}
