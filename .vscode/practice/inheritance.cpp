#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Base{
  protected:
  int a;
  void input_base(){
    cout << "Enter value of base : ";
    cin >> a;
  }
};

class Exponent{
  protected:
  int exp;
  void input_exp(){
    cout << "Enter value of power :" ;
    cin >> exp;
  }
};

class power : public Base , public Exponent{
  public:
  void calc_power(){
    input_base();
    input_exp();
    int pow=1;
    for(int i=1 ; i<=exp ; i++){
      pow = pow*a;
    }
    cout << "Result : " <<pow<<endl;
  }
};

int main(){
  power ABC;
  ABC.calc_power();
  return 0;
}