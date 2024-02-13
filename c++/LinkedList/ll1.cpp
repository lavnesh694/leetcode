// Linked List on 15 jan 2024

#include<iostream>
using namespace std;

// Making a Linked List class Node

class Node{
    public:
    int data;
    Node*next;


    Node(int data){
        this->data=data;
        next=NULL;
    }

    void insertatstart(Node*&head,int data){
        Node*temp=new Node(data);
        temp->next=head;
        head=temp;
    }

    void insertatend(Node * head,Node* & tail,int data){
        Node*temp=new Node(data);
        if(head==NULL){
            head=temp;
            return;
        }
        tail->next=temp;
        tail=temp;
    }
    void insertat_specific_pos(Node *&head,Node*tail,int data,int pos){
        Node*temp=new Node(data);
        if(pos==0){
          temp->next=head;
          head=temp;
        }
        while(tail){

            if(pos-1==0){
            Node*don=tail->next;
            tail->next=temp;

            temp->next=don;


            break;

            }
            pos--;
            tail=tail->next;
            

        }
    }

};
    void print(Node* head){
        while(head){
            cout<<head->data<<" ";
            head=head->next;
        }
    }
    Node* createreverse(int arr[], int i,int size,Node*prev){
        if(i==size){
            return prev;
        }
        Node*temp=new Node(arr[i]);
       
        prev->next=temp;
         return createreverse(arr,i+1,size,temp);

    }
    Node* create(int arr[], int i,int size){
        if(i==size){
            return NULL;
        }
        Node*temp=new Node(arr[i]);
       
         temp->next= create(arr,i+1,size);

         return temp;

    }
// int main(){
//     Node*head=new Node(5);
//     Node*tail=head;;
//     head->insertatend(head,tail,6);
//     head->insertatend(head,tail,7);
//     head->insertatend(head,tail,8);
//     head->insertatstart(head,8);
//     head->insertatstart(head,100);
//     head->insertat_specific_pos(head,head,201,5);



// }

// now here we are creating a linked list from the array

int main(){
    int arr[]={2,4,5,6,7};
    Node*temp=NULL;
    int size=5;
    temp=create(arr,0,size);
    print(temp);
}