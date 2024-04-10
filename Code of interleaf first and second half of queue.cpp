#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void interleave(queue<int>&q,queue<int>&q1,queue<int>q2){
    int n = q.size();
    int m1 = n/2;
    int m2 = n-m1;
    for(int i=0;i<m1;i++){
        q1.push(q.front());
        q.pop();
    }
    
    for(int i=0;i<m2;i++){
        q2.push(q.front());
        q.pop();
    }
    
    while(!q1.empty()&&!q2.empty()){
        q.push(q1.front());
        q.push(q2.front());
        q1.pop();
        q2.pop();
    }
    
    while(!q1.empty()){
        q.push(q1.front());
        q1.pop();
    }
    
    while(!q2.empty()){
        q.push(q2.front());
        q2.pop();
    }
}
int main()
{
     queue<int>q;
     q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);
     q.push(5);
     q.push(6);
     q.push(7);
     q.push(8);
     queue<int>q1;
     queue<int>q2;
     
     interleave(q,q1,q2);
     
     while(!q.empty()){
         int a = q.front();
         cout<<a<<" ";
         q.pop();
     }
}