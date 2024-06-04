#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr,arr2;
    arr.push_back(12);
    arr.push_back(34);
    arr.push_back(43);
    arr.push_back(24);
    arr.push_back(66);
    arr.push_back(73);
    arr.push_back(99);


    arr2.push_back(1);
    arr2.push_back(21);
    arr2.push_back(75);
    arr2.push_back(65);
    arr2.push_back(24);
    arr2.push_back(34);
    arr2.push_back(99);

cout<<"BEFORE \narray one : \n";
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<"    ";
    }

cout<<"\n array two : \n";

    for(int i=0;i<arr2.size();i++){
        cout<<arr2.at(i)<<"    ";
    }
swap(arr,arr2);
cout<<"AFTER \narray one : \n";
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<"    ";
    }

cout<<"\n array two : \n";

    for(int i=0;i<arr2.size();i++){
        cout<<arr2.at(i)<<"    ";
    }
    
    
}