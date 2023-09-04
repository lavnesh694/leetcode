#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> findRepeatingAndMissingNumbers(vector<int> nums)
{
    // Write your code here.
    vector<int> ans;
    unordered_map<int,int> don;
    for(int i=0;i<nums.size();i++){
        don[nums[i]]++;
    }
    for(int i=1;i<=nums.size();i++){
        if(don[i]>1){
            ans.push_back(i);
        }
      
    }
    for(int i=1;i<=nums.size();i++){
        if(don[i]==0){
            ans.push_back(i);
        }
      
    }
    return ans;

}
int main(){

}