# include<iostream> 
using namespace std;
#include<vector>
#include<stack>

vector<int> nextSmallerElement(vector<int> arr,int n){
    vector<int> result(n,-1);
    stack<int> ans;

    for(int i=0;i<n;i++){
        while(!ans.empty() && arr[ans.top()]>=arr[i]){
            ans.pop();
        }
        if(!ans.empty()){
            result[i]=ans.top();
        }
        ans.push(i);
    }
    return result;
}


int main() {
    vector<int> arr={2,1,4,3};
    arr=nextSmallerElement(arr,4);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }

}