//  method overloading 
// constructor overloading 
// overloading means creating multiple mathod or constructor with same name 
// but there are 2 rules one of those must be followed 
// 1 .  the peramiters must be different in numbers 
//or 2. the peramiters must be different in data types
#include<iostream>
using namespace std;
class overloading {
    public:
int sum(int a,int b){
    return a+b;
}
int sum(int a ,int b,int c){
    return a+b+c;
}
double sum(double a,double b){
    return a+b;
}
double sum(double a,double b,double c){
    return a+b+c;
}

};


int main(){
    overloading obj;
    double a=obj.sum(1.0,2.3,5.5);
    cout <<a<<endl;
}