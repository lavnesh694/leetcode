// high leveel languages c,cobol,fortan
// programm divided into task ans these tasks wwere grouped into funciton in the propcedural oriented programming there are group of these function 
// in thsi our main focus into function 
// demerits of pop in the global data anayone can acces it if the data structur it changed so we have to change all the function thesedemerits 
// so we used  obeject oriented programming
//in this our mian focus is not on the function is on the data means reverse of pop
// in these we binding the data with the function want to use it
// in this programming our prograam is divided into object and every object have some data and function and every function have their own object 
// it protects data from accedental changes the specidic data is acces by a specific function 


// no  understand class
// class is fundamental unit of oop and it is a user defined data types.now let us understand with example we have 3 fruits mango apple and grapes so there i can make a class where every fruit have some property here fruit is datatype and mango apple grapes are variables and the properties of this class is taste and colour .

// objects 
// objects are a variable of type class from the previous example mango aplle grapes all are the objects .object is thing which exist in real world

// another example there is class student and their properties is name roll no and their function get marks .now the variable of dataytpe student is called the objects and thy have all properties which are defined in our class

// now lets move to the actual code

# include <iostream>
#include <string>
using namespace std;
class check{
    
    int l;
    int d;
    short i;
    short s;
    bool c;
    
    bool p;
    char t;
};
class student{
    public:
    
    string name;
    int roll_no;


    student(string name, int roll_no){
        this->name = name;
        this->roll_no = roll_no;
    }

    void set_roll(int rool){
        if(rool<10){
            cout<<"bhaiya kuch 10 se bada dalo"<<endl;
            return ;
        }
        roll_no=rool;
    }

    void get_data(){
        cout <<this->name<<" "<<this->roll_no;
        return;
    }
     void pin(){
        int i=0;
        while(i!=3){
            i++;

        string pass;
        cout<<"Enter the password: ";
                getline(cin, pass);
        if(pass=="lk_boss"){
            cout<<"the password is "<<4951<<endl;
        }
        else{
            cout<<"password is wrong"<<endl;
            cout<<"only "<<3-i<<" attempt is reamaining "<<endl;

        }
        }
     }


};
int main(){

    student * lk=new student("lavnesh",29);

     cout<<(*lk).name;
//    lk->pin();

}