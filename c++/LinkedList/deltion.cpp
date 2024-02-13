#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data=data;
           next=NULL;
    }
};

 Node* create(int* arr,int i,int size){

    if(i==size){
        return NULL;
    }
    Node*temp=new Node(arr[i]);

    temp->next=create(arr,i+1,size);
    return temp;

 }

 void print(Node* node){
    if(!node){
        cout<<"No node have to print\n ";
        return ;    }
    cout<<"So Here is your Final Linked list"<<endl;
    while(node){
        cout<<node->data<<" ";
        node=node->next;
    }
 }

 void deletefirst(Node*&node){
    if(node==NULL){
        return;
    }
    node=node->next;

 }
 Node* deletelast(Node*&node){
    if(node==NULL || node->next==NULL){
        node=NULL;
        return NULL;
    }
    if(node->next->next==NULL){
        node->next=NULL;
        return node;
    }

    node->next=deletelast(node->next);

    return node;
    
 }
 void delete_pos(Node*head,Node*&tail,int pos){
    if(pos==1){
       deletefirst(tail);
    }
    int i=1;
    while( tail->next){
        if(i+1==pos){

        tail->next=tail->next->next;
        break;
        }
        tail=tail->next;
        i++;
    }
    if(i<pos){
        cout<<"your linked list can't be deletd"<<endl;
    }
 }
int main(){
    int n;
    cout<<"Enter the size of the Linked list";
    cin>>n;
    int * arr;

    if(n!=0){

    cout<<"\nENter the elements in the linked List"<<endl;
    arr=new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    }
    

    Node*temp=NULL;
    temp=create(arr,0,n);
    Node*tail=temp;
    // deletefirst(temp);
    // delete_pos(temp,tail,5);
    deletelast(temp);
    print(temp);


}