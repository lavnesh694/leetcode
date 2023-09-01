#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int Largest(int *arr,int &maxi,int i){
    if(i==-1){
        return maxi;
    }
    maxi=max(maxi,arr[i]);
    // cout<<maxi<<endl;
    // i=i+1;

    return Largest(arr,maxi,i-1);

}
int main(){
    int arr[]={21,2,34,100,32,9,890};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    int max=INT_MIN;
    int i=n-1;
    int ans=Largest(arr,max,i);
    cout<<"the maximum value in the arrary is "<<ans;

}