// Write a C program to determine if a given year is a leap year or not. (Hint: Leap years are divisible by 4 but not by 100 unless they are also divisible by 400)


#include<stdio.h>
int main()
{  int num1;
printf("\n  Enter the number: ");
scanf("%d",&num1);
if(num1%4==0){
printf("\n%d leap Year",num1);
}
else {
printf("\n %d not leap",num1);
}
    return 0;

}