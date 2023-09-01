# include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> a ={2,4,6};
    vector<int> b ={1,3,5};

    vector<int> c;
    double ans;
    c.insert(c.end(),a.begin(),a.end());
    c.insert(c.end(),b.begin(),b.end());
    sort(c.begin(), c.end());
    // for(int i=0; i<c.size(); i++){
    //     cout<<c[i]<<" ";
    // }
        int i=c.size()/2;
    if(c.size()%2==0){
        // cout<<c[i]<<c[i-1]<<endl;
        int j=i-1;
        // ans=(c[i]+c[j])/2;
          ans = static_cast<double>(c[i] + c[j])/2;
    }
    else{
        ans=c[i];

    }
   
   cout<<"the median is" << ans;


}