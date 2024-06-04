#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //vector declaration
    vector<int>v1; //(vector keyword) <data_type> vector_name
    //inserting into a vector
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(45);
    v1.push_back(56);
    v1.push_back(99);
    //push_back will insert an element at the back of the vector

    //traverse an vector
    cout << v1[0] << " ";
    cout << v1[1] << " ";
    cout << v1[2] << " ";
    cout << v1[3] << " ";
    cout << endl;
    //cout << v1[10] << " ";

    cout << v1.at(0) << " ";
    cout << v1.at(1) << " ";
    cout << v1.at(2) << " ";
    cout << v1.at(3) << " ";
    cout << endl;
    //cout << v1.at(10) << " ";
    //cout << "Hi ";

    for(int i=0;i<v1.size();i++)
        cout << v1.at(i) << " ";
    cout << endl;
    //size function returns the size of the vector

    cout << v1.front() << endl;//front function returns the front value
    cout << v1.back() << endl;//back function returns the back value

    if(v1.empty())
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;

    v1.clear();
    //clear function deletes all elements of the vector

    cout << v1.size() << endl;

    if(v1.empty())
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;
    //empty function is a boolean function which returns true is the vector is true otherwise false

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(45);
    v1.push_back(56);
    v1.push_back(99);

    for(int i=0;i<v1.size();i++)
        cout << v1.at(i) << " ";
    cout << endl;

    v1.pop_back();
cout<<"a1"<<endl;
    for(int i=0;i<v1.size();i++)
        cout << v1.at(i) << " ";
    cout << endl;
    //pop_back function deletes the last element of the vector

    v1.push_back(65);
    v1.push_back(99);

    //v1.erase(v1.begin()+2,v1.begin()+5);
    /*erase is used to delete multiple elements from any position of a vector.
    this function takes two parameters (start_index,stop_index)
    for this we can use two functions
        1. begin() -> it points at the top index of the vector. Its range is (start_index:(stop_index-1))
    */
    v1.erase(v1.end()-3,v1.end()-1);
    /*1. end() -> it points at the last index of the vector. Its range is ((start_index+1):stop_index)
    */
cout<<"a2"<<endl;

    for(int i=0;i<v1.size();i++)
        cout << v1.at(i) << " ";
    cout << endl;

    v1.insert(v1.begin()+2,123);
    /*insert function is used to insert an element in a vector in any position.
    it needs two parameters (position, element)
    */




    for(int i=0;i<v1.size();i++)
        cout << v1.at(i) << " ";
    cout << endl;

    vector<int>v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);

    cout << "Before swap" << endl;
    cout << "V1 vector" << endl;
    for(int i=0;i<v1.size();i++)
        cout << v1.at(i) << " ";
    cout << endl;
    cout << "V2 vector" << endl;
    for(int i=0;i<v2.size();i++)
        cout << v2.at(i) << " ";
    cout << endl;

    swap(v1,v2);
    //its swaps two vectors.

    cout << "After swap" << endl;
    cout << "V1 vector" << endl;
    for(int i=0;i<v1.size();i++)
        cout << v1.at(i) << " ";
    cout << endl;
    cout << "V2 vector" << endl;
    for(int i=0;i<v2.size();i++)
        cout << v2.at(i) << " ";
    cout << endl;

    sort(v2.begin(),v2.end());
    //it arranges the vector in ascending order
    for(int i=0;i<v2.size();i++)
        cout << v2.at(i) << " ";
    cout << endl;

    reverse(v2.begin(),v2.end());
    //it revers the vector
    for(int i=0;i<v2.size();i++)
        cout << v2.at(i) << " ";
    cout << endl;

    vector<int>::iterator it1;
    //it1=v2.begin();

    cout << "Using iterator" << endl;
    //Iterator works like a pointer to a vector.
    for(it1=v2.begin();it1<v2.end();it1++)
        cout << *it1 << " ";
    cout << endl;

    return 0;
}
