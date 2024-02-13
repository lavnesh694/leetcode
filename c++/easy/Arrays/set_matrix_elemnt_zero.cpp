// #include <bits/stdc++.h>
#include<vector>
#include<iostream>
#include<set>
#include<utility>
using namespace std;

void setZeros(vector<vector<int>> &matrix)

{
	set<pair<int,int> > don;
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[i].size();j++){
			if(matrix[i][j]==0){
				pair<int,int> ans=make_pair(i,j);
				don.insert(ans);

			}
		}
	}
	for(pair<int,int> ans: don){
		int first=ans.first;
		int second=ans.second;
		matrix[first]=vector<int>(matrix[first].size(),0);
		
		for(int j=0;j<matrix.size();j++){
			matrix[j][second]=0;
		}
        cout<<first<<" "<<second<< endl;
	}
	// Write your code here.
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

        cout<<matrix[i][j]<<" ";
        }
    cout<<endl;
    }
}

int main(){
    vector<vector<int> > ans={{1,2,3},{4,0,0},{6,7,8}};
    setZeros(ans);

}