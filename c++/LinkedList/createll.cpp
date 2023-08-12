// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node*next;

//     Node(int d){
//         data=d;
//         next=NULL;

//     }
    
// };
// void insertHead(Node*&head,Node*&tail,int d){
//     Node*ans=new Node(d);
//     if(head==NULL){
//         tail=ans;
//         head=ans;
//         return;
//     }
//     tail->next=ans;
//     tail=ans;

//     }

//     void print(Node*head){
//         while(head){
//             cout<<head->data<<" ";
//             head=head->next;
// }
//         }

// int main(){
//     Node *head= new Node(1);
//     Node*tail=head;
//     insertHead(head,tail,2);
//     insertHead(head,tail,3);
//     insertHead(head,tail,4);
//     insertHead(head,tail,5);
//     insertHead(head,tail,6);
//     print(head);
  

// }
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;

    node(int data){
        this->data = data;
        next=NULL;
    }


};
void insertathead(node*& head,int n){
    node*cur=new node(n);
    if(head==NULL){
     head=cur;
     return;
        
    }
    cur->next=head;
    head=cur;
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
void insertattail(node*head,node*&tail,int n){
    node*cur=new node(n);
    if(head==NULL){
        head=cur;
        tail=cur;
        return;
    }
    tail->next=cur;
    tail=cur;;
}
int main(){
    node * l1=new node(1);
    node*l2=l1;
    insertattail(l1,l2,2);
    insertattail(l1,l2,3);
    insertattail(l1,l2,4);
    insertattail(l1,l2,5);
    print(l1);

}
