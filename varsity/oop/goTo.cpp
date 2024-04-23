// goto is used to change the direction of a code ;
// its pretty handy when we need to skip some of our codes or go somewhere else in the code ;


#include<iostream>
using namespace std;
int main(){
int i=1.;
ab:
cout<<i<<endl;
i++;
if(i<11){
    goto ab;
}
else cout<< "the end"<<endl;

}