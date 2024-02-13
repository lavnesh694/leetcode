#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;

    node(int data){
        this->data = data;
        this->left =NULL;
        this->right =NULL;
    }

};

node*buildtree(node*root){
    
    cout<<" enter thr data "<<endl;
    int n;
    cin>>n;
    root=new node(n);
    if(n==-1){
        return root;
    }

    cout<<"enter the data left of the "<<n;
    root->left=buildtree(root->left);
    cout<<"enter the data right of the "<<n;
    root->right=buildtree(root->right);


}
void levelordertraversal(node*root){
    
    queue<node* > ans;
    ans.push(root);
    ans.push(NULL);
    while(!ans.empty()){
        node* i=ans.front();
        ans.pop();
        if(i==NULL){
            cout<<endl;
            if(!ans.empty()){
                ans.push(NULL);
            }
        }
        else{
              if(i->left){
            ans.push(i->left);

        }
        if(i->right){
            ans.push(i->right);
        }

            if(i->data!=-1){
                cout<<i->data <<" ";
            }
        }
        
         
      

    }

}
int main(){
    // 1 3 7 -1 -1 11 -1 -1 5  17 -1 -1 -1
    node*root=NULL;
    root=buildtree(root);
    levelordertraversal(root);


}