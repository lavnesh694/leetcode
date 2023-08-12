#include<iostream>
#include<set>
using namespace std;
int main(){
    set<string> names;
    int n;
    cout<<"Enter the no of  names"<<endl;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        names.insert(s);
    }
    cout<<endl;
    

    for(auto name:names){
        cout<<name<<" ";
    }

}