#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(12);
    arr.push_back(99);
    arr.push_back(24);
    arr.push_back(66);
    arr.push_back(34);
    arr.push_back(73);
    arr.push_back(43);
vector <int> ::iterator itl;
itl=arr.begin();

    for(itl;itl<arr.end();itl++){
        cout<<*itl<< "    ";
    }


}