#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){

        for(int j=1;j<i;j++){
            cout<<"   ";
        }
        for(int j=2*n-2*i;j>=0;j--){
                 cout<<" * ";
        }
        cout<<endl;
    }


}