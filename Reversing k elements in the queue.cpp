#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(queue<int>&q,int r){
   stack<int>st;
   
   int n = q.size();
   
   for(int i=0;i<r;i++){
       st.push(q.front());
       q.pop();
   }
   
   while(!st.empty()){
       q.push(st.top());
       st.pop();
   }
   
   for(int i=0;i<n-r;i++){
       q.push(q.front());
       q.pop();
   }
    
}
int main(){
    queue<int>q;
    int r = 4;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    
    reverse(q,r);
    while(!q.empty()){
        int n = q.front();
        cout<<n<<" ";
        q.pop();
    }
}