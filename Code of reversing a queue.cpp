#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(queue<int>&q){
    stack<int>st;
    
    while(!q.empty()){
        int felement = q.front();
        st.push(felement);
        q.pop();
    }
    
    while(!st.empty()){
        int felement = st.top();
        q.push(felement);
        st.pop();
    }
    
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