#include<iostream>
#include<stack>
using namespace std;
 bool isValid(string s) {
        stack<char> ans;
        for(int i=0;i<s.length();i++){
            if(s[i]=='[' || s[i]=='('  || s[i]=='{'){
                ans.push(s[i]);
            }
            else if(!ans.empty()){
             
                    if((s[i]==']' && ans.top()=='[') || (s[i]==')' && ans.top()=='(')||(s[i]=='}' && ans.top()=='{')){

                    ans.pop();
                    }
                else{
                    return false;
                }
   
                }
               
            
        }
        if(ans.empty()) return true;

        return false;
}
int main(){
    cout<<"Enter the string of brackets";
    string s ;
    cin>>s;
    string p =isValid(s)?"yes the string is valid":"not the string is not valid";;
    cout<<p;

}