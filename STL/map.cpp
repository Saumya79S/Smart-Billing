#include<iostream>
#include<map>
using namespace std;
int main(){
  map<int , string> m;
  m[1]="Saumya";
  m[20]="Singh";
  m[5]="Study";
  m.insert({7,"good girl"});
  for(auto i:m){ // here i is of type std::pair<const int, string>
    cout<<i.first<<"=" <<i.second<<endl;
  }
  return 0;

}