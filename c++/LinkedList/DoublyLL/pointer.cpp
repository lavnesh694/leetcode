#include<iostream>
using namespace std;
void print(int *** p){
    * p= *p+1;
    cout<<***p;
}
int main(){
    int p=5;
    int *p1=&p;
    int **p2=&p1;
    int ***p3=&p2;
    print(p3);


}