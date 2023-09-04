# include<iostream>
using namespace std;
class TwoStack {

public:
   int top1;
   int top2;
   int *arr;
   int size;

    // Initialize TwoStack.
    TwoStack(int s) {
        arr=new int[s];
        top1=-1;
        size=s;
        top2=size-1;
        // Write your code here.
    }
    
    // Push in stack 1.
    void push1(int num) {
        top1++;
        if(top1==top2){
            return;
        }
        arr[top1]=num;
        // Write your code here.
    }

    // Push in stack 2.
    void push2(int num) {
        top2--;
        if(top1==top2){
            return;
        }
        arr[top2]=num;
        // Write your code here.
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1==-1){
            return -1;
        }
        top1=top1-1;
        return arr[top1+1];

        // Write your code here.
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
         if(top2==size){
            return -1;
        }
        top2=top2+1;
        return arr[top2-1];
        
        // Write your code here.
    }
};
