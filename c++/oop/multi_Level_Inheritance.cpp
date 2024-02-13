// #include<iostream>
// using namespace std;

// class person{
//     protected:
//     string name;
//     // keep in mind one thing that when you are trying to acces parent classs in your child class so if their is no default constructor in thr parent class it gives the error because automatically the parent class constructor is called is it called hirechical inheritance which the parent class has multiple child class
    
//     person(){

//     };
//     person(string name){
//         this->name = name;
//     }
//     public:
//     void intro(){
//         cout<<"Hello my name is "<<name<<endl;
//     }

// };
// class student{
//     protected:
//     int id;
//     public:
//     void intro(){
//         cout<<"Hello my id is "<<id<<endl;
//     }

// };
// class empoloyee:public person{
//     protected:
//     int salary;

//     public:
//     void monthly(){
//      cout<<"my monthly salary is "<<salary<<endl;
//     }
// };

// class manager:public empoloyee{
//     public:
//     string dept;
    
//     manager(int sal, string name,string dept){
//         this->name=name;
//         this->salary=sal;
//         this->dept=dept;
//     }

//     void work(){
//         cout<<"my work is "<<dept<<endl;
//     }
// };

// // the differnce between the multiple inheritance and multilevel inheritance is that in multilevel you add properties of child class one by one but on the other hand in multiple inheritance you can inherit more than one class in child class with the help of command
// class boss:public person,public student{
//     private:
//     string bname;
    
//     public:
//     boss(string bname,string name,int id){
//         this->bname=bname;
//         this->name=name;
//         this->id=id;
//         // this->dept=dept;
//     }
// };
// int main(){
//     boss b1("mahi","lk boss",5);

  


// }

// so sabse phle hm sikhenge single level inheritance

#include<iostream>
using namespace std;

// class human{
//     protected:
//     string name;

// };
// class student:public human{
//     int id;

//     student(string name,int id){
//         this->name = name;
//         this->id = id;

//     }


// };

// end of single level inheritance

// starting of multilevl inheritance

// class human{
//  protected:
//  string name;
// };
// class person:public human{
//     protected:

//     string lname;

   

// };
// class student:public person{

//     public :
//     int id;

//     student(int id,string lname,string name){
//         this->id=id;
//         this->name=name;
//         this->lname=lname;
//     }

// };

// now here is the end of the multilevel inheritance now we start the multiple in  heritance

// class person{
//     protected:
//     string name;

// };
// class student{
//     protected:
//     int id;
// };
// class human:public student,public person{
//     public:

//     human(string name, int id){
//         this->name = name;
//         this->id=id;
//     }
// };

//  now here is the end of the multiple inheritance now we start the hierahicl inheritance

// class human{
//  protected:
//  string name;
//  int age;
// };
// class person:public human{
//     protected:

//     string lname;

//     public:

//     person(string lname, int age, string name){
//         this->name=name;
//         this->age=age;
//         this->lname=lname;
//     }

   

// };
// class student:public human{

//     public :
//     int s_id;

//     student(string name,int age,int id){
//         this->age=age;
//         this->name=name;
//         this->s_id=s_id;
//     }

// };

// now here is our heirache inheritance is completed now we have to start the hybrid inheritance
// which is made up of multiple and hieracrchial inheritance

//  in this one class is accesible by remaining classesa and remaining classes is  using one more classes for multiple inheritance

// class student{
//     protected:
//     int s_id;
// };

// class male{
//     protected:
//     string gender="male";
//  public:
//     void print(){
//         cout<<"iam am "<<gender;
//     }
// };

// class female{
//     protected:
//  string gender="female";

//  public:
//   void print(){
//         cout<<"iam am "<<gender;
//     }
// };

// class girl:public student,public female{
//     public:

//     girl(int id){
//         this->s_id=id;
//     }


// };
// class boy:public student,public male{

//     public:

//     boy(int id){
     
//      this->s_id=id;

//     }

// };

// now here is our  hybrid inheritance completes


// now we start our multipath inheritance


// isme kya hota hain ki do bachee hain jo ek class ko acces krte hain aur phir ek bacha hain jo ki un dono class ko acces krta hain to phir use common properties aa jayengi kyoki un dono class ne kisi ek class ko acces kiya tha


//  mtlb short me common property aa jati hain isme so class confuse ho jati hain

// so we use virtual like class studnet: class virtual parent
  
int main(){

  


}