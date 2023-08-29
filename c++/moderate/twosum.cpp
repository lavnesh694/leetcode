#include<unordered_map>
#include<vector>
#include<iostream>
using namespace std;
  vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> don;
        unordered_map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int second=target-nums[i];
            if(ans[second] && ans[second] != i ){
                if(i==nums[second])
                    continue;
                don.push_back(i);
                don.push_back(ans[second]);
                return don;
            }
           
        }

      
        return don;
    }
int main(){
    vector<int> don={1,3,4,2};
    vector<int> second=twoSum(don,8);
    for(int i=0;i<second.size();i++){
        cout<<second[i]<< endl;
    }


}