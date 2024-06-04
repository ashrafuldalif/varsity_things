#include<stdio.h>
int main(){
    int num=9,reminder;
    reminder=num%2;
    if(reminder!=0){
        printf("%d is a odd number",num);
    }
    else{
        printf("%d is a even number",num);
    }
}