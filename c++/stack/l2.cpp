#include<iostream>
#include<stack>
using namespace std;

//q1

// In this question we are going to reverse the array using stack not the two pointer approach

void reverse(int arr[],int n){
    stack<int> ans;
    int i=0;
    while(i<n){
        ans.push(arr[i]);
        i++;

    }
    i=0;
    while(!ans.empty()){
        arr[i]=ans.top();
        ans.pop();
        i++;

    }
}
int main(){

    int arr[]={1,2,3,4,5,6};
    reverse(arr,6);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }


}

