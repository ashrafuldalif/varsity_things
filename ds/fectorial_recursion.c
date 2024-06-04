#include<stdio.h>
int factorial(int);
int main(){
    int input,ans;
    printf("enter a value to find the factorial\t");
    scanf("%d",&input);
    ans=factorial(input);
    printf("factorial of %d is %d",input,ans);
return 0;
}

int factorial(int a){
    if(a==0 || a==1){
        return 1;
    }
    else {
        return a*factorial(a-1);
    }
}