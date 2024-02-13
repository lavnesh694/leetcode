// inhertiance

// the capablity of a class to derive properly and charectic from another class

// Acess modifiers 
// name     external code(int main me)  withinclass   derived class

//public:           yes                          yes             yes
// protected        no                           yes              yes
// private          no                           yes              no

//  private> protected>public

 #include <iostream>
 using namespace std;
 class Human{
    string name;
    int ageweight;
 };

 class student:public Human{

    public:

    int roll_no ,fees;

 };
 int main(){
    student A;
    A.fees=344;

 }