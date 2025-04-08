#include<iostream>
#include<set>
using namespace std;
int main(){
  set<int> s;
  s.insert(9);
  s.insert(7);
  s.insert(11);
  s.insert(4);
  s.insert(0);
  s.insert(3);
  for(int i:s){
    cout<<i<<" ";
  }
  cout<<endl;
  set<int>:: iterator it=s.begin();
  it++;
  s.erase(it);
  cout<<"After deleting :"<<endl;
  for(int i:s){
    cout<<i<<" ";
  }

  set<int>:: iterator itr=s.find(20);
  cout<<endl;
  for(auto it=itr;it!=s.end() ; it++){
    cout<<*it<<" ";
  }
  return 0;
}