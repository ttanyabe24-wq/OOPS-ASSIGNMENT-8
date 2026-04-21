// Develop a class template for queue with enqueue and dequeue operations.
#include<iostream>
using namespace std;
template<class T>
class Queue{
int front,rear,size;
T*arr;
public:
Queue(int s){size=s;front=0;rear=-1;arr=new T[size];}
void enqueue(T x){
if(rear==size-1){cout<<"Overflow\n";return;}
arr[++rear]=x;
}
void dequeue(){
if(front>rear){cout<<"Underflow\n";return;}
cout<<arr[front++]<<" dequeued\n";
}
void display(){
if(front>rear){cout<<"Empty\n";return;}
for(int i=front;i<=rear;i++)cout<<arr[i]<<" ";
cout<<endl;
}
};
int main(){
int n,x;
cin>>n;
Queue<int>q(n);
for(int i=0;i<n;i++){cin>>x;q.enqueue(x);}
q.display();
q.dequeue();
q.display();
return 0;
}