#include<iostream>
#include<vector>
using namespace std;
    void moveZeroes(vector<int>& nums) {
        vector<int> arr;
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                // cout<<"terii "<<endl;
                arr.push_back(nums[i]);
                // cout<<arr[i];
              


            }
            else{
                c++;
            }
            
        }
        // cout<<c;
        while(c!=0){
            arr.push_back(0);
            c--;
        }
      nums=arr;
        
    }

int main(){
    vector<int> ans={0,1,0,3,12};

    moveZeroes(ans);
    for(auto i:ans){
        cout<<i<<" ";
    }

}
