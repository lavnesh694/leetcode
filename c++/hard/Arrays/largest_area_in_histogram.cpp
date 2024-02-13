#include<iostream>
#include<vector>
using namespace std;
 #include<vector>
 int largestRectangle(vector < int > & heights) {
   // Write your code here.
   int result=0;
 for(int i=0;i<heights.size();i++){
   int left=0,right=0;
   for(int j=i-1;j>=0;j--){
     if(heights[j]<heights[i]){
       break;
     }
     else{
       left+=heights[i];

     }
   }
   for(int j=i+1;j<heights.size();j++){
     if(heights[j]<heights[i]){
       break;
     }
     else{
       right+=heights[i];

     }
   }
   int ans=left+right+heights[i];
   result=max(result,ans);

 }
 return result;
 }
int main(){

}