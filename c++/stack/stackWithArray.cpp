#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int capacity;
    int top;

    stack( int cap){
        arr = new int[cap];
        capacity = cap;
        top=-1; 
    }

   
    void push(int n){
    
        if(top+1==capacity){
            cout<<"overflow";
            return;

        }
        top=top+1;
        arr[top]=n;
    }
    int topi(){
        if(top==-1){
            cout<<"underflow";
            return -1;
        }
        return arr[top];
    }
    void pop(){
        if(top==-1){
            cout<<"underflow";
            return;
        }
        cout<<arr[top];
        top--;
    }
    bool full(){
        if(top==capacity-1){
            return true;
        }
        return false;
    }
    bool empty(){
        if(top==-1){
            return true;
        }
        return false;
    }

  


};
int main(){
    stack  s(5);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    int ans=s.topi();
   cout<<ans;
   
    

}