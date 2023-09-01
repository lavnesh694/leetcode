#include<iostream>
#include<set>
#include<Algorithm>
#include<vector>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
       set<vector<int>> st;
       for(int i=0;i<nums.size();i++){
        set<int>hashset;
        for(int j=0;j<nums.size();j++){
            int k=-(nums[i]+nums[j]);
            if(hashset.find(k)!=hashset.end()){
                vector<int> temp={nums[i],nums[j],k};
                sort(temp.begin(), temp.end());
                st.insert(temp);

            }
                hashset.insert(nums[j]);
        }
       }
       vector<vector<int>> ans(st.begin(),st.end());
       return ans;
    }

    // second approach
    vector<vector<int>> triplet(int n, vector<int> &nums)
{
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1])
                    j++;
                while (j < k && nums[k] == nums[k + 1])
                    k--;
            }
        }
    }
    return ans;
    // Write your code here.
}

//     vector<vector<int>> triplet(int n, vector<int> &nums)
// {
//     vector<vector<int>> ans;;
//    sort(nums.begin(),nums.end());
//    for(int i=0;i<n;i++){
//     if(i>0 && nums[i]==nums[i-1]) continue;
//     int j=i+1;
//     int k=n-1;
//     while(j<k){
//         int sum=nums[i]+nums[j]+nums[k];
//         if(sum<0){
//             j++;
//         }
//         else if(sum>0){
//             k--;
//         }
//         else{
//             vector<int> temp={nums[i],nums[j],nums[k]};
//             ans.push_back(temp);
//             j++;
//             k--;
//             while( j< k &&  nums[j]=nums[j-1]) j++;
//             while( j<k &&nums[k]=nums[k+1]) k--;
//         }
//     }
//    }
//    return ans;
//     // Write your code here.
// }

    
int main(){
    vector<int> ans={-1,0,1,2,-1,4};
    vector<vector<int>>don=triplet(6,ans);
    for(int i=0;i<don.size();i++){
        for(int j=0;j<don[i].size();j++){
            cout<<don[i][j]<<" ";
        }
        cout<<endl;
    }

}