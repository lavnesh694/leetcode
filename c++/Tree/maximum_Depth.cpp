#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node*left;
    Node *right;

    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }

};
int height(Node*root){
    if(root==NULL){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);

    return max(left,right)+1;
}
    int maxDepth(Node* root) {

        int ans=height(root);
        return ans;
        
    }

void buildlevel(Node*&root){
    queue<Node*>q;
    cout<<"Enter the root of the tree "<<endl;
    int n;
    cin>>n;
    root=new Node(n);
    q.push(root);
    while(!q.empty()){
        Node*ans=q.front();
        q.pop();

        int l;
        cout<<"Enter the left of "<<ans->data;
        cin>>l;
        if(l!=-1){
            ans->left=new Node(l);
            q.push(ans->left);
        }
        int r;
        cout<<"Enter the right of "<<ans->data;
        cin>>r;
        if(r!=-1){
            ans->right=new Node(r);
            q.push(ans->right);
        }
    }

    q.push(root);


}
int main(){
    Node*root=NULL;
    buildlevel(root);
    int depth=maxDepth(root);
    cout<<"the maxdepth of tree is "<< depth;

}
