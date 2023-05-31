#include<iostream>
#include<vector>
using namespace std;
vector<int> getRow(int rowIndex) {
      
      vector<int> cur;
    
      if (rowIndex == 0){

       cur.push_back(1);
       return cur;
      } 
      cur.push_back(1);
      vector<int> prev=getRow(rowIndex-1);
      for(int i=1;i<rowIndex;i++){
          cur.push_back(prev[i-1]+prev[i]);
      }
      cur.push_back(1);
    return cur;
    }
int main(){

    int n;
    cout<<"Enter which row you want to see in pascal triangle"<<endl;
    cin>>n;
    vector<int> row=getRow(n);
    for(int i=0;i<row.size();i++){
        cout<<row[i]<<" ";
    }

}