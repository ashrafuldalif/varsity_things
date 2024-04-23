// name of the problem : write a program that will traverse each element of the array to find the sum and average of the elements ;

// num=num*1;



#include<stdio.h>
int main(){
    int n,sum=0;
    float avarage;
    printf("enter size of the array :");
    scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++){
        printf("enter %d no value :",i+1);
        scanf("%d",&nums[i]);
        sum+=nums[i];
    }
    avarage=(float)sum/(float)n;
    printf("\nSUM : %d\n",sum);
    printf("avarage : %0.2f",avarage);
    
}