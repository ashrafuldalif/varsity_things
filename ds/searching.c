#include<stdio.h>
int main(){
int i,n,item;
printf("how many element do you want to enter :\t");
scanf("%d",&n);
int arr[n];

for(i=0;i<n;i++){
    printf("enter %d no element :\t",i+1);
    scanf("%d",&arr[i]);
}
    printf("which item do you want to search :\t");
    scanf("%d",&item);

for(i=0;i<n;i++){
    if(arr[i]==item){
        printf("element %d is in the %d no cell",item,i+1);
        break;
    }
}
    if(i==n){
        printf("%d is not exist in the array ",item);
    }


}