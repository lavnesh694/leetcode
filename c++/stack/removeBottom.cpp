#include<iostream>
#include<stack>
using namespace std;
void bottom(stack<int>&ans){
    stack<int> s;
    int n=ans.size()-1;
    for(int i=n;i>0;i--){
        s.push(ans.top());
        ans.pop();

    }
    ans.pop();
    while(!s.empty()){
        ans.push(s.top());
        s.pop();
    }
}

int main(){
    stack<int> ans;
    ans.push(1);
    ans.push(2);
    
    ans.push(3);
    ans.push(4);
    ans.push(5);
    bottom(ans);
 

    while(!ans.empty()){
        cout<<ans.top()<<endl;
        ans.pop();
    }

}