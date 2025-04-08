#include"iostream"
using namespace std;
int sumEle(int arr[],int size){
  int sum=0;
  for(int i=0;i<size;i++){
  sum=sum+arr[i];
  }
  return sum;
}

void printArr(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<"  ";
  }
  cout<<endl;
}

void swap(int arr[],int size){
  int start=0;
  int end=size-1;
  while(start<end){
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    end--;
    start++;
  }
  printArr(arr,size);
}


int main(){
  // int s;
  // cout<<"Enter size: ";
  // cin>>s;
  int arr[6]={1,2,3,4,5,6};
  // for(int i=0;i<s;i++){
  //   cin>>arr[i];
  // }
  cout<<endl;

  cout<<"Sum of elements is :"<<sumEle(arr,5)<<endl;
  cout<<"Before swaping : ";
  printArr(arr,6);
  cout<<endl;
  cout<<"After swaping: ";
  swap(arr,6);
  
}