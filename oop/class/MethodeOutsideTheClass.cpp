#include<iostream>
using namespace std;
class A{
public:
int a=10;

public:
void display();
};
void A::display(){
    cout<<"its created outside \nbut declired inside the class\nA = "<<a<<endl;
}
int main(){
    A outside;
    outside.display();
}