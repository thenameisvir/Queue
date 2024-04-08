#include<iostream>
using namespace std;
class Cqueue{
  public:
  int *arr;
  int size;
  int front;
  int rear;

  Cqueue(int size){
    this->size = size;
    arr = new int[size];
    front = -1;
    rear = -1;
  }

  void push(int val){
    if(front==-1&&rear==-1){
      rear++;
      front++;
      arr[rear] = val;
    }
    else if(front==0&&rear == size-1){
      cout<<"Overflow in the curcuar queue: "<<endl;
      return;
    }
    else if(rear==size-1&&front!=0){
      rear = 0;
      arr[rear] = val;
    }
    else{
      rear++;
      arr[rear] = val;
    }
  }

  void pop(){
     if(front==-1&&rear==-1){
      cout<<"Underflow in the circular queue: "<<endl;
      return;
     }
     else if(rear==front){
      arr[front] = -1;
      front++;
     }
     else if(front==size-1){
      arr[front] = -1;
      front = 0;
     }
     else{
      arr[front] = -1;
      front++;
     }
  }
  void print(){
    cout<<"Printing the queue: "<<endl;
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }
};

int main(){

  Cqueue q(5);
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);


  q.print();

  q.pop();
  q.pop();
  q.pop();

  cout<<endl;
  q.print();

  cout<<endl;
  q.push(44);
  q.print();
}