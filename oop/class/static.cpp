#include<iostream>
using namespace std;

class A {

    public :
    static int numOfStudent;
    A(){
        numOfStudent++;
    }
    public :
    void display(){
        cout<<"students quantity :\t"<<numOfStudent<<endl;
    }
};
int A :: numOfStudent=0;

int main(){
    A s1 ;
    s1.display();
    A s2 ;
    s2.display();
    return 0;
}