#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    
    vector<int> a={9,10};
    vector<int> b={1,2,3,4,5,6,7,9,10,10};
    vector<int> c={1,4,4,6,6,9,10};
    // unordered_map<int,int> d(0);
    // unordered_map<int,int> o(0);
    // unordered_map<int,int> n(0);
    // unordered_map<int,int> don(0);
    // for(int i=0;i<a.size();i++){
    //     if(d[a[i]]!=1){

    //     d[a[i]]++;
    //     }
    // }
    // for(int i=0;i<b.size();i++){
    //     if(o[b[i]]!=1){

    //     o[b[i]]++;
    //     }
    // }
    // for(int i=0;i<c.size();i++){
    //     if(n[c[i]]!=1){

    //     n[c[i]]++;
    //     }
    // }
    // for(int i=0;i<a.size();i++){
    //     // cout<<don[a[i]]<<endl;
    //     cout<<d[a[i]]<<' '<<o[a[i]]<<' '<<n[a[i]]<<endl;
    //     if(d[c[i]]==1 && o[c[i]]==1 && n[c[i]]==1){
    //         cout<<"the common elemnt is "<<c[i]<<endl;
    //         // d[c[i]]=0;
    //         // o[c[i]]=0;
    //     }
    // }
    vector<int> temp;
    unordered_map<int, int> d;

    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size() && k<c.size()){
        if(a[i]==b[j] && b[j]==c[k] && d[a[i]]!=1){
            // cout<<a[i]<<endl;
            d[a[i]]=1;
            temp.push_back(a[i]);
            i++;
            j++;
            k++;

        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<c[k]){
            j++;
        }
        else{
            k++;
        }
    }

    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
}
// new
