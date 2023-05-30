#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int> & s,int index,int element){
    if(index>=s.size()){
        return;
    }
    stack<int> news;
    for(int i=s.size()-1;i>=index;i--){
        news.push(s.top());
        s.pop();
        


    }
    s.push(element);
    while(!news.empty()){
        s.push(news.top());
        news.pop();
    }

}
int main(){
    stack<int> ans;
    ans.push(1);
    ans.push(2);
    ans.push(3);
    ans.push(4);
    ans.push(5);
    insert(ans,8,100);
    while(!ans.empty()){
     cout<<ans.top()<<endl;
     ans.pop();
    }
    // now we want to insert element at 2nd index;
  



}