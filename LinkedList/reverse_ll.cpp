#include<iostream>
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
    Node* reverse(Node*head){
    Node*temp=head;
    Node*prev=NULL;
    while(temp){
        Node*cur=temp->next;
        temp->next=prev;
        prev=temp;
        temp=cur;
    }
    return prev;
}
 void print(Node*head){
        while(head){
            cout<<head->data<<" ";
            head=head->next;
}
        }
int main(){
    Node*head=NULL;
    Node*tail=NULL;
    int n;
    cout<<"Enter the first dataue of linked list"<<endl;
    cin>>n;
    while(n>0){
        insertHead(head,tail,n);
        cout<<"Enter the next of "<<n;
        cin>>n;

    }
    Node* ans=reverse(head);
    print(ans);

    

}