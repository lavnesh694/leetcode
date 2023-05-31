#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            vector<int> innerList;
            innerList.push_back(1);
            if (i>1){
                for (int j=1;j<i;j++){
                    innerList.push_back(ans[i-1][j-1]+ans[i-1][j]);
                }
            }

            if (i>0) innerList.push_back(1);
            ans.push_back(innerList);
        }
        return ans;
        
    }
int main(){
  int n;
  cout<<"ENter the no of rows you want in pascal trinagle"<<endl;
  cin>>n;
  vector<vector<int>> ans=generate(n);
  for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
    
}