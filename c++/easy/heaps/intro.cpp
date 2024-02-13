# include<iostream>
# include<vector>
using namespace std;
class heap{
    public:
    // int arr[100];
    vector<int> arr;
    int size=0;

    heap(){
        arr.push_back(-1);
        size=0;

    }
   void insert(int n){
    size=size+1;
    int index=size;
    arr.push_back(n);
    while(index>1){

    int parent=index/2;
    if(arr[parent]<arr[index]){
        swap(arr[parent],arr[index]);
        index=parent;

    }
    else{
        return;
    }
    }
   }
  void  print(){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";

    }
  }

  void delet(){
     if(size==0){
        return;
     }
     arr[1]=arr[size];
     size--;
     int i=1;

     while(i<size){
        int left=i*2;
        int right=i*2+1;

        if(left<=size && arr[left]>arr[i]){
            swap(arr[left],arr[i]);
            i=left;
        }
        else if(right<=size && arr[right]>arr[i]){
            swap(arr[right],arr[i]);
            i=right;
        }
        else{
            return;
        }

     }

    
  }
};
// void heapify(vector<int> & arr,int i){
//     int size=arr.size();
    
//     int left=2*i;
//     int right=2*i+1;
//     int largest =i;
//     if(left<=size && arr[left]>arr[largest]){
//         largest=left;
//     }
//     if(right<=size && arr[right]>arr[largest]){
//         largest=right;
//     }
//     if(largest!=i){
//         swap(arr[largest],arr[i]);
//         heapify(arr,largest);
//     }
    

// }
// int main(){
//     // heap ans;
//     // ans.insert(54);
//     // ans.insert(55);
//     // ans.insert(53);
//     // ans.insert(52);
//     // ans.insert(50);
//     // ans.delet();

//     // ans.print();

//     vector<int> don={-1,54,55,53,52,50,92};
//     heapify(don,1);
//     for(int i=(don.size())/2;i>0;i--){
//         heapify(don,i);
//     }
//     for(int i=1;i<don.size();i++){
//         cout<<don[i]<<' ';
//     }


// }
// void heapify(vector<int> &arr, int i) {
//     int size = arr.size();
    
//     int left = 2 * i;
//     int right = 2 * i + 1;
//     int largest = i;
    
//     if (left < size && arr[left] > arr[largest]) {
//         largest = left;
//     }
    
//     if (right < size && arr[right] > arr[largest]) {
//         largest = right;
//     }
    
//     if (largest != i) {
//         swap(arr[largest], arr[i]);
//         heapify(arr, largest);
//     }
// }

void heapify(vector<int> & arr,int i){
    int n=arr.size();
    int left=2*i+1;
    int right=2*i+2;
    int largest =i;
    if(left<n && arr[largest]>arr[left]){
        largest=left;
    }
    if(right<n && arr[largest]>arr[right]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,largest);
    }
}

int main() {
    vector<int> don = { 54, 55, 53, 52, 50, 92};

    // Heapify each non-leaf node
    for (int i = (don.size()) / 2; i > 0; i--) {
        heapify(don, i);
    }

    // Print the heap
    for (int i = 1; i < don.size(); i++) {
        cout << don[i] << ' ';
    }

    return 0;
}