# include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *p1=new int [n];
    for(int i=0;i<n;i++){
        cin>>p1[i];
    }
    for(int i=0;i<n;i++){
        cout<<p1[i]<<" "<<endl;;
    }

    delete [] p1;
//     bool ans=false;
//     vector<int> arr={3,4,-2,5,8,20,-10,8};
//     int sum=0;

//     for(int i=0;i<arr.size();i++){
//         sum+=arr[i];
//     }
//     int psum=0;
//     for(int i=0;i<arr.size()-1;i++){
//         psum+=arr[i];
    
//         if(sum==2*psum){
//             ans=true;
//         }
        

// }
// if(ans){
//     cout<<"yes";
// }
// else{
//     cout<<"no";
// }

}