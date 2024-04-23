#include<stdio.h>
int main(){
    int swap,n;
printf("enter the size of the array:\t");
scanf("%d",&n);
int arr[n];
printf("enter the elements of the array:\t");
    for(int i=0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0 ;i<(n-1);i++){

        for(int j=0;j<(n-i-1);j++){
            if(arr[j]>arr[j+1]){
                swap =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }

        }
    }

    for(int i=0 ;i<n;i++){
        printf("%d\t",arr[i]);

    }
}