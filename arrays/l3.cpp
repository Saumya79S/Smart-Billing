#include<iostream>
#include <cstring>
using namespace std;

int length(char arr[]){
  int count=0;
  for(int i=0 ; arr[i] != '\0'; i++){
    count++;
  }
  return count;
}

void reverse(char arr[]){
  int i=0;
  int j=length(arr)-1;
  while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
  }
}

void printArr(char arr[]){
  for(int i=0 ; arr[i] != '\0' ; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


int main(){
  char arr[]="Love Sa";
  char arr2[10];
  strcpy(arr2,arr);
  reverse(arr);
  printArr(arr);
  if(strcmp(arr,arr2)==0){cout<<"Yes its a palindrome.";}
  else cout<<"Not a palindrome";
  return 0;
}