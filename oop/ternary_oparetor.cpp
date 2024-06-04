#include<iostream>
using namespace std;

int main(){
    int mark;
    cin>>mark;

    string result=(mark>=80)?"A+":(mark>=75)?"A":(mark>=70)?"A-":(mark>=40)?"pass":"fail";
    cout<<result;
}