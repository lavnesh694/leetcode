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

    void print(Node*head){
        while(head){
            cout<<head->data<<" ";
            head=head->next;
}
        }

int main(){
    Node *head= new Node(1);
    Node*tail=head;
    insertHead(head,tail,2);
    insertHead(head,tail,3);
    insertHead(head,tail,4);
    insertHead(head,tail,5);
    insertHead(head,tail,6);
    print(head);
  

}