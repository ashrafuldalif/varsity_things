#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>vec;
    vec.push_back(1);
    vec.push_back(56);//
    vec.push_back(10);
    vec.push_back(87);
    vec.push_back(16);
    vec.push_back(32);
    vec.push_back(45);//
    vec.push_back(99);

    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<"   ";
    }
    cout<<endl;


        // we have to start from a lower index other wise it will be problamatic like 2 index  to 9 index we cant start from higher to lower like 6 to 2 


    // vec.erase(vec.begin()+2 ,vec.begin()+5);   // startting point to end-1 point
    // vec.erase(vec.begin()+2 ,vec.end()-1);   
    // vec.erase(vec.end()-6 ,vec.begin()+6);   
        // vec.erase( vec.begin()+1 ,vec.end()-1 );   

    vec.erase(vec.begin()+2,vec.end()-2);



    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<"   ";
    }
    cout<<endl;
    // vec.erase(vec.begin()+2 ,vec.begin()+5);   // endig point to start+1 point

}