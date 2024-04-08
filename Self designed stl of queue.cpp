#include<iostream>
using namespace std;
class Queue{
  public:
  int *arr;
  int front;
  int rear;
  int size;

  Queue(int size){
    arr = new int[size];
    front = -1;
    rear = -1;
    this->size = size;
  }

  void push(int val){
    if(rear==-1&&front==-1){
      rear++;
      front++;
      arr[rear] = val;
    }
    else if(rear==size-1){
      cout<<"Over flow in the queue: "<<endl;
      return;
    }
    else{
      rear++;
      arr[rear] = val;
    }}
  void pop(){
    if(rear==-1&&front==-1){
      cout<<"Underflow in the queue: "<<endl;
    }
    else if(rear==front){
      rear = -1;
      front = -1;
      arr[front] = -1;
    }
    else{
      front++;
      arr[front] = -1;
    }
  }

  bool isempty(){
     if(front==-1&&rear==-1){
      return true;
     }
     else{
      return false;
     }
  }

  int getsize(){
    return rear - front+1;
  }

  int getfront(){
    if(front==-1){
      cout<<"No element in queue: "<<endl;
    }
    else{
          
    return arr[front];
    }
  }

  int getlast(){
    if(rear==-1){
      cout<<"No element in the queue: "<<endl;
    }
    else{
      return arr[rear];
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
  Queue q(5);
  q.print();
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.print();cout<<endl;
  cout<<q.getlast();
  
}