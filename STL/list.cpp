#include<iostream>
#include<list>
using namespace std;
int main()
  list<int> l;
  l.push_front(9);
  l.push_front(8);
  for(int i:l){
    cout<<i<<endl;
  }
  cout<<"front : "<<l.front();
  l.erase(l.begin());
  cout<<endl;
  for(int i:l){
    cout<<i<<endl;
  }
  return 0;
