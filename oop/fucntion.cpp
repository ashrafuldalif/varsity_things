// a funcntion is a block of  code which only runs when it is called 

// you can pass data  , known as parameters ,into a  function.

// return type : what the function is going to return a  function can return 0 or 1 value;

// function name : a uniqe name must be given for the function

// arguments : the values that are declared whithin a function when the function is called are  known as arguments there can be infinite number of arguments 

//body :The body of a function in C++ is the set of statements enclosed within curly braces {} that define the actions of the function when it is called.

// there are two types of function 
// (i) call by value
// (ii) call by reference



#include<iostream>
using namespace std;
int sum (int a , int b){
 return a+b;    
}
void swap(int &a,int &b){
int i=a;
a=b;
b=i;
}

int main (){
int a,b;
cin>>a>>b;
 cout<<"a = "<<a<<endl;
 cout<<"b = "<<b<<endl;   
int  e=sum(a,b);
cout<<e<<endl;
swap(a,b);
cout<<"after swaping :"<<endl;
 cout<<"a = "<<a<<endl;
 cout<<"b = "<<b<<endl;
    return 0;
}