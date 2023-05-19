#include<iostream>
#include<vector>
using namespace std;

    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        int carry=0;
        for(int i=n;i>=0;i--){
            int digit=digits[i]+carry;
                if(i==n){
                    digit+=1;
                }
            
            int base=digit%10;
            carry=digit/10;
            digits[i]=base;
        }
        vector<int> aalu;
        if(carry){
            aalu.push_back(1);
        }
        for(int i=0;i<digits.size();i++){
            aalu.push_back(digits[i]);
        }

        return aalu;
      
    }
int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the data in the vector"<<endl;
    cin>>n;
    while(n){
        arr.push_back(n);
        cout<<"Enter value again"<<endl;
        cin>>n;
    }
    arr=plusOne(arr);
   for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
   }

}