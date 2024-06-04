#include<iostream>
using namespace std;

class A {

    public :
    static void display(){
        cout<<"static mathod can called without declaring a object"<<endl;
    }
};


int main(){
    A :: display();
    return 0;
}