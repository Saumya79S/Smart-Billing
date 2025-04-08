#include<iostream>
using namespace std;

void display(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<"  ";
  }
}

void swapAlter(int arr[],int size){
  for(int i=0;i<size;i+=2){
    if(i+1<size){
      swap(arr[i],arr[i+1]);
    }
  }
}
int main(){
  int size=10;
  int arr[10]={1,2,3,4,5,6,7,8,9,10};

  cout<<"Before swapping : ";
  display(arr,size);
  cout<<endl;
  
  swapAlter(arr,size);
   cout<<"after swapping : ";
   display(arr,size);
   cout<<endl;
return 0;
}