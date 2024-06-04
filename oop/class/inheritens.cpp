#include<iostream>
using namespace std;

class Employee{
public : 
int id=34567 ;
string name ,dept;
protected : 
void show (){
    cout<<id<<endl;
}
};

class Eaddress{
    public:
    string address="munshingonj";
};
class Programmer :public Employee , public Eaddress{

  public :
  void show2(){
    //show();//mathod from base  class
    cout<<id<<endl;


  }
};

int main(){

Programmer e;
e.show2();

cout<<e.id<<endl;
cout<<e.address<<endl;

}