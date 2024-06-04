//constructor dont have any return type not even void
// constructor dosnt return anything
// constructor can have peramiters 
// a class can have 0 or multiple constructor 
// constructor is automatic called when a class is created & it only called ones ( it means we can call the constructor again )
// if there are  multiple construtors then only one constructor will be called when the class is created others will not be called 
#include<iostream>
using namespace std;

class Student {
  public :
   int id;  
   string name ,address,depertment;
   public:
Student (int x){
id=x;
} 
};
int main(){
    Student s1(1);
    
}