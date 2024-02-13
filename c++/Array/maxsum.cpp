# include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){

    vector<int> arr={-2,1};
    

    int i=0;
    int sum=0;
    int maxsum=INT_MIN;
    while(i<arr.size()){


        sum+=arr[i];
        cout<<sum<<endl;
        if(sum>maxsum  ){
            maxsum=sum;
        }
        if(arr[i]>maxsum){
            maxsum=arr[i];
        }
        if(sum<0 ){
            sum=0;
        }
        i++;
       

    }

    cout<<"the max sum is "<<maxsum;
  

}