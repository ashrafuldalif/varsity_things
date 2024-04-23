#include<stdio.h>
int main()
{
    int input,sum=0 ;
    scanf("%d",&input);
    for(int i=1;i<=input;i++)
    {
        printf("%d",i);
        sum+=i;
        if(i<input){
            printf("+");
        }
        else{
            printf("=");
        }
    }
    printf("%d",sum);
}