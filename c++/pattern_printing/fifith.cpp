#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<"  ";
        }
        for(int j=2*i;j>=2;j--){
            cout<<"* ";
        }

        

        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int j=n-i;j>0;j--){
            cout<<"  ";
        }
        for(int j=2*i;j>=2;j--){
            cout<<"* ";
        }

        

        cout<<endl;
    }
}