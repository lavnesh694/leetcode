# include<iostream>
using namespace std;
 int strStr(string haystack, string needle) {
        
        for(int i=0;i<haystack.length();i++){
        
                string s= haystack.substr(i,needle.length());
                // cout<<s<<endl;
                if(s==needle){
                    return i;
                }
            
        }
        return -1;
        
    }
int main(){
    string first ,second;
    cout<<"Enter the parent string "<<endl;
    cin>>first;
    cout<<"Enter the substring to find "<<endl;
    cin>>second;
    cout<<"The "<<second<<" string is present at index "<<strStr(first,second);
}