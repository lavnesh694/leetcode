#include<iostream>
using namespace std;
void b(int arr[],int n){
  for(int j=1;j<n;j++){
    int value=arr[j];
    int i=j-1;
    while(i>=0 && value<arr[i]){
        arr[i+1]=arr[i];
        i=i-1;
    }
    
    arr[i+1]=value;
  }
}
int main(){

    int arr[]={5,3,2,4,1};
    b(arr,5);
    for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";
    }

}