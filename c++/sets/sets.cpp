// set is an stl constainer used to store unique values
// it stores values in ordered state (increaseing or either decreasing )
// There is no indexing required
// Elements are identified by their own values
// ones value is inserted in a set it cannot be modified

// advantages of  set
// 1 unique values
// 2 store data in orderd manner
// 3 dynamic in size,no overflowing errorr
// fastr insertion deletion and searching complexity is o(logN)

// Disadavntages of set
// 1 can not acces element with the help of indexing
// 2 uses more memory than arary
// 3 it is not suitable for large data sets

// Decleration of set
// By default values are stores in accending order
// traversal of  a set is done with iterators

// Memeber function of a set
// 1 size()
// 2 empty() return true if empty else false
// 3 clear() remove all elements from set
// 4 find() returns position of elemnt if present else return end iterator
#include<iostream>
#include<set>
using namespace std;
int main(){
set<int,greater<int>> names;
names.insert(10);
names.insert(1);
names.insert(100);
names.insert(19);
names.insert(15);
// cout<<names.size();
set<int>::iterator itr;
for (itr=names.begin();itr!=names.end();itr++){
    cout<<*itr<<endl;
}
// names.erase(100);
auto it =names.begin();
it++;
advance(it,1);


// names.erase(it);
// names.erase(names.begin(),names.end());

for(auto value:names){
    cout<<value<<endl;
}
if(names.find(99)!=names.end()){
    cout<<"value is present"<<endl;
}
else{
    cout<<"value is not present"<<endl;
}
cout<<names.count(10)<<endl;
// cout<<names.lower_bound(10);
// cout<<names.upper_bound(10);



}
