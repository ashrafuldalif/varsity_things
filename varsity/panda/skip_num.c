#include<stdio.h>
int main(){
    int a=0;
    
    while(a<10){
        
        if(a==7){
            continue;
        }
        a++;
        printf("%d\t",a);
    }
}