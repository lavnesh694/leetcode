// #include<iostream>
// #include<vector>
// using namespace std;

// int merge(int & arr,int s,int mid,int e){
//   int high=arr[e];
//   int low=s-1;
//   for(int i=low;i<high;i++){
//     if(arr[i]<=high){
//       low++;
//       swap(arr[i],arr[low]);
//     }
//   }
//   low++;
//   swap(arr[low],arr[high]);
//   return low;
// }

// void quick(int & arr,int s,int e){
// if(s<e){
//   // int mid=s+(e-s)/2;
//   int pivindx=merge(arr,s,e);

//   quick(arr,s,pivindx-1);
//   quick(arr,pivindx+1,e);


// }}
// int main(){

// vector<int> arr={2,4,1,20,9,82};

//   quick(arr,0,5);

//   for(int i=0;i<6;i++){
//     cout<<arr[i]<<" ";
//   }

//   //   int n;
//   //   cout<<"enter the value of n"<<endl;
//   //   cin>>n;

 
//   // for(int i=1;i<=n;i++){
//   //   for(int j=1;j<=i;j++){
//   //          cout<<"* ";
//   //   }
//   //   for(int j=2*n-2*i;j>0;j--){
//   //       cout<<"  ";
//   //   }

//   //   for(int j=1;j<=i;j++){
//   //       cout<<"* ";
//   //   }
//   //   cout<<endl;
//   // }
//   //  for(int i=1;i<=n;i++){
//   //   for(int j=1;j<=n-i+1;j++){
//   //          cout<<"* ";
//   //   }
//   //   for(int j=2*i;j>=2;j--){
//   //       cout<<"  ";
//   //   }

//   //   for(int j=n-i;j>0;j--){
//   //       cout<<"* ";
//   //   }
//   //   cout<<endl;
//   // }
// }
#include <iostream>
using namespace std;

// Function to partition the array and return the index of the pivot
int partition(int arr[], int low, int high) {
    int pivot =arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
      if(arr[j]<=pivot){
        i++;
        swap(arr[i],arr[j]);

      }
    }
    i++;
    swap(arr[high],arr[i]);
    return i;
  
}

// Function to perform QuickSort
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get the index of the pivot
        int pivotIndex = partition(arr, low, high);

        // Recursively sort the sub-arrays on both sides of the pivot
        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}

int main() {
    // Example usage
    int myArray[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    // Calculate the size of the array
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Perform QuickSort
    quicksort(myArray, 0, size - 1);

    // Display the sorted array
    std::cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }

    return 0;
}