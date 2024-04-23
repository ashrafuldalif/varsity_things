#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    double abc[3];
    cin>>abc[0]>>abc[1]>>abc[2];

    int check=5,temp;
    while(check){
        check=0;
        for(int i=0; i<2;i++){
            if(abc[i]<abc[i+1]){
                temp=abc[i];
                abc[i]=abc[i+1];
                abc[i+1]=temp;
                check=4;


            }
        }
    }    



    double sa=pow(abc[0],2),sb=pow(abc[1],2),sc=pow(abc[2],2);
    double sumBC=sb+sc;
     if(abc[1]+abc[2]<=abc[0]){
        cout<<"NAO FORMA TRIANGULO"<<endl;

    }
     if(sumBC==sa){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
         if(sumBC<sa){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
         if(sumBC>sa){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if(abc[0]==abc[1] && abc[1]==abc[2]){
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
     else if( abc[0]==abc[1] || abc[0]==abc[2] || abc[1]==abc[2]){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }
}