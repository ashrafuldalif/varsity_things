#include<bits/stdc++.h>
using namespace std;
// the difference of list and vector  is ,in vector we can incert elements from backside but in list we can do it both sides  

// in vector we can use indexs to do tasks but in list we cant do that we have to iterator for that .
int main(){
// declaration are  same just change the keyword 
list <int> fl;
    // fl.push_back(1);
    fl.push_back(32);
    fl.push_back(43);
    fl.push_back(55);
    fl.push_back(62);
    fl.push_front(26);
    fl.push_front(87);
    fl.push_front(87);
    fl.push_front(87);
    fl.push_front(87);

    list <int>::iterator itl;
itl=fl.begin();
    // itl=fl.begin();
    advance(itl,2);
    fl.insert(itl,7);

    list <int>::iterator itl2;
    itl2=fl.begin();
    advance(itl2,5);
    for(itl=fl.begin();itl!=fl.end();itl++){
        cout<<*itl<<"\t";
    }
    cout<<endl;

    // second way to  print a list 
    // fl.erase(itl,itl2);
    
    fl.remove(87);  // it will remove all 87 

    for(auto e:fl){ // this forEach only usable for printing the list 
        cout<<e<<"\t";
    }
    cout<<endl;


    return 0;
}