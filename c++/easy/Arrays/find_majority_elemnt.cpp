#include<iostream>
#include<unordered_map>
using namespace std;
int findMajorityElement(int arr[], int n) {
	// Write your code here.
	unordered_map<int,int> ans;
	int len=n/2;
	for(int i=0;i<n;i++){
		ans[arr[i]]++;
		if(ans[arr[i]]>len){
			return arr[i];
		}
	}
	return -1;
	
}
int main(){
    int arr[]={5,2,0,0};
    int ans=findMajorityElement(arr,4);
    cout<<"the ans is "<<ans;

}