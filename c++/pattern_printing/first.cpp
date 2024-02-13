#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int j=2*i-1;j>0;j--){
            cout<<"*";
        }
        
        // for(int j=n-i-1;j>0;j--){
        //     cout<<" ";
        
        // }
        
        // for(int k=0;k<=i;k++){
        //     cout<<"*";
            
        // }
        // for(int k=1;k<=i;k++){
        //     cout<<"*";
            
        // }
        //  for(int j=n-i;j>=0;j--){
        //     cout<<" ";
        
        // }
      
        
        cout<<endl;
    }
}
