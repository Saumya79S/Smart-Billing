#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main() {
fstream f;
ofstream fout;
ifstream fin;
fin.open("a1.txt");
fout.open ("a1.txt",ios::app);
if(fin.is_open())
fout<<" tutorials point";
cout<<"Data has been appended to file"<<endl;
fin.close();
fout.close();

string word;
f.open("a1.txt");
while (f >> word) {
cout << word << " ";
}
return 0;
}