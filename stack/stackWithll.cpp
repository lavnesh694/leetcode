#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int data){
        this->data=data;
        next=NULL;
    }
};

class stack{
    public:
    int top=-1;
    node*head;
    int cap;

    stack(int cap){
        this->cap=cap;
    }

    void push(int n){
        if(top==cap-1){
            cout<<"overflow"<<endl;
            return;
        }
        node* ans=new node(n);
        ans->next=head;
        head=ans;
        top++;
        


    }
    void pop(){
        if(top==-1){
            cout<<"underflow"<<endl;
            return;
        }
        // node* ans=new node(n);
        // ans->next=head;
        cout<<head->data<<endl;
        head=head->next;
        top--;



    }
    void  topi(){
        if(top==-1){
            cout<<"underflow"<<endl;
            return;
        }
        cout<< head->data<<endl;

    }
    bool isfull(){
        if(top==cap-1){
            return true;
        }
        return false;
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        return false;
    }
    
    
};
int main(){
    stack s(5);
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    // s.push(1);
    s.push(11);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.topi();
}