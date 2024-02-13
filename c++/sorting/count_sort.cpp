// #include<iostream>
// #include<algorithm>
// #include<climits>
// #include<cstri
// using namespace std;
// int find_max(int *arr,int n){

//     int p=INT_MIN;
//     for(int i=0;i<n;i++){
//         p=max(p,arr[i]);
//     }
//     return p;
    
// }


// void Count_sort(int * arr,int n,int p){

//     int *arr2=new int[p+1];
//     memset(arr2,0,p+1);
//     for(int i=0;i<n;i++){
//         arr2[arr[i]]++;
//     }
//     int k=0;

//     for(int i=0;i<=p;i++){
//         if(arr2[i]){
//             while(arr2[i]){

//             arr[k]=i;
//             k++;
//             arr2[i]--;
//             }

//         }
//     }

// }

// int main(){
//     int n;cout<<"Enter the size of your array: ";cin >> n;
//     int *arr=new int[n];
//     cout<<"Enter the elements in your array: ";
//     for(int i=0;i<n;i++){
//         cin>>i[arr];
//     }
//     int ssize=find_max(arr,n);
//     Count_sort(arr,n,ssize);

//     cout<<"so here is your final sorted array ";

//     for(int i=0;i<n;i++){
//         cout<<i[arr]<<" ";

//     }




// }
#include<iostream>
#include<algorithm>
#include<climits>
#include<cstring> // Include the necessary header for memset
using namespace std;

int find_max(int *arr, int n) {
    int p = INT_MIN;
    for (int i = 0; i < n; i++) {
        p = max(p, arr[i]);
    }
    return p;
}

void Count_sort(int *arr, int n, int p) {
    int *arr2 = new int[p + 1]; // Increase the size to accommodate values up to p
    memset(arr2, 0, sizeof(int) * (p + 1)); // Initialize the counting array to zero

    for (int i = 0; i < n; i++) {
        arr2[arr[i]]++;
    }

    int k = 0;
    for (int i = 0; i <= p; i++) {
        while (arr2[i]) {
            arr[k] = i;
            k++;
            arr2[i]--;
        }
    }

    delete[] arr2; // Don't forget to free the allocated memory
}

int main() {
    int n;
    cout << "Enter the size of your array: ";
    cin >> n;
    
    int *arr = new int[n];
    cout << "Enter the elements in your array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ssize = find_max(arr, n);
    Count_sort(arr, n, ssize);

    cout << "So here is your final sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr; // Don't forget to free the allocated memory

    return 0;
}
