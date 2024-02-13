// constructior and destructor 
// constructor is a function which automatically called when we create a object and the name of the constructor is similar to the class name constructor don't have any written type 
# include<iostream>
using namespace std;
class student{
    public:
    string name;
    int id;


    student(){  // default constructor
        cout<<"Instructor is called"<<endl;
    }
    student(int id,string name){
        this->name=name;
        this->id=id;
    } // parametrized constructor
    void print(){
        cout<<" The name of the student is: "<<name<<endl;;
        cout<<"The id of the student is: "<<id<<endl;
    }

    // constructoe overloading means that the name of the function is same but there is different parameter 
    // inline constructor

    inline student(string n,int i) :name(n),id(i){

    }
    // here is also a copy constructor which i think i know it very well
      
    student(student & b){
        name=b.name;
        id=b.id;

    } 
    // destructor is the lasst function which is called before the object is destroyed there is only one destructor in the class it delete the dynamic loction resources it realsess the memory which usees dtnamic memory desctror work in reverse order the object we create first so their desctructor is called last

};
int main(){

    student s1("lk boss",1000);
    student s2(s1);
    s2.print();


}