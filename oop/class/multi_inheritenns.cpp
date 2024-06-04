#include<iostream>
using namespace std; 

class A{
    public:
int id;
};
class B{
    public:
string name ;
};
class C: public A, public B{
    public:
    
    void print(){
        cout<<id<<endl;
        cout<<name<<endl;
    }
};




int main(){
    C obj;
    obj.id=6312;
    obj.name="ashraful";
    obj.print();
}