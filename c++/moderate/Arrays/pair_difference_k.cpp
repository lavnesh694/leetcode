#include<iostream>
#include<set>
#include<Algorithm>
#include<vector>
using namespace std;
string isPairDifferenceK(vector<int>arr, int n, int k) {
    // Write your code here.
//    sort(arr.begin(),arr.end());
  int left=0;
  int right=1;
   while (right < n) {
        int diff = arr[right] - arr[left];
        if (diff == k) {
            return "Yes";
        } else if (diff < k) {
            // If the difference is less than k, move the right pointer to the right.
            right++;
        } else {
            // If the difference is greater than k, move the left pointer to the right.
            left++;
            // Ensure left and right pointers are not the same.
            if (left == right) {
                right++;
            }
        }
    }

    return "No";
}
