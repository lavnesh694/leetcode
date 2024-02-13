// #include<iostream>
// using namespace std;
// void twop(int *arr,int s,int e,int n,int sum){
//     if(s>n ||e>n || s>e){
//         return;
//     }
//     int ans=0;
//     for(int i=s;i<=e;i++){
//         ans+=arr[i];
//     }
    
//     if(sum==ans){
//         if(s==e){
//           cout<<s<<endl;
//         }
//         else{
//         cout<<s<<" "<<e;

//         }
//         cout<<endl;
//         twop(arr,s+1,e+1,n,sum);
//     }
//    else  if(sum>ans){
//         twop(arr,s,e+1,n,sum);
//     }
//    else  {
//         twop(arr,s+1,e,n,sum);
//     }
    
       
    

// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<"Enter the size of array"<<endl;
//     int *arr=new int(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }
//     cout<<"enter the sum "<<endl;
//     int sum;
//     cin>>sum;

//     twop(arr,0,0,n,sum);
    

// }

#include <iostream>
using namespace std;

void findPairs(int *arr, int start, int end, int size, int targetSum) {
    if (start >= size || end >= size || start > end) {
        return;
    }

    int currentSum = 0;
    for (int i = start; i <= end; ++i) {
        currentSum += arr[i];
    }

    if (currentSum == targetSum) {
        if (start == end) {
            cout << "Index: " << start << endl;
        } else {
            cout << "Indices: " << start << " to " << end << endl;
        }
    findPairs(arr, start + 1, end+1, size, targetSum);
    }

   else  if (currentSum <= targetSum) {
        findPairs(arr, start, end + 1, size, targetSum);
    }
    else{
        findPairs(arr, start+1, end , size, targetSum);
        
    }

}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int sum;
    cout << "Enter the target sum: ";
    cin >> sum;

    findPairs(arr, 0, 0, n, sum);

    delete[] arr; // Don't forget to deallocate the memory.
    return 0;
}
