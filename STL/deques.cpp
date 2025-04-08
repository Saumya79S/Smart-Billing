#include<iostream>
using namespace std;
#include<deque>
int main(){
  deque<int> d;
  d.push_front(2);
  d.push_front(3);
  d.push_front(4);
  d.push_front(5);
  for(int i=0;i<d.size();i++){
    cout<<d.at(i)<<endl;
  }
  cout<<"First element is : "<< d.front() <<endl;
  cout<<"Size is : "<<d.size()<<endl;
  cout<<"Max Size is : "<<d.max_size()<<endl;
  d.pop_front();
  cout<<"Size is : "<<d.size()<<endl;
  cout<<"Max Size is : "<<d.max_size()<<endl;
}