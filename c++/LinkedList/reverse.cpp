#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data = data;
    }
};
Node* createLinkedList(int *arr,int n,int i){
    if(n==0 || i==n){
        return NULL;
    }
    Node*temp=new Node(arr[i]) ;
   temp->next=createLinkedList(arr,n,i+1);

   return temp;
    
}

void print(Node*head){
    if(!head){
        cout<<"No node to have print\n";

    }
    while(head){
        cout<<head->data<<' ';
        head=head->next;
    }
}

Node*reverse(Node*head){
    if(!head||!head->next){
        return head;
    }
    Node*chotu=reverse(head->next);
    head->next->next=head;
    head->next=NULL;

    return chotu;
}

Node* middleNode(Node* head) {

        Node* slow=head;
        Node* fast=head;

        while(fast->next && fast){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
        
        
        
    }
    

Node* reverseit(Node*head){
     if(!head||!head->next){
        return head;
    }
   
    Node*prev=NULL;
    Node*cur=head;
    Node*temp=head;
    while(cur){
        temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
        
    }
    return prev;
    
}

int main(){
    int n;
    cout<<"Enter the size of the linked list ";
    cin>>n;
    int *arr;

    if(n!=0){
        cout<<"Enter the elements of the linked list\n";
        arr=new int[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];

        }
    }
    
    Node*temp=createLinkedList(arr,n,0);
   temp= middleNode(temp);
    print(temp);


}