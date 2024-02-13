#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;

    Node(int data){
        this->data = data;
        next=NULL;
        prev=NULL;
    }
};

void insertl(Node*  head,Node*&tail,int data){

    Node*temp=new Node(data);

    if(head==NULL){
        head=temp;
    }

    temp->prev=tail;
    tail->next=temp;
    tail=temp;




}
void print(Node *head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void printr(Node *head){
    while(head){
        cout<<head->data<<" ";
        head=head->prev;
    }
    cout<<endl;

}
void insertf(Node* &head,int data){
    

    Node*temp=new Node(data);
    if(head==NULL){
        head=temp;
    }

    temp->next=head;
    head->prev=temp;
    head=temp;

}

void insertspecific(Node*&head,Node*&tail,int pos,int data){
    // Node*temp=head;
    Node*cur=new Node(data);
    if(pos==0){

        cur->next=tail;
        tail->prev=cur;
        head=cur;
        return;
        
    }
    while(pos-1!=0 && tail->next){
        tail=tail->next;
        pos--;
        
    }
    
    if(tail->next ){

    cur->next=tail->next;
    cur->prev=tail;
    tail->next->prev=cur;
    tail->next=cur;
    }
    
    else{
        insertl(head,tail,data);
    }


}
int main(){

    Node*head=new Node(100);
    Node*tail=head;
    
    // insertl(head,tail,1);
    // insertl(head,tail,2);
    // insertl(head,tail,3);
    // insertl(head,tail,4);
    // print(head);

    // printr(tail);

     insertf(head,1);
    insertf(head,2);
    insertf(head,3);
    insertf(head,4);
    print(head);

    // printr(tail);
    Node*hip=tail;
    tail=head;
     insertspecific(head,tail,2,775);
    // insertf(head,2);
    // insertf(head,3);
    // insertf(head,4);
    print(head);

    printr(hip);


}