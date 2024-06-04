#include <iostream>
#include <list>
using namespace std;

int main()
{
    //list declaration
    list<int>l1; // (list_keyword)<type>list_name

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_front(4);
    l1.push_front(5);

    list<int>::iterator it1;

    for(it1=l1.begin();it1!=l1.end();it1++)
        cout << *it1 << " ";
    cout << endl;

    for(auto ele : l1)
        cout << ele << " ";
    cout << endl;

    it1=l1.begin();
    advance(it1,2);
    l1.insert(it1,7);

    for(auto ele : l1)
        cout << ele << " ";
    cout << endl;


    it1=l1.begin();
    advance(it1,1);

    list<int>::iterator it2;
    it2=l1.begin();
    advance(it2,4);

    l1.erase(it1,it2);

    for(auto ele : l1)
        cout << ele << " ";
    cout << endl;

    list<int>l2;

    l2.push_back(1);
    l2.push_back(1);
    l2.push_back(1);
    l2.push_back(1);
    l2.push_back(2);
    l2.push_back(2);
    l2.push_back(3);
    l2.push_back(4);
    l2.push_back(5);
    l2.push_back(1);
    l2.push_back(4);
    l2.push_back(3);
    l2.push_back(2);
    l2.push_back(4);
    l2.push_back(1);
    l2.push_back(6);
    l2.push_back(3);
    l2.push_back(4);
    l2.push_back(3);
    l2.push_back(2);
    l2.push_back(2);

    for(auto ele : l2)
        cout << ele << " ";
    cout << endl;

    l2.remove(1);

    for(auto ele : l2)
        cout << ele << " ";
    cout << endl;

    l2.reverse();

    for(auto ele : l2)
        cout << ele << " ";
    cout << endl;

    l2.sort();

    for(auto ele : l2)
        cout << ele << " ";
    cout << endl;

    l2.unique();

    cout << "unique" << endl;

    for(auto ele : l2)
        cout << ele << " ";
    cout << endl;

    cout << "Before Swap" << endl;
    cout << "List 01" << endl;
    for(auto ele : l1)
        cout << ele << " ";
    cout << endl;


    cout << "List 02" << endl;
    for(auto ele : l2)
        cout << ele << " ";
    cout << endl;

    swap(l1,l2);

    cout << "After Swap" << endl;
    cout << "List 01" << endl;
    for(auto ele : l1)
        cout << ele << " ";
    cout << endl;


    cout << "List 02" << endl;
    for(auto ele : l2)
        cout << ele << " ";
    cout << endl;

    l1.sort();
    l2.sort();

    for(auto ele : l1)
        cout << ele << " ";
    cout << endl;


    cout << "List 02" << endl;
    for(auto ele : l2)
        cout << ele << " ";
    cout << endl;


    l1.merge(l2);

    cout << "After merge" << endl;

    for(auto ele : l1)
        cout << ele << " ";
    cout << endl;

    cout << l2.size() << endl;

    return 0;
}
