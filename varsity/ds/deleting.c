#include<stdio.h>

int main(){
    int n,k;
    printf("enter the  size of the array :\t");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements for the array :\t",n);

    for(int i=0;i<n;i++){

         scanf("%d",&arr[i]);

    }       


    for(int i=0;i<n;i++){
    printf("%d\t",arr[i]);
} 
   printf("\n\n enter the position which element do you wanna delete :\t");
    scanf("%d",&k);
    k=k-1;
    
    for(int i=k;i<n-1;i++){
        if(k>=(n)){
            printf("deletion is not possible ");
        }else{
            arr[i]=arr[i+1];
        }
    }

    for(int i=0;i<n-1;i++){
        printf("%d\t",arr[i]);
    }
    
}