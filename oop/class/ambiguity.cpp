#include<iostream>
using namespace std;
class Base1{
    public:
    void greet(){
        cout<<"How are you ?"<<endl;
    }
};
class Base2{
    public:
    void greet(){
        cout<<"kemon acen apni ?"<<endl;
    }
};
class child: public Base1 ,public Base2{
    public:
    void greet(){
        Base1::greet();
    }
    
};

int main(){
    child c1;
    c1.greet();
    
}