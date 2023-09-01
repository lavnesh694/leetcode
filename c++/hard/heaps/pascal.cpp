#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> don;
    for(int i=0;i<N;i++){
        vector<int>temp;
        for(int j=0;j<=i;j++){
             if(j==0 || j==i ){
              temp.push_back(1);
          }
          else{
              temp.push_back(don[i-1][j]+don[i-1][j-1]);
          }

        }
        don.push_back(temp);
    }
    return don;
}