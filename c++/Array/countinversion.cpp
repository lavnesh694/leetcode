// #include<iostream>
// using namespace std;
// void mergesort(int *arr,int s,int mid,int e ,int & count){
//     int l1=mid-s+1;
//     int l2=e-mid;
//     int *a1=new int[l1];
//     int *a2=new int[l2];
//     for(int i=0;i<l1;i++){
//         a1[i]=arr[s+i];
//     }
//     for(int i=0;i<l2;i++){
//         a2[i]=arr[i+mid+1];
//     }

//     int i=0,j=0,k=s;
//     while(i<l1 && j<l2){
//         if(a1[i]<a2[j]){
//             arr[k++]=a1[i++];
//         }
//         else{
//             arr[k++]=a2[j++];
//         }
//     }
//     while(i<l1){
//         arr[k++]=a1[i++];
//     }
//     while(j<l2){
//         arr[k++]=a2[j++];
//     }
// }


// void merge(int *arr, int s ,int e ,int & count){
//     if(s<e){
//         int mid=s+(e-s)/2;
//         merge(arr,s,mid,count);
//         merge(arr,mid,e,count);
//         mergesort(arr,s,mid,e,count);
//     }
// }
// int main(){
//     int n;
//     cout<<"ENter the size of arr: ";
//     cin>>n;
//     int *arr=new int[n];
//     cout<<"Enter the elements in the array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];

//     }
//     int count =0;
//     merge(arr,0,n-1,count);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
#include<iostream>
using namespace std;

void mergesort(int *arr, int s, int mid, int e, int &count) {
    int l1 = mid - s + 1;
    int l2 = e - mid;
    int *a1 = new int[l1];
    int *a2 = new int[l2];

    for (int i = 0; i < l1; i++) {
        a1[i] = arr[s + i];
    }

    for (int i = 0; i < l2; i++) {
        a2[i] = arr[i + mid + 1];
    }

    int i = 0, j = 0, k = s;

    while (i < l1 && j < l2) {
        if (a1[i] < a2[j]) {
            arr[k++] = a1[i++];
        } else {
            arr[k++] = a2[j++];
            count += (mid - s + 1) - i; // Increment count when an element from the second half is merged
        }
    }

    while (i < l1) {
        arr[k++] = a1[i++];
    }

    while (j < l2) {
        arr[k++] = a2[j++];
    }
}

void merge(int *arr, int s, int e, int &count) {
    if (s < e) {
        int mid = s + (e - s) / 2;
        merge(arr, s, mid, count);
        merge(arr, mid + 1, e, count);
        mergesort(arr, s, mid, e, count);
    }
}

int main() {
    int n;
    cout << "Enter the size of arr: ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> i[arr];
    }

    int count = 0;
    merge(arr, 0, n - 1, count);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nInversions count: " << count << endl;

    delete[] arr;
    return 0;
}
