#include<iostream>
using namespace std ;

class PersonInformation {
    public :
    string name,address,phone;
public :
    void showInfo(){
        cout<<"Name :\t"<<name<<endl;
        cout<<"Address :\t"<<address<<endl;
        cout<<"Phone :\t"<<phone<<endl;
        
    }
    void takeInput(){
        cout<<"\nName :\t";
        cin>>name;
        cout<<"\nAddress :\t";
        cin>>address;
        cout<<"\nPhone :\t";
        cin>>phone;


    }

};




int main(){
    PersonInformation  p1;
    // p1.name="ashraful";
    // p1.address="munshigonj";
    // p1.phone="01611551313";
    p1.takeInput();

p1.showInfo();

    return 0;

}