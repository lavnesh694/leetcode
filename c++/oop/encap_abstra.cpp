// static data memeber

// it is declared using static keyword
// it is used to count the no of objects we created in the particular class
// the total_cus we apply static to their starting so their is only one copy of it created and all the objects don't have their seperate total_cus they have only one single total_cus which all objects in the customer class are pointing


// encapuslation 
// wrapping the data and information in a single unit while don't giving direct access to user ; all change are done with example all the properties of object in class is private it also means hidng the data



// abstraction meands hinding the internal implementation from the user only give the user outcome
#include<iostream>
using namespace std;

class customer{
    
    string namee;
    int id,balance; static int total_cus,total_balance;

    public:
    customer(string s ,int i ,int bal){
        namee=s;
        id=i;
        balance=bal;
        total_cus++;
        total_balance+=bal;
    }
    void getcount(){
        cout<<"the total numnber of the customer is "<<total_cus<<endl;
        cout<<"the total balance is "<<total_balance<<endl;
    }

    static void access(){
        cout<<total_cus<<" "<<total_balance<<endl; // it is a class function it only acces class variable not the object properties
    }

    void deposit(int bal){
        balance+=bal;
        total_balance+=bal;
    }
    void withdraw(int bal){
        if(balance>=bal && bal>=0){
            balance-=bal;
            total_balance-=bal;
        }
        else{
            cout<<"insuffient balance "<<endl;
        }
    }

};
int customer :: total_cus=0;// used for giving intital value 0 to the total_cus  :: this is scope resolution operator

// static is used to create a variable which is only the part of class it is not the part of object
int customer :: total_balance=0;
int main(){

    customer a1("lavnesh",1,1000);
    customer a2("lk boss",2,10000);



    // we can also accces it without object

    // customer:: total_cus=5; only when it is public

    // we also have methond to acces it when  it is private with the help of stattic function

    a2.deposit(5000);
    a2.withdraw(10010);

    customer:: access();
    a2.getcount();


}