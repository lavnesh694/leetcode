#include<iostream>
#include<math.h>
using namespace std;

long long power(long long  b,long long e){
    long long result=1;
    for(long long i=1;i<=e;i++){
        result*=b;;
    }
    return result;

}
int main(){
    long long n;
    cout<<"ENter your decimal nber"<<endl;
    cin>>n;
    // long long ans=0,r=0;
    // long long i=1;

    // while(n){
    //     r=n%2;
    //     long long chote=r*i;
    //     ans+=chote;
    //     cout<<chote<<" "<<ans<<endl;
    //     n=n/2;
    //     i*=10;
          
          

        

    // }
        int ans=0,r=0;
        int i=1;

        while(n){
             r=n%2;
             int chote=r*i;
            ans=chote+ans;
            i=i*10;
            n=n/2;

        }
    // cout<<ans<<endl;
        int final=0;
        int p=1;

        while(ans){
        int r=ans%10;
        r=!r;
        // cout<<r<<endl;
        int chote=r*p;
        cout<<chote<<endl;
        final=final+chote;
        p*=2;
        
        ans=ans/10;
        }


        // return final;
    cout<<"the binary representation is "<<final<<endl;
}