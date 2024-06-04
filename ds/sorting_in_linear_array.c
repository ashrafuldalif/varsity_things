#include<stdio.h>
//bubble sort 
int main(){
    int n, a=5,temp,count;
printf("enter the size of the array:\t");
scanf("%d",&n);
count=n;
int arr[n];
printf("enter the elements of the array:\t");
    for(int i=0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(a){
        a=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
                a=6;
            }
        }
    // n-=1;
    }
    for(int i=0;i<count;i++){
        printf("%d\t",arr[i]);
    }
}