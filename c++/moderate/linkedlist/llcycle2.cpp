#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;


    node(int data){
        this->data=data;
        this->next=NULL;
    }

    
};
void inserthead(node*&head,int data){
        node*ans=new node(data);
        if(head==NULL){
            head=ans;

        }
        head->next=ans;
        head=ans;

    }

void insertattail(node*&head,int data)    {
    node*ans =new node(data);
    if(head==NULL){
        head=ans;
        return;
    }
    ans->next=head;
    head=ans;
}
    void print(node*head){
        while(head){
            cout<<head->data<<' ';
            head=head->next;
        }
    }
int main(){
    node*ans= NULL;
    node*head=ans;
    node*tail=ans;
    insertattail(tail,5);
    insertattail(tail,6);
    insertattail(tail,7);
    insertattail(tail,8);
    print(tail);

    

}