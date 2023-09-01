#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int> &arr,int k){
    vector<int> temp(arr.size());
    for(int i=0;i<arr.size();i++){
        temp[(i+k)%arr.size()]=arr[i];
    }

    arr=temp;
    

}
int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    rotate(arr,3);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }




}