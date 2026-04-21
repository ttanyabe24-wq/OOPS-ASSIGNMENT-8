// Create a class template to store and display a pair of values.
#include<iostream>
using namespace std;
template<class T1,class T2>
class show{
    T1 a;
    T2 b;
    public:
void input(){
    cin>>a>>b;
}
void display(){
     cout << "Values: " << a << " " << b << endl;
}
 };
    int main(){
        show<int,int>s;
        s.input();
        s.display();
    }
