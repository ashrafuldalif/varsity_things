#include<iostream>
using namespace std;
int main(){

int a[10]={5 , 9 , 1 , 7 , 6 , 8, 0 , 55 , 40 , 5};
int counter=9,temp;
while(counter){
    counter=0;
for(int i=0;i<9;i++){
if(a[i]>a[i+1]){
    temp=a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
    counter=9;
}
}
}
for(int i=0;i<10;i++){
    cout<<a[i]<<endl;
}
return 0;
}