#include<iostream>
#include <map>
using namespace std ;
int main(){

    multimap <int ,int > mMap,mMap1;
    mMap.insert({1,22});
    mMap.insert({2,12});
    mMap.insert({5,45});
    mMap.insert({9,52});
    mMap.insert({15,67});
    mMap.insert({2,33});
    mMap.insert({7,82});
    mMap.insert({1,99});
    multimap<int ,int >:: iterator mit,mitBeg,mitEnd;
    mitBeg=mMap.begin();
    mitEnd=mMap.end();
    for(mit=mitBeg;mit!=mitEnd;mit++){
        cout<<(*mit).first<<"\t"<<(*mit).second<<endl;
    }
    auto lowBound =mMap.lower_bound(4);
        cout<<"lower bound 4 :  "<<(*lowBound).first<<"  "<< (*lowBound).second<<endl;
    
    auto upBound =mMap.upper_bound(1);
        cout<<"Upper bound 1 :  "<<(*upBound).first<<"  "<< (*upBound).second<<endl;


    cout<<"size : "<<mMap.size()<<endl;  
    cout<<"Maxsize : "<<mMap.max_size()<<endl;  
    cout<<"count : "<<mMap.count(2)<<endl;  

    auto Faind=mMap.find(52);
    if(Faind!=mMap.end()) {
    cout<<"finded ";
    }
    else{ cout<<"not Found\n";}


    mMap1=mMap;
    cout<<"printing first Map "<<endl;


    cout<<"printing second Map after assigning "<<endl;

    for(auto e:mMap1){
        cout<<e.first<<"\t"<<e.second<<endl;
    }

    if(mMap.empty()) cout<<"multimap is empty\n";
    else cout<<"multimap is NOT empty\n";

    mMap.erase(2); 

    for(auto e:mMap){
        cout<<e.first<<"\t"<<e.second<<endl;
    }

    mMap.erase(mitBeg); 
    advance(mitBeg,3);
cout<<"after erasing :\t\n";
    for(auto e:mMap){
        cout<<e.first<<"\t"<<e.second<<endl;
    }

    mMap.clear();
cout<<"after clearing :\t\n";
    for(auto e:mMap){
        cout<<e.first<<"\t"<<e.second<<endl;
    }
    mMap.insert({4,66});
    mMap.insert({1,36});
    mMap.insert({14,96});
    mMap.insert({2,56});

    cout<<"before swaping : \n map 1\n";
    
    for(auto e:mMap){
        cout<<e.first<<"\t"<<e.second<<endl;
    }

    cout<<"before swaping : \n map 2\n";
    
    for(auto e:mMap1){
        cout<<e.first<<"\t"<<e.second<<endl;
    }

    mMap.swap(mMap1);
    cout<<"after swaping : \n map 1\n";
    
    for(auto e:mMap){
        cout<<e.first<<"\t"<<e.second<<endl;
    }

    cout<<"after swaping : \n map 2\n";
    
    for(auto e:mMap1){
        cout<<e.first<<"\t"<<e.second<<endl;
    }

    return 0;
}