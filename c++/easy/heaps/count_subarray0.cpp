// #include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;
int countSubarrays(int n, vector<int> &arr){
    // Write your code here.
    int sum,c=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<endl;
            if(sum==0){
                c++;
            }

        }
    }
    
    return c;
}
int main(){
    vector<int> arr={-1,1,0,-1};
   int  ans=countSubarrays(4,arr);
    cout<<ans;
}
