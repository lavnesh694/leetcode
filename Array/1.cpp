#include<iostream>
#include<vector>
// #include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
vector<int> majority(vector<int> &arr)
{
    // Write your code here.
    int ans=(arr.size()/3);
    unordered_map<int,int> bhau;

    vector<int> bhopu;

    // cout<<ans;
    for(int i=0;i<arr.size();i++){
        bhau[arr[i]]=0;
    }

    for(int i=0;i<arr.size();i++){
        // cout<<bhau[arr[i]]<<" ";
        bhau[arr[i]]++;
        if(bhau[arr[i]]>ans){
            bhopu.push_back(arr[i]);
        }
    }
    return bhopu;


}
int main(){
    vector<int> arr={5 ,3 ,2 ,4 ,1 ,6};
    arr=majority(arr);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

}