#include<iostream>
using  namespace std;

class personInfo {
    private:
    int nid;
    public:
    string name,address;
    public:

    void setId(int a){
        nid=a;
    }
    public:
    int getId(){
       return nid;
    }
};
int main(){

personInfo p1;
p1.address="dhaka";
p1.name="ashraful_D_alif";
p1.setId(23100122);

cout<<p1.name<<endl;
cout<<p1.address<<endl;
cout<<p1.getId()<<endl;




    return 0;
}