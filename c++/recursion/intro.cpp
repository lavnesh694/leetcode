# include <iostream>
using namespace std;
int  bday(int n){
    if(n==1){
        
        return 1;
    }
    return n*n+bday(n-1);
}

int  print(int* arr,int i,int n,int sum){
    if( i==n){
        return sum;
    }
   
   return  print(arr,i+1,n,sum+arr[i]);
    // cout<<arr[i]<<" ";
}

int second(int*arr,int i){
    if(i==-1){
        return 0;
    }

    return arr[i]+second(arr,i-1);
}
int main(){
    int n;
    cout<<"Enter the size of your array"<<endl;
    cin>>n;

    int *arr=new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
  int ans=  print(arr,0,n,0);

  int sec=second(arr,n-1);
  cout<<"the total sum of the array is "<<ans <<" and the sec is "<<sec;;

}