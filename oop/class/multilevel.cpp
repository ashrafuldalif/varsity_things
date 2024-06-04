#include<iostream>
using namespace std;

class level1{
public:
int id;
};
class level2:public level1{
public:

string name ;
string address;
};
class level3:public level2{
    public :
    void input(){
        cout<<"enter your ID\n";
        cin>>id;
        cout<<"enter your name\n";
        cin>>name;
        cout<<"enter your address\n";
        cin>>address;
    }
};
class level4:public level3{
    public :
    void print(){
        cout<<"ID:\t"<<id<<endl;
        cout<<"name:\t"<<name<<endl;
        cout<<"address:\t"<<address<<endl;
    }
};

int main(){
    level4 p;

    p.input();
    p.print();

    
}