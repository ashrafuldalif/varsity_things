#include<stdio.h>
int factorial(int);
int main(){
    int input,ans=1;
    printf("enter a value to find the factorial\t");
    scanf("%d",&input);
    for(int  i=1;i<=input;i++){
        if(input<=1) {
            ans=input;
        break;
        }

        ans*=i;
    }
    // ans=factorial(input);
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