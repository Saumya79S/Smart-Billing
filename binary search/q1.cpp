#include<iostream>
using namespace std;

int BS_1st_last(int size,int arr[],int key){
  int start=0;
  int end=size-1;
  int mid=start+(end-start)/2;
  int temp=mid;
  while(start<=end){
    if(key=arr[mid]){
      while(arr[temp--]=key){
        temp--;
      }
      cout<<"Least index:";
      return temp;
      while(arr[mid++]=key){
        mid++;
      }
      cout<<"max index:";
      return mid;
    }

    else if(key>arr[mid]){
      start=mid+1;
    }
    else {
      end=mid-1;
    }
    return -1;
  }
}

int main(){
  int array[10]={1,1,2,2,2,3,3,3,3,4};
  int index=BS_1st_last(10,array,3);
  cout<<"index:"<<index<<endl;
  return 0;
}