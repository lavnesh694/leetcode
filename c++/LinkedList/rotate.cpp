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
void reverse(Node*&head){
    Node*cur=head;
    Node*prev=NULL;
    Node*temp=head;
    while(cur){
        temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    head=prev;
}

void rotate(Node*&head,int k){
    reverse(head);
    int i=0;
    Node* temp=head;
    while(temp){
        i++;
        temp=temp->next;
    }

    int p=i%k;
    k=p;

    // cout<<"value of k is "<<p<<k<<i<<endl;
    int j=0;

    temp=head;
    while(j<k  && temp){
        // cout<<"tullu"<<endl;
        temp=temp->next;
        j++;
        
    }
 
    Node*cur=temp->next;
    temp->next=NULL;

    reverse(head);
    reverse(cur);
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    // cout<<endl;
    
    while(temp->next){
        temp=temp->next;
    }
    temp->next=cur;

    
    
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
//    temp= middleNode(temp);
    rotate(temp,3);
    print(temp);
}