#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(queue<int>& q){
    stack<int> ans;
    queue<int>bahu;
    while(!q.empty()){
        int don=q.front();
        q.pop();
        ans.push(don);

    }
    while(!ans.empty()){
        int don=ans.top();
        ans.pop();
        bahu.push(don);

    }
    q=bahu;
}
int main(){
    queue<int> q({1,2,3,4,5});
    reverse(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

}