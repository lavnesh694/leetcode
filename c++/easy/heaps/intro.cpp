# include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size=0;

    heap(){
        arr[0]=-1;
        size=0;

    }
   void insert(int n){
    size=size+1;
    int index=size;
    arr[index]=n;
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
int main(){
    heap ans;
    ans.insert(50);
    ans.insert(55);
    ans.insert(53);
    ans.insert(52);
    ans.insert(54);
    ans.delet();

    ans.print();


}