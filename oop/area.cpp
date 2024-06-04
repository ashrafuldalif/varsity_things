#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a,i=3,result=0;
    while(i--){
        cin >>a;
        if(a>result){
            result=a;
        }
    }
cout<<result<<" eh o maior";
    return 0;
}
