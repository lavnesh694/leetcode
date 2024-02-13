// In today's lecture we are ggoing to learn polymorphism which mean svarious forms there are two types of polymorphism compile time and run time


#include<iostream>

using namespace std;

class complex{
    int real ,img ;
     public:
    complex(){

    }

    complex(int real,int img){
        this->real = real;
        this->img = img;
    }
    void display(){
        cout<<real<<" + "<<img<<"i";
    }

    complex operator+(complex a){
        complex ans;
        ans.real=real+a.real;
        ans.img=img+a.img;

        return ans;
    }
};
int main(){
    complex c1(3,4);
    complex c2(3,4);
    // c1.display();
    complex c3=c1+c2;
    c3.display();

}