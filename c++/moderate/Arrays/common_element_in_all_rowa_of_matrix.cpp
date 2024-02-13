#include<iostream>
#include<vector>
using namespace std;
#include<unordered_map>
 vector<int> findCommonElements(vector<vector<int>> &mat)
{
    // Write your code here
    vector<int> ans;
    vector<int> a=mat[0];
    vector<int> b=mat[1];
    vector<int> c=mat[2];

    unordered_map<int,int> a1;
    unordered_map<int,int> b1;
    unordered_map<int,int> c1;
    for(int i=0;i<a.size();i++){
     
        if(!a1[a[i]]){
            a1[a[i]]++;
        }
    }
    for(int i=0;i<b.size();i++){
        if(!b1[b[i]]){
            b1[b[i]]++;
        }
    }
    for(int i=0;i<a.size();i++){
        if(!c1[c[i]]){
            c1[c[i]]++;
        }
    }

    for(int i=0;i<a.size();i++){
        if((a1[a[i]]==b1[a[i]]) && (b1[a[i]]==c1[a[i]])){
            cout<<a[i]<<' ';
            ans.push_back(a[i]);
            a1[a[i]]=0;
        }
    }
    return ans;
    
}

int main(){
    vector<vector<int>> ans={{0,0,1},{1,2,0},{0,0,1}};
    vector<int> don=findCommonElements(ans);
}