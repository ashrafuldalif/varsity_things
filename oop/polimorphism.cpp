// override only occures in inharitence not it other cases thats not override

#include<iostream>
using namespace std;

class Base {
public :
int var1=10;

public: 
void display(){
    cout<<"Base case variable :"<<var1<<endl;
}
};
class Derived:public Base {
public :
int var2=33;

public: 
//overRide
void display(int a){
    cout<<"derived case variable :"<<var2<<endl;
}
};
int main(){
    Derived p1;
    p1.display(1);

    return 0;
}