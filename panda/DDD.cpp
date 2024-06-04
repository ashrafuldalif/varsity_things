#include<bits/stdc++.h>
using namespace std;
int main(){
float a,b,c;
cin>>a;

if(a>=0.00 && a<=2000.00){
printf("Isento\n");
}

else if (a>=2000.01 && a<=3000.00){
    a=a-2000.00;
printf("R$ %0.2f\n",(a/100)*8);
}

else if (a>=3000.01 && a<=4500.00){
    a=a-3000.00;
    
printf("R$ %0.2f\n",((a/100)*18)+80);
}
else if (a>=4500.01 ){
    a=a-4500.00;
    
    printf("R$ %0.2f\n",((a/100)*28)+80+270);
}
}