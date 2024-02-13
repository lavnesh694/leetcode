// graph is a data structurre which is comnintion of nodes and edges
#include <iostream>
#include<unordered_map>
#include<list>
using namespace std;

template <typename t> class graph{

    public:

        unordered_map<t,list<t>> adj;
    void addedge(t u,t v,int direction){

        adj[u].push_back(v);

        if(!direction){
            adj[v].push_back(u);
             
        }
    }

    void print(){
        for(auto i:adj){
                cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }




};

int main(){
    cout<<"ENter the no of nodes in graph";
    int n,m;
    graph<int> g;
    cin>>n;
    cout<<"Enter the number of edges in a graph";
    cin>>m;
    so hello
    for(int i=0;i<m;i++){
        cout<<"enter u and v"<<endl;
        int u,v;
        cin>>u>>v;
    g.addedge(u,v,0);

    }
    g.print();
}