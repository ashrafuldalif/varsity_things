#include<iostream>
#include<map>
using namespace std;
int main(){
    
    map<int ,int>mp1;
    mp1.insert({1,10});
    mp1.insert({4,5});
    mp1.insert({7,70});
    mp1.insert({11,88});
    mp1.insert({11,78});
    mp1.insert({99,10});
    // we  can insert to same  index multiple  times  like we did in line 10 and 11 ;
    //but we  can change  the  value like we change  a value of a array like this
    mp1[11]=78;


    mp1.erase(4);//erase will just take one input which is the index which will be deleted 
    
    
    for(auto it:mp1){
        cout<<it.first<<" " <<it.second<<endl;
    }
    cout<<"0\n\n\n"<<endl;



    map<int ,int>::iterator it;

    for(it=mp1.begin();it!=mp1.end();it++){
        cout<<it->first <<" "<<it->second<<endl;
    }
    cout<<endl;
    cout<<mp1.size()<<endl;

    cout<<mp1.max_size()<<endl;

    cout<<mp1.count(7)<<endl;

    map<int,int>mp2=mp1;

        for(auto it:mp2){
        cout<<it.first<<" " <<it.second<<endl;
    }
    auto it2=mp1.lower_bound(99);
    auto it3=mp1.upper_bound(100);

    cout<<endl;
    
    cout<< it2 ->first <<" "<<it2->second<<endl;
    cout<< it3 ->first <<" "<<it3->second<<endl;
    // upper bound   ???
    // lower bound  ???

    }