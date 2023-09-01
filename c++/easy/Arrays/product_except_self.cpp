# include<iostream>
#include<vector>
using namespace std;
int *getProductArrayExceptSelf(int *arr, int n)
{
    int sum;
    // int don(5);
    int* don=new int[5];
    for(int i=0;i<n;i++){
        sum=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                sum*=arr[j];
            }
            don[i]=sum;
        }
    }
    return don;
}
int main(){
    int arr[]={1,2,3};
    int* don=getProductArrayExceptSelf(arr,3);

    for(int i=0;i<3;i++){
        cout<<don[i]<<" ";
    }

}