#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    set<int> s1;
    set<int> s2;
    vector<int>v1;
    vector<int>v2;
    int n,m;
    cout<<"ENter the size of 1 and second vector"<<endl;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cout<<"enter elemnt "<<i+1<<"in vector 1"<<endl;
        int i1;
        cin>>i1;
        v1.push_back(i1);
    }
    // s1.insert(v1);
    for(int i=0;i<m;i++){
        cout<<"enter elemnt "<<i+1<<"in vector 2"<<endl;
        int i1;
        cin>>i1;
        v2.push_back(i1);
    }
    // auto itr=s1.begin();
    // auto ptr=s2.begin();
    // s2.insert(v1);
    int ans=0;
    for(auto first:v1){
        s1.insert(first);
       
        }
    for(auto first:v2){
        s2.insert(first);
       
        }

        // for(auto one:s1){
        //     for(auto second: s2){
        //         if(one==second){
        //             ans+=one;
        //         }
        //     }
        // }

        for(auto i:s1){
            if(s2.find(i)!=s2.end()){
                ans+=i;
            }
        }
        cout<<"so the sum of common elements are "<< ans;
    

}