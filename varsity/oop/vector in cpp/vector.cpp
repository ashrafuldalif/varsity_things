#include<iostream>
#include<vector>

using namespace std;


int main(){
    vector<int>arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(16);
    arr.push_back(49);
    arr.push_back(56);
    arr.push_back(55);
    arr.push_back(99);
    arr.pop_back();  // it will delete an element from back 





    for(int i=0;i<arr.size();i++){

    // cout<<arr[i]<<endl;   // if the i no index is empty then it dosent give any error  and wont terminate the code instant it will give me a garbeg value;
    cout<<arr.at(i)<<"    ";   // if the i no index is empty then it will give a error and terminate the whole code after words 
    }
    cout<<"hiluu"<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;

    arr.erase(arr.begin()+2, arr.begin())+4;   //new line of code
cout<<endl;
    for(int i=0;i<arr.size();i++){

    cout<<arr.at(i)<<"   ";
    }

    //deleting all elements of an array
cout<<arr.empty()<<endl;

// arr.clear();
cout<<arr.size()<<endl;
cout<<arr.empty()<<endl;



}