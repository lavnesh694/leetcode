# include<iostream>
#include<vector>
using namespace std;
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    if(n==0){
        return arr1;
    }
    if(m==0){
        return arr2;
    }
    vector<int> ans;
//     int n= arr1.size();
//     int p= arr2.size();
    
    int i=0,j=0;

    while(i<m && j<n){
        if(arr1[i]==0){

        
         i++;
         continue;
         }
        if(arr2[j]==0){

        
         j++;
         continue;
         }
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i++]);
        }
        else{
            ans.push_back(arr2[j++]);
        }
    }
    while(i<m){
         if(arr1[i]==0){

          i++;
          continue;
        }
        ans.push_back(arr1[i++]);
    }
    while(j<n){
         if(arr2[j]==0) {
            j++;
             continue;
             }
        ans.push_back(arr2[j++]);
    }
    return ans;
}
int main(){
    vector<int> ans;
    vector<int> a={1,5,6,0};
    vector<int> b={1,2,3,0,0};
    ans=ninjaAndSortedArrays(a,b,a.size(),b.size());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}