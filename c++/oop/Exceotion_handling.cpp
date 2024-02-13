#include<iostream>
#include<string>
using namespace std;
class customer{
    string name;
    int bal,acc_no;
    public:

    customer(string name,int bal,int acc_no){
        this->name = name;
        this->bal = bal;
        this->acc_no = acc_no;
    }

    // i do deposit either withdeaw

    void deposit(int amount){
        if(amount>0){
            cout<<"amount is credited successfully"<<endl;
            bal += amount;
        }
        else{
            throw("amount should be greater than 0");
        }
    }

    // withdraw
    void withdraw(int amount){
        if(amount>0 && amount<=bal){

            bal-=amount;
            cout<<"amount is debited successfully"<<endl;

    }
    else{
        throw("There is some issue with your transaction");
    }
    }
};
// int main(){

//     // customer lk("lavnesh",5000,2345566);
//     // try{

//     // lk.deposit(200);
//     // lk.withdraw(40000);// iske bad wala koi operation nhi chalega kyoki isme exception aajayega aur ye sidha main catch me jayega aur fir bhar ho jayega
//     // lk.deposit(100);
//     // }
//     // catch(const char *e){
//     //     cout<<"Exception Occured: "<<e<<endl;

//     // }


//     // now lets take some another example if we try
//     int a,b;
//     cin >> a>>b;
//     try{

//         if(b==0){
//             throw("kuch to locha hain babu bhaiya");
//         }

//     int c=a/b;
//     cout<<c<<endl;
//     }
//     catch(const char*e){
//      cout<<"Exception occured: "<<e<<endl;
//     }

    
// // exeption is an unexpected problem that arises during the execution of a program and our program terminates suddenky with some error /issue


// // there is three things try,catch  and throw
// }

// Now lets do some dynamic memory allocation

int main(){
    try{
    int * arr=new int [1000000000000000];
    cout<<"your memory is allocated suuccesfully ";
    delete [] arr;

  
     
    }
    catch( const exception &e){
        cout<<"Exception occured: "<<e.what()<<endl;

    }


}