#include<iostream>
#include<vector>
using namespace std;
 bool check(vector<int>& nums) {

            int c=0;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            if(j==nums.size()){
                j=0;
            }
            if(nums[i]>nums[j]){
                c++;
            }

        }
        if(c<=1){
            return true;

        }
        return false;
        
    }

int main(){
    vector<int> nums={ 3,4,5,1,2};
    bool ans=check(nums);
    cout<<ans;
}    