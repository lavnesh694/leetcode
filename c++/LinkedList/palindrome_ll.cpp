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
    bool isPalindrome(Node* head) {
       
        Node*first=head;
        Node*aalu=new Node(5);
        Node*ballu=aalu;;
        // aalu->next=first;

        while(first){
            Node*cur=new Node(first->data);

            aalu->next=cur;;
            aalu=aalu->next;
            first=first->next;
        }
        Node*last=head;
        Node*main=ballu->next;

        Node*temp=reverse(last);

        while(temp!=NULL && main!=NULL){
            if(temp->data!=main->data){
                return false;
            }
            // cout<<temp->data<<" "<<main->data<<endl;
            temp=temp->next;
            main=main->next;
        }
        return true;
        
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
    bool ans=isPalindrome(head);

    if(ans){
        cout<<"yes the given linked list is palindrome";
    }
    else{
        cout<<"no the given linked list is not palindrome";
    }


}