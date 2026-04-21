#include<iostream>
using namespace std;
template<class T>
void singleparameter( T a){
    cout<<"single parameter taken"<<" " <<a;
}
template<class T>
void twoparameters( T a,T b){
    cout<<"same type of parameters"<<a<<" "<<b;
}
template<class T1 , class T2>
void toparametersd(T1 a,T2 b){
    cout<<"different types"<<a<<" "<<b;
}
int main() {
    int x, a, b;
    double d;

    // single parameter
    cout << "Enter one value: "<<endl;
    cin >> x;
    singleparameter(x);

    // same type
    cout << "Enter two integers: "<<endl;
    cin >> a >> b;
    twoparameters(a, b);

    // different type
    cout << "Enter diiferent: "<<endl;
    cin >> a >> d;
    toparametersd(a, d);

    return 0;
}