#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> countTheNumber(vector<int> &arr, int n, int k) {
	// Write your code here.
	vector<int> ans;
	unordered_map<int,int> bahu;
	int len=n/k;
	for(int i=0;i<n;i++){
		bahu[arr[i]]++;
		

 
	}
	for(int i=0;i<n;i++){
		if(bahu[arr[i]]>=len && bahu[arr[i]!=-1]){
			ans.push_back(arr[i]);
			bahu[arr[i]]=-1;
		}
	}
	return ans;
}
int main(){

}