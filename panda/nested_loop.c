#include<stdio.h>
int main()
{
int age,ans;
printf(" \n Enter your age:");
scanf("%d", &age);
if(age>=18){
    printf("\n You are adult");
    printf("\n Are you married? \n press 1 for yes \n press 0 for no\t  ");
    scanf("%d",&ans);
    if( ans){
        printf(" have you any children");
        scanf("%d", &ans);
     if(ans){
        printf(" how many children you have"); 
        scanf("%d", &ans);
        }

        else{
        printf("\n You are great ");
        }
            
    }
        else {

        }


}
else
printf("\n you are such a kid  ");

}