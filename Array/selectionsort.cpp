#include<iostream>
using namespace std;
void sorting (int arr[], int n){
    
    for(int i=0;i<n-1;i++){
        int min=arr[i];
        int loc=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                loc=j;
            }



    }
    swap(arr[i],arr[loc]);

}
}
int main(){
    int arr[]={5,4,1,3,2};
    sorting(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";

    }
}