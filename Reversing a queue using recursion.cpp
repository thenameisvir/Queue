#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(queue<int>&q){
   if(q.empty()){
       return;
   }
   
   int num = q.front();
   q.pop();
   
   reverse(q);
   
   q.push(num);
    
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    
    reverse(q);
    while(!q.empty()){
        int n = q.front();
        cout<<n<<" ";
        q.pop();
    }
}