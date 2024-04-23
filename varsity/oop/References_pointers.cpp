#include<iostream>
using namespace std;
// reference : a reference variable is a reference tot an existing variable and it is created with the & operator.

// memory address : the  & operator was used to create a referece variable but it can also be used to get the  memory addresss of a variable ;which is the location of where e the variable isstored on the computer.

// Note them memory address is in hexadecimal form (0x..)

// referece variable is declared like &name this and  it dosent take any new location it just point to other locations if we change the value of the reference variable it will be seem that the pointed variables value also be changed coz both of them are stored in the same location like sibilings;

//pointer : a ointer  however is a variable that stores the memory address  as  its value 

// a pointer variable points  to a data  type  of the same type and is created  with the * operator the address of the variable youre working with is assigned to the pointer  
// pointer stored in int or string not float double got it?

int main(){
    int b=5;
    int &a=b;
    a=90;
    cout<<&b<<endl;
    cout<<&a<<endl<<endl;

    cout << a <<endl;
    cout<<b<<endl<<endl;

    //pointer

    string food = "cha";
    string* ptr = &food;
    cout << food <<endl;
    cout << &food<< endl;
    cout << ptr <<endl;
    // d-referencing it wil print the value of the pointed variaible
    cout << *ptr <<endl;

}