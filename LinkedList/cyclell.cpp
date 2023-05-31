#include<iostream>
#include<unordered_map>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int d){
        data=d;
        next=NULL;

    }
    
};
void insertHead(Node*&head,Node*&tail,int d){
    Node*ans=new Node(d);
    if(head==NULL){
        tail=ans;
        head=ans;
        return;
    }
    tail->next=ans;
    tail=ans;

    }
    bool hasCycle(Node *head) {
        if(head==NULL || head->next==NULL){
            return false;
        }
        unordered_map<int ,int> ans;
        Node*temp=head;
        int i=0;
        while(temp){
            ans[temp->data]++;
            if(ans[temp->data]>1){
                return true;
            }
            temp=temp->next;
        }
            

        
      return false;
      
        
    }

    int main(){
        Node*head=NULL;
        Node*tail=NULL;
        int n;
        cout<<"Enter the first node"<<endl;
        cin>>n;
        while(n>0){
            insertHead(head,tail,n);
            cout<<"Enter the next of "<<n;
            cin>>n;

        }
        bool ans=hasCycle(head);
        if(ans){
            cout<<"Yes the given linked list have cycle";
        }
        else{
            cout<<"NO the given linked list dont have any cycle";
        }
    }