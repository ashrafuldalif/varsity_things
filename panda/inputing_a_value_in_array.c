#include<stdio.h>
int main(){
    int a[100],n,k,item,i;
    printf("how meny element :");
    scanf("%d",&n);
    printf("enter %d elements:",n);
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("which position you wanna insert ");
    scanf("%d",&k);
    printf("enter the value ");
    scanf("%d",&item);
    
  for(i=n;i>=(k-1);i--){
        a[i+1]=a[i];
    }
        a[k-1]=item;

    for(i=0;i<n+1;i++){
        printf("%d\t",a[i]);
    }
}