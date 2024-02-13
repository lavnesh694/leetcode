# include<iostream>
using namespace std;
int main(){

    int arr[8]={1,2,3,4,5,6,7,8};
    int *ptr=arr;
    while(*ptr){
        cout<<*ptr<<" ";
        ptr++;
    }
}