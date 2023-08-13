// vectors are dynamic array where aarays are static we can resize it and the similarity is both store the eleemnt in contiguous memory location 

// Decleration of vector
// vector<datatype> vector-name;
// vector<datatype> vector-name(size)optional;
// size or capacity of a vector is not same capacity is always more than or equal to vector size
// V.Pushback is used to insert elemnt at end of vector
// v.insert(positoin ,elemnt) insert elemnt at a  specifice position 
// v.begin( is uded to tell you where is the first elemnt )
// v.end( is uded to tell you where is the last elemnt)
// v.pop_back(remove elemnt from last)
// v.erase(position) delete a specific posotion
// v.end is greater than last index
// now its time to start
# include<iostream>
# include <vector>
using namespace std;
int main(){
//     vector<int> array;
//     for(int i=0;i<=10;i=i+2){
//         array.push_back(i);
//     cout<<array.size()<<" "<<array.capacity();
//     cout<<endl;
//     }
//     array.resize(12);
//     // cout<<array.size()<<" "<<array.capacity();

//     for (int ele:array){// for each loop iterate the elemnts
//         cout<<ele<<" ";
//     }
//     cout<<endl;
//     //now insert
// array.insert(array.end()-6,99);
// // first argument is used to tell where should we insert the elemnt and second argumnet tell which element is to be insert

// // now erase

// array.erase(array.begin()+3);
//     for(int i=0;i<array.size();i++){
//         cout<<array[i]<<" ";
//     }

//     cout<<endl;
// array.pop_back();
// array.pop_back();
// cout<<array.size()<<" "<<array.capacity();;

// some basic questions

//q1 find the last occurence of vector in a given vector

// vector for all question is 
vector<int> v{23,44,52,81,99};
// int n;
// cout<<"Enter the elemnt what you want to search"<<endl;
// cin>>n;

//  for(int i=v.size()-1;i>=0;i--){
//     if(v[i]==n){
//         cout<<"the last index is "<<i;
//         break;
//     }
//  }


//q2 check whether the array is sorted or not

for(int i=0;i<v.size();i++){
    if(i==v.size()-1){
        cout<<"yes your array is sorted";
        break;

    }
    if(v[i]<=v[i+1]){
        continue;
    }
    else{
        cout<<"your array is not sorted";
        break;
    }
}
  v.push_back(88);
  v.push_back(88);
  v.push_back(88);
  v.push_back(88);
  v.push_back(88);
  v.push_back(88);

v.clear(); // is used to clear the vector size is 0 but capacit is same;

// note is we insert the elemnt in vector which not under the capacity so capacity is dubled as their previous capacity

cout<<v.capacity();
 


}








