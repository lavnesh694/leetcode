#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k){
    // Write your code here
            vector<int> c;
            c.insert(c.end(),arr1.begin(),arr1.end());
            c.insert(c.end(),arr2.begin(),arr2.end());
            sort(c.begin(),c.end());
            int ans=0;

            for(int i=0;i<c.size();i++){
                if(i==k){
                    return c[i-1];
                }
            }
            return ans;
          
}
int main(){

}